#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
namespace RPGTools::Timeline { class BlusherData; }

#define RPGTOOLS_TIMELINE_BLUSHERDATA_CNPGFLLNLNK_OFFSET UNITYSDK_OFFSET(0xE8BC360)
#define RPGTOOLS_TIMELINE_BLUSHERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8BC1A0)
#define RPGTOOLS_TIMELINE_BLUSHERDATA_DOMMFKKBLAE_OFFSET UNITYSDK_OFFSET(0xE8BC040)
#define RPGTOOLS_TIMELINE_BLUSHERDATA_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xE8BC1B0)
#define RPGTOOLS_TIMELINE_BLUSHERDATA_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0xE8BC0C0)
#define RPGTOOLS_TIMELINE_BLUSHERDATA_NMPBLGMCAFD_OFFSET UNITYSDK_OFFSET(0xE8BC520)
#define RPGTOOLS_TIMELINE_BLUSHERDATA_NOKLNMBGACJ_OFFSET UNITYSDK_OFFSET(0xE8BC430)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int BlusherData_TypeDefinitionIndex = 48120;

	class BlusherData : public ::System::Object
	{
	public:
		::System::Boolean EnableExpressionCheekColor; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Color ExpressionCheekColor; // 0x14
		::System::Boolean EnableExpressionMapThreshold; // 0x24
		::System::Byte _padding1[0x3];
		::System::Single ExpressionMapThreshold; // 0x28
		::System::Boolean EnableExpressionSpecularIntensity; // 0x2C
		::System::Byte _padding2[0x3];
		::System::Single ExpressionSpecularIntensity; // 0x30
		::System::Boolean EnableExpressionCheekIntensity; // 0x34
		::System::Byte _padding3[0x3];
		::System::Single ExpressionCheekIntensity; // 0x38
		::System::Boolean EnableExpressionShyColor; // 0x3C
		::System::Byte _padding4[0x3];
		::UnityEngine::Color ExpressionShyColor; // 0x40
		::System::Boolean EnableExpressionShyIntensity; // 0x50
		::System::Byte _padding5[0x3];
		::System::Single ExpressionShyIntensity; // 0x54
		::System::Boolean EnableExpressionShadowColor; // 0x58
		::System::Byte _padding6[0x3];
		::UnityEngine::Color ExpressionShadowColor; // 0x5C
		::System::Boolean EnableExpressionShadowIntensity; // 0x6C
		::System::Byte _padding7[0x3];
		::System::Single ExpressionShadowIntensity; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLUSHERDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean DOMMFKKBLAE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLUSHERDATA_DOMMFKKBLAE_OFFSET))(this);
		}

		::RPGTools::Timeline::BlusherData* NBHCPBBGAKA()
		{
			return ((::RPGTools::Timeline::BlusherData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLUSHERDATA_NBHCPBBGAKA_OFFSET))(this);
		}

		::RPGTools::Timeline::BlusherData* EGFCFCBHJJP(::RPGTools::Timeline::BlusherData* a1)
		{
			return ((::RPGTools::Timeline::BlusherData*(*)(::PVOID, ::RPGTools::Timeline::BlusherData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLUSHERDATA_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::BlusherData* NOKLNMBGACJ(::RPGTools::Timeline::BlusherData* a1)
		{
			return ((::RPGTools::Timeline::BlusherData*(*)(::PVOID, ::RPGTools::Timeline::BlusherData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLUSHERDATA_NOKLNMBGACJ_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::BlusherData* NMPBLGMCAFD(::System::Single a1)
		{
			return ((::RPGTools::Timeline::BlusherData*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLUSHERDATA_NMPBLGMCAFD_OFFSET))(this, a1);
		}

		::System::Void CNPGFLLNLNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLUSHERDATA_CNPGFLLNLNK_OFFSET))(this);
		}

	};
}
