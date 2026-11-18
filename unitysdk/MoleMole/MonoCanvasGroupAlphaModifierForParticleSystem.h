#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class UIGlobalAlpha;
namespace System { class Object; }
namespace UnityEngine { class CanvasRenderer; }

#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_GHJJLNKHODG_OFFSET UNITYSDK_OFFSET(0x14AF8740)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_KMCKNEDIPDK_OFFSET UNITYSDK_OFFSET(0x14AF7A50)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14AF7A00)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_RESET_OFFSET UNITYSDK_OFFSET(0x14AF76B0)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_SETPARTICLESYSTEMALPHA_OFFSET UNITYSDK_OFFSET(0x14AF7D60)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x14AF7D10)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AF8700)
#define MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14AF86A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCanvasGroupAlphaModifierForParticleSystem_TypeDefinitionIndex = 73230;

	class MonoCanvasGroupAlphaModifierForParticleSystem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_DDLPEIIGFJG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCanvasGroupAlphaModifierForParticleSystem_TypeDefinitionIndex)->GetStaticField(0x10BF0);
		}
		// static const ::System::String* NBJBBLAJFEG; // 0x0
		::Il2CppArray<::System::Object*>* particleSystemInfoList; // 0x18
		::UnityEngine::CanvasRenderer* canvasRenderer; // 0x20
		::UIGlobalAlpha* DCCDJLECMPI; // 0x28
		::System::Single KBNECHHGNEP; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM__CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_RESET_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_UPDATE_OFFSET))(this);
		}

		::System::Void SetParticleSystemAlpha(::System::Single KGHNBNOMMJI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_SETPARTICLESYSTEMALPHA_OFFSET))(this, KGHNBNOMMJI);
		}

		::System::Void KMCKNEDIPDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_KMCKNEDIPDK_OFFSET))(this);
		}

		::UIGlobalAlpha* GHJJLNKHODG()
		{
			return ((::UIGlobalAlpha*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCANVASGROUPALPHAMODIFIERFORPARTICLESYSTEM_GHJJLNKHODG_OFFSET))(this);
		}
	};
}
