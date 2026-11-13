#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace TMPro { class TMP_Text; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_BHLNCCKGANJ_OFFSET UNITYSDK_OFFSET(0x1DBB6B90)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_CANAJKEBCCH_OFFSET UNITYSDK_OFFSET(0x1DBB72F0)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBB7DE0)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_DDJCBJKOELI_OFFSET UNITYSDK_OFFSET(0x1DBB7CD0)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_FKOOPPJMAFK_OFFSET UNITYSDK_OFFSET(0x1DBB7D60)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_HAGKGNIDFEI_OFFSET UNITYSDK_OFFSET(0x1DBB6F80)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_IFACGLDILJH_OFFSET UNITYSDK_OFFSET(0x1DBB7A70)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_IHFGIMFNMJA_OFFSET UNITYSDK_OFFSET(0x1DBB6CC0)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_KPEOHGHHIOL_OFFSET UNITYSDK_OFFSET(0x1DBB6F10)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_LECHAFPGNIA_OFFSET UNITYSDK_OFFSET(0x1DBB7BD0)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_MDGMGCGPCNF_OFFSET UNITYSDK_OFFSET(0x1DBB7930)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DBB6580)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_PJJDFNNADLK_OFFSET UNITYSDK_OFFSET(0x1DBB6790)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_REFRESHFONTMATREF_OFFSET UNITYSDK_OFFSET(0x1DBB6630)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_SETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1DBAF810)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_SETQUADSCALE_OFFSET UNITYSDK_OFFSET(0x1DBAF7B0)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_TMPMATPROPERTIESUPDATE_OFFSET UNITYSDK_OFFSET(0x1DBB6AD0)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DBB6A80)

namespace RPG::Client
{
	inline static constexpr unsigned int UITMPAnimateAttribute_TypeDefinitionIndex = 72691;

