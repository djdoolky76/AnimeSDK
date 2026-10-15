#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::Prop { class ChimeraGameObjectBuilder; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_CHIMERAVIEWBUILDER_CTOR_OFFSET UNITYSDK_OFFSET(0xDC7A1B0)
#define RPG_CLIENT_PROP_CHIMERAVIEWBUILDER_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xDC79900)
#define RPG_CLIENT_PROP_CHIMERAVIEWBUILDER_MLIKMCHDMEN_OFFSET UNITYSDK_OFFSET(0xDC79A70)
#define RPG_CLIENT_PROP_CHIMERAVIEWBUILDER_START_OFFSET UNITYSDK_OFFSET(0xDC798B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraViewBuilder_TypeDefinitionIndex = 78504;

	class ChimeraViewBuilder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::ChimeraGameObjectBuilder* Builder; // 0x18
		::UnityEngine::Animator* Animator; // 0x20
		::System::UInt32 ChimeraID; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* AnimatorParamName; // 0x30
		::RPG::GameCore::AnimatorParameterType ParamType; // 0x38
		::System::Single ParamValue; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWBUILDER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWBUILDER_START_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWBUILDER_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void MLIKMCHDMEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWBUILDER_MLIKMCHDMEN_OFFSET))(this);
		}

	};
}
