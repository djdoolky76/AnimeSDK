#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2ExtendFreeStyle; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2EXTENDFREESTYLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C4860)
#define RPG_GAMECORE_LEVELPEDESTRIANV2EXTENDFREESTYLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C45F0)

namespace RPG::GameCore
{
	class LevelPedestrianV2ExtendFreeStyle : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::NPCBodySize BodySize; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* FreeStyleConfigPath; // 0x18
		::Il2CppArray<::System::String*>* IncludeFeatures; // 0x20
		::Il2CppArray<::System::String*>* ExcludeFeatures; // 0x28
		::Il2CppArray<::System::String*>* IncludeIdentities; // 0x30
		::Il2CppArray<::System::String*>* ExcludeIdentities; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2EXTENDFREESTYLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2ExtendFreeStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2ExtendFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2EXTENDFREESTYLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
