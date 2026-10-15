#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCMFIOAJPLA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OCMFIOAJPLA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xBD70B30)
#define OCMFIOAJPLA_CTOR_OFFSET UNITYSDK_OFFSET(0xBD70BA0)

inline static constexpr unsigned int OCMFIOAJPLA_TypeDefinitionIndex = 63496;

	class OCMFIOAJPLA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* CEMHBIPFIBC; // 0x10
		::System::UInt32 LLDCHLHNADA; // 0x18
		::System::UInt32 PPDAGPPKEJD; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMFIOAJPLA_CTOR_OFFSET))(this);
		}

		::System::Int32 CompareTo(::OCMFIOAJPLA* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::OCMFIOAJPLA*))((::PBYTE)hIl2Cpp + OCMFIOAJPLA_COMPARETO_OFFSET))(this, a1);
		}

	};
