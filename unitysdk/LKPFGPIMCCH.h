#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKPFGPIMCCH;

#define LKPFGPIMCCH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBFFB820)
#define LKPFGPIMCCH_CTOR_OFFSET UNITYSDK_OFFSET(0xBFFB890)
#define LKPFGPIMCCH_MOKNCFJICIC_OFFSET UNITYSDK_OFFSET(0xBFFB8A0)

inline static constexpr unsigned int LKPFGPIMCCH_TypeDefinitionIndex = 63737;

	class LKPFGPIMCCH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPFGPIMCCH_CTOR_OFFSET))(this);
		}

		static ::LKPFGPIMCCH* BPLPBPMEODA()
		{
			return ((::LKPFGPIMCCH*(*)())((::PBYTE)hIl2Cpp + LKPFGPIMCCH_BPLPBPMEODA_OFFSET))();
		}

		::System::Void MOKNCFJICIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPFGPIMCCH_MOKNCFJICIC_OFFSET))(this);
		}

	};
