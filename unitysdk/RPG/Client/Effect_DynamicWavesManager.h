#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_DynamicWavesManager_IntervalState.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_AOLJEGHLNLO_OFFSET UNITYSDK_OFFSET(0xCD274C0)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_BNDIDHBCIJI_OFFSET UNITYSDK_OFFSET(0xCD26010)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_CLEARHITDATA_OFFSET UNITYSDK_OFFSET(0xCD26EE0)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_CPEHIHEIELD_OFFSET UNITYSDK_OFFSET(0xCD25F50)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xCD277C0)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_DDANJPFBDCD_OFFSET UNITYSDK_OFFSET(0xCD27380)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_DFJONJFMKHL_OFFSET UNITYSDK_OFFSET(0xCD261F0)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_FHLFEICBCGM_OFFSET UNITYSDK_OFFSET(0xCD27260)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_FKCFOFGOGGI_OFFSET UNITYSDK_OFFSET(0xCD27730)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_FMPCGABJLMB_OFFSET UNITYSDK_OFFSET(0xCD25830)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_IEOJOJNCCPO_OFFSET UNITYSDK_OFFSET(0xCD27070)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_KBGDLEOHCLC_OFFSET UNITYSDK_OFFSET(0xCD25DA0)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_KLFMFBJHMAO_OFFSET UNITYSDK_OFFSET(0xCD25B20)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD25950)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCD25EC0)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_LOADKMJIGKA_OFFSET UNITYSDK_OFFSET(0xCD26720)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_OLOIIAGEFHF_OFFSET UNITYSDK_OFFSET(0xCD26BF0)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_OMFIKINLCMK_OFFSET UNITYSDK_OFFSET(0xCD26F60)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCD25D50)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCD25900)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_SETHITPOINT_OFFSET UNITYSDK_OFFSET(0xCD26920)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_START_OFFSET UNITYSDK_OFFSET(0xCD257E0)

namespace RPG::Client
{
	class Effect_DynamicWavesManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* MatList; // 0x18
		::UnityEngine::Texture* DynamicWaveMask; // 0x20
		::System::Single DynamicMaskUVAlphaGradientOffset; // 0x28
		::System::Single DynamicMaskUVTimeScale; // 0x2C
		::System::Single DynamicMaskUVNoiseIntensity; // 0x30
		::System::Single DynamicMaskClampValue; // 0x34
		::System::Single DynamicMaskClampRange; // 0x38
		::System::Single NearIntervalDis; // 0x3C
		::System::Single OverlayIntervalDis; // 0x40
		::System::Single OverlayIntervalPassTime; // 0x44
		::System::Single OverlayIntervalOffsetPassTime; // 0x48
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* TimeScaleCurve; // 0x50
		::System::Single MaxTimeScale; // 0x58
		::System::Single TimeUVScale; // 0x5C
		::System::Single RandomRad; // 0x60
		::System::Single UpdateDis; // 0x64
		::System::Single TimeInterval; // 0x68
		::System::Single RandomTimeInterval; // 0x6C
		::UnityEngine::Color EffectMultiplyColor; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* PointBounds; // 0x80
		::System::Boolean _MatKeywordState; // 0x88
		::System::Byte _padding1[0x7];
		::Il2CppArray<::UnityEngine::Vector4>* _DynamicWaveBaseData; // 0x90
		::System::Collections::Generic::List_1<::System::Object*>* _TargetHitDataCache; // 0x98
		::System::Single BIHFOPFNKOJ; // 0xA0
		::UnityEngine::Vector2 HDMEDMLMDEK; // 0xA4
		::UnityEngine::Vector2 JCCIGCDKKGA; // 0xAC
		::UnityEngine::Vector4 EOPMAHGHNON; // 0xB4
		::System::Single FONLHGOJBJB; // 0xC4
		::Il2CppArray<::System::Boolean>* KKNOOMLKIKI; // 0xC8
		::Il2CppArray<::System::Boolean>* JNPJDBIPLGH; // 0xD0
		::Il2CppArray<::UnityEngine::Vector2>* DNCCGHDCKGF; // 0xD8
		::UnityEngine::Matrix4x4 HBPIJOHBPCC; // 0xE0
		::UnityEngine::Matrix4x4 DPKIENAFDDD; // 0x120
		::System::Int32 GOGHPDFGHGO; // 0x160
		::System::Int32 LNIODDCPOOC; // 0x164
		::System::Boolean CNNPMKFIIMB; // 0x168
		::System::Boolean DDBDBCDCKJM; // 0x169
		// static const ::System::String* LDKJAMMMLLD; // 0x0
		// static const ::System::Object ABPLIEKMPJC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetHitPoint(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_SETHITPOINT_OFFSET))(this, a1);
		}

		::System::Void ClearHitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_CLEARHITDATA_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void KLFMFBJHMAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_KLFMFBJHMAO_OFFSET))(this);
		}

		::System::Void OMFIKINLCMK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_OMFIKINLCMK_OFFSET))(this, a1);
		}

		::System::Void DFJONJFMKHL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_DFJONJFMKHL_OFFSET))(this, a1);
		}

		::System::Boolean IEOJOJNCCPO(::UnityEngine::Vector2 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_IEOJOJNCCPO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean DDANJPFBDCD(::UnityEngine::Vector4 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_DDANJPFBDCD_OFFSET))(this, a1);
		}

		::System::Boolean AOLJEGHLNLO(::UnityEngine::Vector4 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_AOLJEGHLNLO_OFFSET))(this, a1);
		}

		::System::Boolean CPEHIHEIELD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_CPEHIHEIELD_OFFSET))(this);
		}

		::System::Void BNDIDHBCIJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_BNDIDHBCIJI_OFFSET))(this);
		}

		::System::Void LOADKMJIGKA(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_LOADKMJIGKA_OFFSET))(this, a1);
		}

		::RPG::Client::Effect_DynamicWavesManager_IntervalState FHLFEICBCGM(::System::Boolean a1)
		{
			return ((::RPG::Client::Effect_DynamicWavesManager_IntervalState(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_FHLFEICBCGM_OFFSET))(this, a1);
		}

		::System::Void FMPCGABJLMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_FMPCGABJLMB_OFFSET))(this);
		}

		::System::Void KBGDLEOHCLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_KBGDLEOHCLC_OFFSET))(this);
		}

		::System::Boolean OLOIIAGEFHF(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_OLOIIAGEFHF_OFFSET))(this, a1);
		}

		::System::Boolean FKCFOFGOGGI(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER_FKCFOFGOGGI_OFFSET))(this, a1, a2);
		}

	};
}
