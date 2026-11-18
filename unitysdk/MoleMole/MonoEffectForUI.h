#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOEFFECTFORUI_AWAKE_OFFSET UNITYSDK_OFFSET(0x10D38D70)
#define MOLEMOLE_MONOEFFECTFORUI_CHODOMMIIGB_OFFSET UNITYSDK_OFFSET(0x10D38E70)
#define MOLEMOLE_MONOEFFECTFORUI_GET_PARTICLESYS_OFFSET UNITYSDK_OFFSET(0x10D38C90)
#define MOLEMOLE_MONOEFFECTFORUI_GET_RENDERERS_OFFSET UNITYSDK_OFFSET(0x10D38BB0)
#define MOLEMOLE_MONOEFFECTFORUI_UPDATEALPHA_OFFSET UNITYSDK_OFFSET(0x10D394A0)
#define MOLEMOLE_MONOEFFECTFORUI_UPDATE_OFFSET UNITYSDK_OFFSET(0x10D38E20)
#define MOLEMOLE_MONOEFFECTFORUI__CTOR_OFFSET UNITYSDK_OFFSET(0x10D39910)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectForUI_TypeDefinitionIndex = 62257;

	class MonoEffectForUI : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean ignoreWorldTimeScale; // 0x18
		::System::Boolean useAlphaControl; // 0x19
		::System::Byte _padding0[0x2];
		::System::Single alpha; // 0x1C
		::System::Int32 CJMPPONDJLP; // 0x20
		::System::Int32 CCFEKJKKOPB; // 0x24
		::System::Single IHABGNDCCEA; // 0x28
		::System::Byte _padding1[0x4];
		::UnityEngine::MaterialPropertyBlock* JLFIMLIGEKF; // 0x30
		::Il2CppArray<::UnityEngine::Renderer*>* MIBMIBAMHDE; // 0x38
		::Il2CppArray<::UnityEngine::ParticleSystem*>* MHJLEMPAGKO; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTFORUI__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* get_Renderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTFORUI_GET_RENDERERS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ParticleSystem*>* get_ParticleSys()
		{
			return ((::Il2CppArray<::UnityEngine::ParticleSystem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTFORUI_GET_PARTICLESYS_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTFORUI_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTFORUI_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateAlpha()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTFORUI_UPDATEALPHA_OFFSET))(this);
		}

		::System::Void CHODOMMIIGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTFORUI_CHODOMMIIGB_OFFSET))(this);
		}
	};
}
