#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlayerReturnTrialAvatarGroup; }
namespace RPG::Client { class TeamBuildSynopsis; }
namespace RPG::Client { class TeamModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GIKFAOJHKOL___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15A355A0)
#define GIKFAOJHKOL___C__DISPLAYCLASS2_0__SYNCTRIALBUILDTOMAINLINETEAM_B__0_OFFSET UNITYSDK_OFFSET(0x15A356A0)

inline static constexpr unsigned int GIKFAOJHKOL___c__DisplayClass2_0_TypeDefinitionIndex = 61896;

	class GIKFAOJHKOL___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::PlayerReturnTrialAvatarGroup* usingGroup; // 0x10
		::RPG::Client::TeamModule* teamModule; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKFAOJHKOL___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _SyncTrialBuildToMainlineTeam_b__0(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*))((::PBYTE)hIl2Cpp + GIKFAOJHKOL___C__DISPLAYCLASS2_0__SYNCTRIALBUILDTOMAINLINETEAM_B__0_OFFSET))(this, a1);
		}

	};
