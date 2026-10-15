#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
namespace RPGTools::Timeline { class EyeBloomData; }

#define RPGTOOLS_TIMELINE_EYEBLOOMDATA_CNPGFLLNLNK_OFFSET UNITYSDK_OFFSET(0xE8FA660)
#define RPGTOOLS_TIMELINE_EYEBLOOMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8FA4E0)
#define RPGTOOLS_TIMELINE_EYEBLOOMDATA_DOMMFKKBLAE_OFFSET UNITYSDK_OFFSET(0xE8FA3F0)
#define RPGTOOLS_TIMELINE_EYEBLOOMDATA_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xE8FA4F0)
#define RPGTOOLS_TIMELINE_EYEBLOOMDATA_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0xE8FA450)
#define RPGTOOLS_TIMELINE_EYEBLOOMDATA_NMPBLGMCAFD_OFFSET UNITYSDK_OFFSET(0xE8FA7E0)
#define RPGTOOLS_TIMELINE_EYEBLOOMDATA_NNFMOLMPDOL_OFFSET UNITYSDK_OFFSET(0xE8FA970)
#define RPGTOOLS_TIMELINE_EYEBLOOMDATA_NOKLNMBGACJ_OFFSET UNITYSDK_OFFSET(0xE8FA6D0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EyeBloomData_TypeDefinitionIndex = 48116;

	class EyeBloomData : public ::System::Object
	{
	public:
		::System::Boolean EnableEyeBloomIntensity; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single EyeBloomIntensity; // 0x14
		::System::Boolean EnableEyeEffectProcs; // 0x18
		::System::Byte _padding1[0x3];
		::System::Single EyeEffectProcs; // 0x1C
		::System::Boolean EnableEyeEffectColor; // 0x20
		::System::Byte _padding2[0x3];
		::UnityEngine::Color EyeEffectColor; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EYEBLOOMDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean DOMMFKKBLAE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EYEBLOOMDATA_DOMMFKKBLAE_OFFSET))(this);
		}

		::RPGTools::Timeline::EyeBloomData* NBHCPBBGAKA()
		{
			return ((::RPGTools::Timeline::EyeBloomData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EYEBLOOMDATA_NBHCPBBGAKA_OFFSET))(this);
		}

		::RPGTools::Timeline::EyeBloomData* EGFCFCBHJJP(::RPGTools::Timeline::EyeBloomData* a1)
		{
			return ((::RPGTools::Timeline::EyeBloomData*(*)(::PVOID, ::RPGTools::Timeline::EyeBloomData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EYEBLOOMDATA_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::EyeBloomData* NOKLNMBGACJ(::RPGTools::Timeline::EyeBloomData* a1)
		{
			return ((::RPGTools::Timeline::EyeBloomData*(*)(::PVOID, ::RPGTools::Timeline::EyeBloomData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EYEBLOOMDATA_NOKLNMBGACJ_OFFSET))(this, a1);
		}

		::RPGTools::Timeline::EyeBloomData* NMPBLGMCAFD(::System::Single a1)
		{
			return ((::RPGTools::Timeline::EyeBloomData*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EYEBLOOMDATA_NMPBLGMCAFD_OFFSET))(this, a1);
		}

		::UnityEngine::Color NNFMOLMPDOL(::UnityEngine::Color a1, ::System::Single a2)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EYEBLOOMDATA_NNFMOLMPDOL_OFFSET))(this, a1, a2);
		}

		::System::Void CNPGFLLNLNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EYEBLOOMDATA_CNPGFLLNLNK_OFFSET))(this);
		}

	};
}
