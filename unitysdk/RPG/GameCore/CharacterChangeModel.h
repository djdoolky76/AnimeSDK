#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterChangeModel; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERCHANGEMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56A910)
#define RPG_GAMECORE_CHARACTERCHANGEMODEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D56A950)
#define RPG_GAMECORE_CHARACTERCHANGEMODEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56A8B0)

namespace RPG::GameCore
{
	class CharacterChangeModel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* PrefabPath; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x28
		::System::Boolean IsAsyncLoad; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCHANGEMODEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterChangeModel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterChangeModel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCHANGEMODEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterChangeModel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterChangeModel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCHANGEMODEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
