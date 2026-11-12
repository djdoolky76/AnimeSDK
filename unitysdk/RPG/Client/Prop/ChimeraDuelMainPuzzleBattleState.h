#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleMonoStateBase.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleStateType.h"
class NKIPOBJJBBG;
namespace RPG::Client { class ChimeraDuelBattlePageViewModel; }
namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleBattleView; }
namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleMonoStateView; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6FF130)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_DESTROYCHIMERACONTROL_OFFSET UNITYSDK_OFFSET(0xE6FF0C0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_GETVIEW_OFFSET UNITYSDK_OFFSET(0xE6FD970)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xE6FD8F0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_GET__STATETYPE_OFFSET UNITYSDK_OFFSET(0xE6FD8A0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_LOADMASTERS_OFFSET UNITYSDK_OFFSET(0xE6FEDB0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0xE6FDA60)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xE6FE5F0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_PREPAREENTERBYUI_OFFSET UNITYSDK_OFFSET(0xE6FDA20)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_STARTGAME_OFFSET UNITYSDK_OFFSET(0xE6FE110)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__CREATEINITPARAMS_OFFSET UNITYSDK_OFFSET(0xE6FE2B0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__LOADMASTERS_OFFSET UNITYSDK_OFFSET(0xE6FEE00)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__TRYSHOWUI_OFFSET UNITYSDK_OFFSET(0xE6FDF30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleBattleState_TypeDefinitionIndex = 81105;

	class ChimeraDuelMainPuzzleBattleState : public ::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateBase
	{
	public:
		::RPG::Client::ChimeraDuelBattlePageViewModel* _ViewModel; // 0x28
		::System::Boolean _WouldEnterByUI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType get__StateType()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_GET__STATETYPE_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleBattleView* get_View()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleBattleView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_GET_VIEW_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView* GetView()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_GETVIEW_OFFSET))(this);
		}

		::System::Void PrepareEnterByUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_PREPAREENTERBYUI_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_ONENTER_OFFSET))(this);
		}

		::System::Void StartGame(::RPG::Client::ChimeraDuelBattlePageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelBattlePageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_STARTGAME_OFFSET))(this, a1);
		}

		::NKIPOBJJBBG* _CreateInitParams(::RPG::Client::ChimeraDuelBattlePageViewModel* a1)
		{
			return ((::NKIPOBJJBBG*(*)(::PVOID, ::RPG::Client::ChimeraDuelBattlePageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__CREATEINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_ONEXIT_OFFSET))(this);
		}

		::System::Void _TryShowUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__TRYSHOWUI_OFFSET))(this);
		}

		::System::Void LoadMasters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_LOADMASTERS_OFFSET))(this);
		}

		::System::Void _LoadMasters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE__LOADMASTERS_OFFSET))(this);
		}

		::System::Void DestroyChimeraControl(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLESTATE_DESTROYCHIMERACONTROL_OFFSET))(this, a1);
		}

	};
}