	class UITMPAnimateAttribute : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Texture* _FaceTex; // 0x18
		::UnityEngine::Color _FaceColor; // 0x20
		::System::Single _ColorScale; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::Texture* _MaskTexture; // 0x38
		::UnityEngine::Texture* _DistortionTex; // 0x40
		::UnityEngine::Vector4 _DistortionSpeed; // 0x48
		::System::Single _DistortionScale; // 0x58
		::System::Single _DissolveRate; // 0x5C
		::System::Single _DissolveBlend; // 0x60
		::System::Single _Sharpness; // 0x64
		::System::Boolean ViewDirAffectAlpha; // 0x68
		::System::Boolean EnableUnderlayShadow; // 0x69
		::System::Byte _padding1[0x2];
		::UnityEngine::Color _UnderlayColor; // 0x6C
		::System::Single _UnderlayOffsetX; // 0x7C
		::System::Single _UnderlayOffsetY; // 0x80
		::System::Single _UnderlayDilate; // 0x84
		::System::Boolean EnableOutline; // 0x88
		::System::Byte _padding2[0x3];
		::UnityEngine::Color _OutlineColor; // 0x8C
		::System::Single _OutlineWidth; // 0x9C
		::System::Single _OutlineSoftness; // 0xA0
		::System::Byte _padding3[0x4];
		::UnityEngine::Texture* _OutlineTex; // 0xA8
		::System::Single _OutlineUVSpeedX; // 0xB0
		::System::Single _OutlineUVSpeedY; // 0xB4
		::System::Boolean EnableOutlineEdge; // 0xB8
		::System::Byte _padding4[0x3];
		::UnityEngine::Color _OutlineEdgeColor; // 0xBC
		::System::Single _OutlineEdgeWidth; // 0xCC
		::System::Single _OutlineEdgeSoftness; // 0xD0
		::UnityEngine::Vector4 _TotalScale; // 0xD4
		::System::Int32 _RenderQueue; // 0xE4
		::System::Boolean _UseRandomWobbly; // 0xE8
		::System::Byte _padding5[0x3];
		::System::Single _WobblyScale; // 0xEC
		::System::Single _FaceDilate; // 0xF0
		::System::Single _WobblyFrequency; // 0xF4
		::UnityEngine::Vector2 _WobblyCharScale; // 0xF8
		::System::Single _WobblyCharScaleFrequency; // 0x100
		::System::Single _WobblyCharScaleRatio; // 0x104
		::System::Single _CharOffsetFrequency; // 0x108
		::System::Single _CharOffsetRatio; // 0x10C
		::System::Single _CharOffsetScale; // 0x110
		::System::Boolean _AutoPlayCharOffset; // 0x114
		::System::Byte _padding6[0x3];
		::System::Single _CharOffsetTime; // 0x118
		::System::Single _CharOffsetPhaseScale; // 0x11C
		::System::Boolean _UseAbsolutelyCharIndex; // 0x120
		::System::Boolean _CharOffsetClampWaveInput; // 0x121
		::System::Boolean _CharOffsetOnlyPositive; // 0x122
		::System::Boolean Glitch; // 0x123
		::System::Single GlitchScale; // 0x124
		::System::Single GlitchRGBSplitScale; // 0x128
		::System::Boolean UseRandom; // 0x12C
		::System::Byte _padding7[0x3];
		::System::Single _ManualTickTimeOfCharSize; // 0x130
		::System::Single _ManualTickTimeBlend; // 0x134
		::System::Single _ManualTickTimeCharSize; // 0x138
		::UnityEngine::Vector2 _PerCharOffset; // 0x13C
		::System::Boolean _UseRandomRotate; // 0x144
		::System::Byte _padding8[0x3];
		::UnityEngine::Vector4 _EularAngle; // 0x148
		::TMPro::TMP_Text* DBKOEGKFKNL; // 0x158
		::UnityEngine::Material* NKLHAMDHCOD; // 0x160
		::UnityEngine::Material* LGPNNMBDJIO; // 0x168
		::System::Boolean DAFINDFHGKK; // 0x170
		::System::Boolean PMJGFOMLPBH; // 0x171
		::System::Byte _padding9[0x2];
		::System::Single NOHADMGJFOJ; // 0x174
		::System::Single NIHHPIJDPPM; // 0x178
		::System::Single JHJNANJONBM; // 0x17C
		::System::Boolean CPIIPENLKGI; // 0x180
		::System::Byte _padding10[0x3];
		::System::Single HHDFDKPDIMA; // 0x184
		::System::Single PKJLLHOKEKF; // 0x188
		::System::Single GPGMPEPINFC; // 0x18C
		::System::Single KLDJCFCEKHO; // 0x190
		::System::Single KNEECDOOKJB; // 0x194
		// static const ::System::String* KAEIBJGFLJB; // 0x0
		// static const ::System::Object MEDMHFMKKKN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_ONENABLE_OFFSET))(this);
		}

		::System::Void RefreshFontMatRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_REFRESHFONTMATREF_OFFSET))(this);
		}

		::System::Void SetQuadScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_SETQUADSCALE_OFFSET))(this, a1);
		}

		::System::Void SetCharCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_SETCHARCOUNT_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_UPDATE_OFFSET))(this);
		}

		::System::Void TMPMatPropertiesUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_TMPMATPROPERTIESUPDATE_OFFSET))(this);
		}

		::System::Void BHLNCCKGANJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_BHLNCCKGANJ_OFFSET))(this);
		}

		::System::Void CANAJKEBCCH(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_CANAJKEBCCH_OFFSET))(this, a1);
		}

		::System::Boolean IHFGIMFNMJA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_IHFGIMFNMJA_OFFSET))(this);
		}

		static ::System::Boolean FKOOPPJMAFK(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_FKOOPPJMAFK_OFFSET))(a1, a2);
		}

		::System::Void KPEOHGHHIOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_KPEOHGHHIOL_OFFSET))(this);
		}

		::System::Void HAGKGNIDFEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_HAGKGNIDFEI_OFFSET))(this);
		}

		::System::Void PJJDFNNADLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_PJJDFNNADLK_OFFSET))(this);
		}

		::System::Void MDGMGCGPCNF(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_MDGMGCGPCNF_OFFSET))(this, a1);
		}

		::System::Void IFACGLDILJH(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_IFACGLDILJH_OFFSET))(this, a1);
		}

		::System::Void DDJCBJKOELI(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_DDJCBJKOELI_OFFSET))(this, a1);
		}

		::System::Void LECHAFPGNIA(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_LECHAFPGNIA_OFFSET))(this, a1);
		}

	};
}
