#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DialogueEntityInteractOverride; }
namespace RPG::GameCore { class VCameraBlend; }

#define RPG_GAMECORE_DIALOGUEENTITYINTERACTOVERRIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D600D20)
#define RPG_GAMECORE_DIALOGUEENTITYINTERACTOVERRIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D600BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueEntityInteractOverride_TypeDefinitionIndex = 20393;

	class DialogueEntityInteractOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean OverrideVCamBlendConfig; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::VCameraBlend* VCamBlendConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEENTITYINTERACTOVERRIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DialogueEntityInteractOverride* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DialogueEntityInteractOverride*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEENTITYINTERACTOVERRIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
