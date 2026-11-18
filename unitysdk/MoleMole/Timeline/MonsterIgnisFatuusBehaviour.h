#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/MonsterIgnisFatuusBehaviour_MCCHJFPIHPF.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BlendModes.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class MonsterIgnisFatuus; }

#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1C0C4790)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1C0C9CE0)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_GJGEFHLIODM_OFFSET UNITYSDK_OFFSET(0x1C0C4F80)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x1C0C9CF0)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1C0C5750)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x1C0C9CC0)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1C0C5370)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1C0C9CD0)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1C0C8990)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1C0C8E80)
#define MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0C9B00)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MonsterIgnisFatuusBehaviour_TypeDefinitionIndex = 55037;

	class MonsterIgnisFatuusBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::MonsterIgnisFatuusBehaviour_MCCHJFPIHPF _methodParm; // 0x18
		::System::Boolean enabled; // 0x170
		::System::Boolean active_monsterIgnisFatuusActive; // 0x171
		::System::Boolean use_monsterIgnisFatuusActive; // 0x172
		::System::Boolean monsterIgnisFatuusActive; // 0x173
		::System::Boolean active_monsterIgnisFatuusDownSample; // 0x174
		::System::Boolean use_monsterIgnisFatuusDownSample; // 0x175
		::System::Byte _padding0[0x2];
		::System::Int32 monsterIgnisFatuusDownSample; // 0x178
		::System::Boolean active_monsterIgnisFatuusSelfMask; // 0x17C
		::System::Boolean use_monsterIgnisFatuusSelfMask; // 0x17D
		::System::Boolean monsterIgnisFatuusSelfMask; // 0x17E
		::System::Boolean active_monsterIgnisFatuusDepthMaskOffset; // 0x17F
		::System::Boolean use_monsterIgnisFatuusDepthMaskOffset; // 0x180
		::System::Byte _padding1[0x3];
		::System::Single monsterIgnisFatuusDepthMaskOffset; // 0x184
		::System::Boolean active_monsterIgnisFatuusColorBlendMode; // 0x188
		::System::Boolean use_monsterIgnisFatuusColorBlendMode; // 0x189
		::System::Byte _padding2[0x2];
		::UnityEngine::Rendering::Universal::BlendModes monsterIgnisFatuusColorBlendMode; // 0x18C
		::System::Boolean active_useMonsterIgnisFatuusColorTextureAlpha; // 0x190
		::System::Boolean use_useMonsterIgnisFatuusColorTextureAlpha; // 0x191
		::System::Boolean useMonsterIgnisFatuusColorTextureAlpha; // 0x192
		::System::Boolean active_monsterIgnisFatuusColor; // 0x193
		::System::Boolean use_monsterIgnisFatuusColor; // 0x194
		::System::Byte _padding3[0x3];
		::UnityEngine::Color monsterIgnisFatuusColor; // 0x198
		::System::Boolean active_monsterIgnisFatuusColorTexture; // 0x1A8
		::System::Boolean use_monsterIgnisFatuusColorTexture; // 0x1A9
		::System::Byte _padding4[0x6];
		::UnityEngine::Texture* monsterIgnisFatuusColorTexture; // 0x1B0
		::System::Boolean active_monsterIgnisFatuusColorTextureUVScale; // 0x1B8
		::System::Boolean use_monsterIgnisFatuusColorTextureUVScale; // 0x1B9
		::System::Byte _padding5[0x2];
		::UnityEngine::Vector2 monsterIgnisFatuusColorTextureUVScale; // 0x1BC
		::System::Boolean active_monsterIgnisFatuusColorTextureUVSpeed; // 0x1C4
		::System::Boolean use_monsterIgnisFatuusColorTextureUVSpeed; // 0x1C5
		::System::Byte _padding6[0x2];
		::UnityEngine::Vector2 monsterIgnisFatuusColorTextureUVSpeed; // 0x1C8
		::System::Boolean active_monsterIgnisFatuusNoiseTexture; // 0x1D0
		::System::Boolean use_monsterIgnisFatuusNoiseTexture; // 0x1D1
		::System::Byte _padding7[0x6];
		::UnityEngine::Texture* monsterIgnisFatuusNoiseTexture; // 0x1D8
		::System::Boolean active_monsterIgnisFatuusNoiseTextureUVScale; // 0x1E0
		::System::Boolean use_monsterIgnisFatuusNoiseTextureUVScale; // 0x1E1
		::System::Byte _padding8[0x2];
		::UnityEngine::Vector2 monsterIgnisFatuusNoiseTextureUVScale; // 0x1E4
		::System::Boolean active_monsterIgnisFatuusNoiseTextureUVSpeed; // 0x1EC
		::System::Boolean use_monsterIgnisFatuusNoiseTextureUVSpeed; // 0x1ED
		::System::Byte _padding9[0x2];
		::UnityEngine::Vector2 monsterIgnisFatuusNoiseTextureUVSpeed; // 0x1F0
		::System::Boolean active_monsterIgnisFatuusDistortionIntensity; // 0x1F8
		::System::Boolean use_monsterIgnisFatuusDistortionIntensity; // 0x1F9
		::System::Byte _padding10[0x2];
		::System::Single monsterIgnisFatuusDistortionIntensity; // 0x1FC
		::System::Boolean active_monsterIgnisFatuusDistortionOffset; // 0x200
		::System::Boolean use_monsterIgnisFatuusDistortionOffset; // 0x201
		::System::Byte _padding11[0x2];
		::System::Single monsterIgnisFatuusDistortionOffset; // 0x204
		::System::Boolean active_monsterIgnisFatuusBlurPow; // 0x208
		::System::Boolean use_monsterIgnisFatuusBlurPow; // 0x209
		::System::Byte _padding12[0x2];
		::System::Single monsterIgnisFatuusBlurPow; // 0x20C
		::System::Boolean active_monsterIgnisFatuusColorDistortionIntensity; // 0x210
		::System::Boolean use_monsterIgnisFatuusColorDistortionIntensity; // 0x211
		::System::Byte _padding13[0x2];
		::System::Single monsterIgnisFatuusColorDistortionIntensity; // 0x214
		::System::Boolean active_monsterIgnisFatuusColor2; // 0x218
		::System::Boolean use_monsterIgnisFatuusColor2; // 0x219
		::System::Byte _padding14[0x2];
		::UnityEngine::Color monsterIgnisFatuusColor2; // 0x21C
		::System::Boolean active_monsterIgnisFatuusColorTexture2; // 0x22C
		::System::Boolean use_monsterIgnisFatuusColorTexture2; // 0x22D
		::System::Byte _padding15[0x2];
		::UnityEngine::Texture* monsterIgnisFatuusColorTexture2; // 0x230
		::System::Boolean active_monsterIgnisFatuusColorTextureUVScale2; // 0x238
		::System::Boolean use_monsterIgnisFatuusColorTextureUVScale2; // 0x239
		::System::Byte _padding16[0x2];
		::UnityEngine::Vector2 monsterIgnisFatuusColorTextureUVScale2; // 0x23C
		::System::Boolean active_monsterIgnisFatuusColorTextureUVSpeed2; // 0x244
		::System::Boolean use_monsterIgnisFatuusColorTextureUVSpeed2; // 0x245
		::System::Byte _padding17[0x2];
		::UnityEngine::Vector2 monsterIgnisFatuusColorTextureUVSpeed2; // 0x248
		::System::Boolean active_monsterIgnisFatuusNoiseTexture2; // 0x250
		::System::Boolean use_monsterIgnisFatuusNoiseTexture2; // 0x251
		::System::Byte _padding18[0x6];
		::UnityEngine::Texture* monsterIgnisFatuusNoiseTexture2; // 0x258
		::System::Boolean active_monsterIgnisFatuusNoiseTextureUVScale2; // 0x260
		::System::Boolean use_monsterIgnisFatuusNoiseTextureUVScale2; // 0x261
		::System::Byte _padding19[0x2];
		::UnityEngine::Vector2 monsterIgnisFatuusNoiseTextureUVScale2; // 0x264
		::System::Boolean active_monsterIgnisFatuusNoiseTextureUVSpeed2; // 0x26C
		::System::Boolean use_monsterIgnisFatuusNoiseTextureUVSpeed2; // 0x26D
		::System::Byte _padding20[0x2];
		::UnityEngine::Vector2 monsterIgnisFatuusNoiseTextureUVSpeed2; // 0x270
		::System::Boolean active_monsterIgnisFatuusDistortionIntensity2; // 0x278
		::System::Boolean use_monsterIgnisFatuusDistortionIntensity2; // 0x279
		::System::Byte _padding21[0x2];
		::System::Single monsterIgnisFatuusDistortionIntensity2; // 0x27C
		::System::Boolean active_monsterIgnisFatuusDistortionOffset2; // 0x280
		::System::Boolean use_monsterIgnisFatuusDistortionOffset2; // 0x281
		::System::Byte _padding22[0x2];
		::System::Single monsterIgnisFatuusDistortionOffset2; // 0x284
		::System::Boolean active_monsterIgnisFatuusBlurPow2; // 0x288
		::System::Boolean use_monsterIgnisFatuusBlurPow2; // 0x289
		::System::Byte _padding23[0x2];
		::System::Single monsterIgnisFatuusBlurPow2; // 0x28C
		::System::Boolean active_monsterIgnisFatuusColorDistortionIntensity2; // 0x290
		::System::Boolean use_monsterIgnisFatuusColorDistortionIntensity2; // 0x291
		::System::Byte _padding24[0x2];
		::System::Single monsterIgnisFatuusColorDistortionIntensity2; // 0x294
		::System::Boolean active_monsterIgnisFatuusSoftEdgePow; // 0x298
		::System::Boolean use_monsterIgnisFatuusSoftEdgePow; // 0x299
		::System::Byte _padding25[0x2];
		::System::Single monsterIgnisFatuusSoftEdgePow; // 0x29C
		::System::Boolean active_monsterIgnisFatuusSoftEdgeRange; // 0x2A0
		::System::Boolean use_monsterIgnisFatuusSoftEdgeRange; // 0x2A1
		::System::Byte _padding26[0x2];
		::System::Single monsterIgnisFatuusSoftEdgeRange; // 0x2A4
		::System::Boolean active_monsterIgnisFatuusDisappearStart; // 0x2A8
		::System::Boolean use_monsterIgnisFatuusDisappearStart; // 0x2A9
		::System::Byte _padding27[0x2];
		::System::Single monsterIgnisFatuusDisappearStart; // 0x2AC
		::System::Boolean active_monsterIgnisFatuusDisappearEnd; // 0x2B0
		::System::Boolean use_monsterIgnisFatuusDisappearEnd; // 0x2B1
		::System::Byte _padding28[0x2];
		::System::Single monsterIgnisFatuusDisappearEnd; // 0x2B4
		::System::Boolean active_monsterIgnisFatuusFadeIn; // 0x2B8
		::System::Boolean use_monsterIgnisFatuusFadeIn; // 0x2B9
		::System::Byte _padding29[0x2];
		::System::Single monsterIgnisFatuusFadeIn; // 0x2BC
		::System::Boolean active_monsterIgnisFatuusFadeOut; // 0x2C0
		::System::Boolean use_monsterIgnisFatuusFadeOut; // 0x2C1
		::System::Byte _padding30[0x2];
		::System::Single monsterIgnisFatuusFadeOut; // 0x2C4
		::UnityEngine::Rendering::Universal::MonsterIgnisFatuus* _MonsterIgnisFatuus; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::MonsterIgnisFatuus* GJGEFHLIODM(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::MonsterIgnisFatuus*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONSTERIGNISFATUUSBEHAVIOUR_GJGEFHLIODM_OFFSET))(this, NEEMKJBIIBC);
		}
	};
}
