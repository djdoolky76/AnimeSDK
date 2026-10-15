#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFPFEGNEJDA;
class KDBJHIOOOLB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBDJKHDICCI_CTOR_OFFSET UNITYSDK_OFFSET(0xBFE4EB0)
#define PBDJKHDICCI_ICBPOKHOLOE_OFFSET UNITYSDK_OFFSET(0xBFE4D60)
#define PBDJKHDICCI_IDOFFOMIPIC_OFFSET UNITYSDK_OFFSET(0xBFE4DB0)

inline static constexpr unsigned int PBDJKHDICCI_TypeDefinitionIndex = 79213;

	class PBDJKHDICCI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FFPFEGNEJDA*>* MCMKAOFNDMN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDJKHDICCI_CTOR_OFFSET))(this);
		}

		::System::Void ICBPOKHOLOE(::System::Collections::Generic::List_1<::FFPFEGNEJDA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FFPFEGNEJDA*>*))((::PBYTE)hIl2Cpp + PBDJKHDICCI_ICBPOKHOLOE_OFFSET))(this, a1);
		}

		::KDBJHIOOOLB* IDOFFOMIPIC(::System::UInt32 a1)
		{
			return ((::KDBJHIOOOLB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBDJKHDICCI_IDOFFOMIPIC_OFFSET))(this, a1);
		}

	};
