#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OMAOANEABAP;

#define OMAOANEABAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D26F690)
#define OMAOANEABAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D26F520)

inline static constexpr unsigned int OMAOANEABAP_TypeDefinitionIndex = 12894;

	class OMAOANEABAP : public ::System::Object
	{
	public:
		::System::UInt32 LDGGEPJEKND; // 0x10
		::System::UInt32 CMNOEFFFNPE; // 0x14
		::System::UInt32 IODLAAIECIG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAOANEABAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OMAOANEABAP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OMAOANEABAP*))((::PBYTE)hIl2Cpp + OMAOANEABAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
