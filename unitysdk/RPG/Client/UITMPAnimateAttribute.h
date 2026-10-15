#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace TMPro { class TMP_Text; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_BHLNCCKGANJ_OFFSET UNITYSDK_OFFSET(0xE3F51D0)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_CANAJKEBCCH_OFFSET UNITYSDK_OFFSET(0xE3F5720)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_CKIEMFOBEEG_OFFSET UNITYSDK_OFFSET(0xE3F5240)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0xE3F5D10)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_HAGKGNIDFEI_OFFSET UNITYSDK_OFFSET(0xE3F53E0)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_KPEOHGHHIOL_OFFSET UNITYSDK_OFFSET(0xE3F5370)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_MDGMGCGPCNF_OFFSET UNITYSDK_OFFSET(0xE3F5BF0)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE3F4B60)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_PJJDFNNADLK_OFFSET UNITYSDK_OFFSET(0xE3F4D70)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_REFRESHFONTMATREF_OFFSET UNITYSDK_OFFSET(0xE3F4C10)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_SETQUADSCALE_OFFSET UNITYSDK_OFFSET(0xE3EDDE0)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_TMPMATPROPERTIESUPDATE_OFFSET UNITYSDK_OFFSET(0xE3F5090)
#define RPG_CLIENT_UITMPANIMATEATTRIBUTE_UPDATE_OFFSET UNITYSDK_OFFSET(0xE3F5040)

namespace RPG::Client
{
	inline static constexpr unsigned int UITMPAnimateAttribute_TypeDefinitionIndex = 70714;

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
		::UnityEngine::Vector4 _TotalScale; // 0x84
		::System::Int32 _RenderQueue; // 0x94
		::System::Boolean _UseRandomWobbly; // 0x98
		::System::Byte _padding2[0x3];
		::System::Single _WobblyScale; // 0x9C
		::System::Single _FaceDilate; // 0xA0
		::System::Single _WobblyFrequency; // 0xA4
		::UnityEngine::Vector2 _WobblyCharScale; // 0xA8
		::System::Single _WobblyCharScaleFrequency; // 0xB0
		::System::Single _WobblyCharScaleRatio; // 0xB4
		::System::Single _CharOffsetFrequency; // 0xB8
		::System::Single _CharOffsetRatio; // 0xBC
		::System::Single _CharOffsetScale; // 0xC0
		::System::Boolean Glitch; // 0xC4
		::System::Byte _padding3[0x3];
		::System::Single GlitchScale; // 0xC8
		::System::Single GlitchRGBSplitScale; // 0xCC
		::System::Single _ManualTickTimeOfCharSize; // 0xD0
		::System::Single _ManualTickTimeBlend; // 0xD4
		::System::Boolean UseRandom; // 0xD8
		::System::Byte _padding4[0x3];
		::System::Single _ManualTickTimeCharSize; // 0xDC
		::UnityEngine::Vector2 _PerCharOffset; // 0xE0
		::System::Boolean _UseRandomRotate; // 0xE8
		::System::Byte _padding5[0x3];
		::UnityEngine::Vector4 _EularAngle; // 0xEC
		::System::Byte _padding6[0x4];
		::TMPro::TMP_Text* DBKOEGKFKNL; // 0x100
		::UnityEngine::Material* NKLHAMDHCOD; // 0x108
		::UnityEngine::Material* LGPNNMBDJIO; // 0x110
		::System::Boolean MNFOFMJJBOP; // 0x118
		::System::Boolean PMJGFOMLPBH; // 0x119
		::System::Byte _padding7[0x2];
		::System::Single NOHADMGJFOJ; // 0x11C
		::System::Single NIHHPIJDPPM; // 0x120
		::System::Single GPGMPEPINFC; // 0x124
		::System::Single KLDJCFCEKHO; // 0x128
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

		::System::Boolean CKIEMFOBEEG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UITMPANIMATEATTRIBUTE_CKIEMFOBEEG_OFFSET))(this);
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

	};
}
