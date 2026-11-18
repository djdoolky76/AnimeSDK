#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/GlitchBehaviour_JEGMECGBFBH.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class Glitch; }

#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x15ADA090)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_FAPIFBEBPEI_OFFSET UNITYSDK_OFFSET(0x15ADA940)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x15ADEAB0)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x15ADEA90)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x15ADB0B0)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x15ADEAC0)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15ADAD30)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x15ADEAA0)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15ADD9F0)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x15ADDE80)
#define MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x15ADE9A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int GlitchBehaviour_TypeDefinitionIndex = 57833;

	class GlitchBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::GlitchBehaviour_JEGMECGBFBH _methodParm; // 0x18
		::System::Boolean enabled; // 0x148
		::System::Boolean active_glitchAngle; // 0x149
		::System::Boolean use_glitchAngle; // 0x14A
		::System::Byte _padding0[0x1];
		::System::Single glitchAngle; // 0x14C
		::System::Boolean active_rShift; // 0x150
		::System::Boolean use_rShift; // 0x151
		::System::Byte _padding1[0x2];
		::System::Single rShift; // 0x154
		::System::Boolean active_gShift; // 0x158
		::System::Boolean use_gShift; // 0x159
		::System::Byte _padding2[0x2];
		::System::Single gShift; // 0x15C
		::System::Boolean active_bShift; // 0x160
		::System::Boolean use_bShift; // 0x161
		::System::Byte _padding3[0x2];
		::System::Single bShift; // 0x164
		::System::Boolean active_noiseScale; // 0x168
		::System::Boolean use_noiseScale; // 0x169
		::System::Byte _padding4[0x2];
		::System::Single noiseScale; // 0x16C
		::System::Boolean active_noiseDistortion; // 0x170
		::System::Boolean use_noiseDistortion; // 0x171
		::System::Byte _padding5[0x2];
		::System::Single noiseDistortion; // 0x174
		::System::Boolean active_distortionThreshold; // 0x178
		::System::Boolean use_distortionThreshold; // 0x179
		::System::Byte _padding6[0x2];
		::System::Single distortionThreshold; // 0x17C
		::System::Boolean active_lineThresholdMin; // 0x180
		::System::Boolean use_lineThresholdMin; // 0x181
		::System::Byte _padding7[0x2];
		::System::Single lineThresholdMin; // 0x184
		::System::Boolean active_lineThresholdMax; // 0x188
		::System::Boolean use_lineThresholdMax; // 0x189
		::System::Byte _padding8[0x2];
		::System::Single lineThresholdMax; // 0x18C
		::System::Boolean active_lineBrightness; // 0x190
		::System::Boolean use_lineBrightness; // 0x191
		::System::Byte _padding9[0x2];
		::System::Single lineBrightness; // 0x194
		::System::Boolean active_texture; // 0x198
		::System::Boolean use_texture; // 0x199
		::System::Byte _padding10[0x6];
		::UnityEngine::Texture* texture; // 0x1A0
		::System::Boolean active_mask; // 0x1A8
		::System::Boolean use_mask; // 0x1A9
		::System::Boolean mask; // 0x1AA
		::System::Boolean active_maskTexTillingOffset; // 0x1AB
		::System::Boolean use_maskTexTillingOffset; // 0x1AC
		::System::Byte _padding11[0x3];
		::UnityEngine::Vector4 maskTexTillingOffset; // 0x1B0
		::System::Boolean active_randomOpacity; // 0x1C0
		::System::Boolean use_randomOpacity; // 0x1C1
		::System::Boolean randomOpacity; // 0x1C2
		::System::Boolean active_randomOpacityTillingOffset; // 0x1C3
		::System::Boolean use_randomOpacityTillingOffset; // 0x1C4
		::System::Byte _padding12[0x3];
		::UnityEngine::Vector4 randomOpacityTillingOffset; // 0x1C8
		::System::Boolean active_randomOpacitySpeed; // 0x1D8
		::System::Boolean use_randomOpacitySpeed; // 0x1D9
		::System::Byte _padding13[0x2];
		::UnityEngine::Vector2 randomOpacitySpeed; // 0x1DC
		::System::Boolean active_overrideMap3DColor; // 0x1E4
		::System::Boolean use_overrideMap3DColor; // 0x1E5
		::System::Byte _padding14[0x2];
		::UnityEngine::Color overrideMap3DColor; // 0x1E8
		::System::Boolean active_characterDistortionMaskOn; // 0x1F8
		::System::Boolean use_characterDistortionMaskOn; // 0x1F9
		::System::Boolean characterDistortionMaskOn; // 0x1FA
		::System::Boolean active_glitchIntensity; // 0x1FB
		::System::Boolean use_glitchIntensity; // 0x1FC
		::System::Byte _padding15[0x3];
		::System::Single glitchIntensity; // 0x200
		::System::Boolean active_glitchNoiseTex; // 0x204
		::System::Boolean use_glitchNoiseTex; // 0x205
		::System::Byte _padding16[0x2];
		::UnityEngine::Texture* glitchNoiseTex; // 0x208
		::System::Boolean active_glitchNoiseTexSpeed; // 0x210
		::System::Boolean use_glitchNoiseTexSpeed; // 0x211
		::System::Byte _padding17[0x2];
		::System::Single glitchNoiseTexSpeed; // 0x214
		::System::Boolean active_glitchRand; // 0x218
		::System::Boolean use_glitchRand; // 0x219
		::System::Byte _padding18[0x2];
		::System::Single glitchRand; // 0x21C
		::System::Boolean active_glitchTex1; // 0x220
		::System::Boolean use_glitchTex1; // 0x221
		::System::Byte _padding19[0x6];
		::UnityEngine::Texture* glitchTex1; // 0x228
		::System::Boolean active_glitchTex1ScaleOffset; // 0x230
		::System::Boolean use_glitchTex1ScaleOffset; // 0x231
		::System::Byte _padding20[0x2];
		::UnityEngine::Vector2 glitchTex1ScaleOffset; // 0x234
		::System::Boolean active_glitchTex1Amount; // 0x23C
		::System::Boolean use_glitchTex1Amount; // 0x23D
		::System::Byte _padding21[0x2];
		::System::Single glitchTex1Amount; // 0x240
		::System::Boolean active_glitchTex1Range; // 0x244
		::System::Boolean use_glitchTex1Range; // 0x245
		::System::Byte _padding22[0x2];
		::System::Single glitchTex1Range; // 0x248
		::System::Boolean active_glitchTex2; // 0x24C
		::System::Boolean use_glitchTex2; // 0x24D
		::System::Byte _padding23[0x2];
		::UnityEngine::Texture* glitchTex2; // 0x250
		::System::Boolean active_glitchTex2ScaleOffset; // 0x258
		::System::Boolean use_glitchTex2ScaleOffset; // 0x259
		::System::Byte _padding24[0x2];
		::UnityEngine::Vector2 glitchTex2ScaleOffset; // 0x25C
		::System::Boolean active_glitchTex2Amount; // 0x264
		::System::Boolean use_glitchTex2Amount; // 0x265
		::System::Byte _padding25[0x2];
		::System::Single glitchTex2Amount; // 0x268
		::System::Boolean active_glitchTex2Range; // 0x26C
		::System::Boolean use_glitchTex2Range; // 0x26D
		::System::Byte _padding26[0x2];
		::System::Single glitchTex2Range; // 0x270
		::System::Byte _padding27[0x4];
		::UnityEngine::Rendering::Universal::Glitch* _Glitch; // 0x278

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::Glitch* FAPIFBEBPEI(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::Glitch*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_FAPIFBEBPEI_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GLITCHBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}
	};
}
