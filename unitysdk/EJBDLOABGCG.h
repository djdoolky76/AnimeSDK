#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EJBDLOABGCG_CTOR_OFFSET UNITYSDK_OFFSET(0x154D79B0)
#define EJBDLOABGCG_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x154D7970)
#define EJBDLOABGCG_IBEAICJFMFF_OFFSET UNITYSDK_OFFSET(0x154D78F0)
#define EJBDLOABGCG_KJMPHKAIKEP_OFFSET UNITYSDK_OFFSET(0x154D7930)

	class EJBDLOABGCG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBDLOABGCG_CTOR_OFFSET))(this);
		}

		::System::Void IBEAICJFMFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBDLOABGCG_IBEAICJFMFF_OFFSET))(this);
		}

		::System::Void KJMPHKAIKEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBDLOABGCG_KJMPHKAIKEP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBDLOABGCG_HADOHLNHHGB_OFFSET))(this);
		}

	};
