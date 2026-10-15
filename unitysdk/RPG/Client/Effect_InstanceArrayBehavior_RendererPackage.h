#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_RENDERERPACKAGE_CTOR_OFFSET UNITYSDK_OFFSET(0xCD3C1C0)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_RENDERERPACKAGE_NLDLLPECLCH_OFFSET UNITYSDK_OFFSET(0xCD3C150)

namespace RPG::Client
{
	class Effect_InstanceArrayBehavior_RendererPackage : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* mesh; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0x18
		::System::UInt32 renderingLayerMask; // 0x20
		::RPG::Client::TAUtils::SimpleTransform transform; // 0x24
		::System::Single animationDelay; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_RENDERERPACKAGE_CTOR_OFFSET))(this);
		}

		::System::Boolean NLDLLPECLCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_RENDERERPACKAGE_NLDLLPECLCH_OFFSET))(this);
		}

	};
}
