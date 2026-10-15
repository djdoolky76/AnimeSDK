#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPJPPOMHPDP_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1C8DD720)
#define KPJPPOMHPDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DD710)
#define KPJPPOMHPDP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C8DE020)

inline static constexpr unsigned int KPJPPOMHPDP_TypeDefinitionIndex = 42089;

	class KPJPPOMHPDP : public ::System::Object
	{
	public:
		::FDPALAEIHPB* MBKIEFPKECG; // 0x10
		::System::Collections::Generic::List_1<::KHPOKIKCOFO*>* PICPKMADHBH; // 0x18
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + KPJPPOMHPDP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJPPOMHPDP_CLEANUP_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJPPOMHPDP_INITIALIZE_OFFSET))(this);
		}

	};
