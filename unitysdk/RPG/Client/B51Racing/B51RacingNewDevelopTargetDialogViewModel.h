#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIIGKJKMCHP;
class MINFEAKALGE;
namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconListViewModel; }
namespace System { class Action; }

#define RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC7B1940)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingNewDevelopTargetDialogViewModel_TypeDefinitionIndex = 82027;

	class B51RacingNewDevelopTargetDialogViewModel : public ::System::Object
	{
	public:
		::KIIGKJKMCHP* PartConfig; // 0x10
		::RPG::Client::B51Racing::B51RacingDevelopValueIconListViewModel* PartRequireStatIconList; // 0x18
		::System::Action* OnClose; // 0x20
		::MINFEAKALGE* SkillConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGNEWDEVELOPTARGETDIALOGVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
