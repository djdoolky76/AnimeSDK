#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMDNDMMFJJO.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/Config/LanguageTextStyleConfig.h"
#include "unitysdk/OHHAGPCBOKC.h"

#define MOLEMOLE_CONFIG_UITEXTSTYLEPARAMS_EMLDIHEBNBO_OFFSET UNITYSDK_OFFSET(0x69D3A0)
#define MOLEMOLE_CONFIG_UITEXTSTYLEPARAMS_GET_OVERRIDEIMAGEHEIGHT_OFFSET UNITYSDK_OFFSET(0x69D210)
#define MOLEMOLE_CONFIG_UITEXTSTYLEPARAMS_GET_OVERRIDEIMGFONTSIZEMATCHSCALE_OFFSET UNITYSDK_OFFSET(0x69D260)
#define MOLEMOLE_CONFIG_UITEXTSTYLEPARAMS_GET_OVERRIDEMARKTEMPLATE_OFFSET UNITYSDK_OFFSET(0x69D2B0)
#define MOLEMOLE_CONFIG_UITEXTSTYLEPARAMS_GET_OVERRIDEUNDERLINEHEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x69D350)
#define MOLEMOLE_CONFIG_UITEXTSTYLEPARAMS_GET_OVERRIDEUNDERLINETHICKNESSSCALE_OFFSET UNITYSDK_OFFSET(0x69D300)
#define MOLEMOLE_CONFIG_UITEXTSTYLEPARAMS_KFNAEIOMAPC_OFFSET UNITYSDK_OFFSET(0x118E6930)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UITextStyleParams_TypeDefinitionIndex = 48269;

	struct alignas(4) UITextStyleParams
	{
		::LMDNDMMFJJO overrideMask; // 0x10
		::System::Int32 imageHeightOverride; // 0x14
		::System::Single imgFontSizeMatchScale; // 0x18
		::System::Int32 markTemplateOverride; // 0x1C
		::System::Single underlineThicknessScaleOverride; // 0x20
		::System::Single underlineHeightOffsetOverride; // 0x24

		::System::Boolean get_OverrideImageHeight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UITEXTSTYLEPARAMS_GET_OVERRIDEIMAGEHEIGHT_OFFSET))(this);
		}

		::System::Boolean get_OverrideImgFontSizeMatchScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UITEXTSTYLEPARAMS_GET_OVERRIDEIMGFONTSIZEMATCHSCALE_OFFSET))(this);
		}

		::System::Boolean get_OverrideMarkTemplate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UITEXTSTYLEPARAMS_GET_OVERRIDEMARKTEMPLATE_OFFSET))(this);
		}

		::System::Boolean get_OverrideUnderlineThicknessScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UITEXTSTYLEPARAMS_GET_OVERRIDEUNDERLINETHICKNESSSCALE_OFFSET))(this);
		}

		::System::Boolean get_OverrideUnderlineHeightOffset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UITEXTSTYLEPARAMS_GET_OVERRIDEUNDERLINEHEIGHTOFFSET_OFFSET))(this);
		}

		/*
		static ::MoleMole::Config::UITextStyleParams KFNAEIOMAPC(::MoleMole::Config::LanguageTextStyleConfig DFMKILICPFB)
		{
			return ((::MoleMole::Config::UITextStyleParams(*)(::MoleMole::Config::LanguageTextStyleConfig))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UITEXTSTYLEPARAMS_KFNAEIOMAPC_OFFSET))(DFMKILICPFB);
		}
		*/

		::System::Void EMLDIHEBNBO(::OHHAGPCBOKC& IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::OHHAGPCBOKC&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UITEXTSTYLEPARAMS_EMLDIHEBNBO_OFFSET))(this, IGAAKDOIPNN);
		}
	};
}
