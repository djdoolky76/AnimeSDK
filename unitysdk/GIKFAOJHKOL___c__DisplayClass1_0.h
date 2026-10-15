#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIKFAOJHKOL;
namespace RPG::Client { class TeamBuildSynopsis; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GIKFAOJHKOL___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15A40D20)
#define GIKFAOJHKOL___C__DISPLAYCLASS1_0__REFRESHTRIALTEAMBUILD_B__1_OFFSET UNITYSDK_OFFSET(0x15A41010)

inline static constexpr unsigned int GIKFAOJHKOL___c__DisplayClass1_0_TypeDefinitionIndex = 61895;

	class GIKFAOJHKOL___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* partialAvatarIDs; // 0x10
		::GIKFAOJHKOL* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKFAOJHKOL___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*>* _RefreshTrialTeamBuild_b__1()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKFAOJHKOL___C__DISPLAYCLASS1_0__REFRESHTRIALTEAMBUILD_B__1_OFFSET))(this);
		}

	};
