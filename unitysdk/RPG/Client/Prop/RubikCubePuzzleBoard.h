#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/GameCore/RubikRotDirection.h"
namespace RPG::Client::Prop { class RubikCubePuzzleCube; }
namespace RPG::Client::Prop { class RubikCubePuzzleCubeData; }
namespace RPG::Client::Prop { class RubikCubePuzzleFrameData; }
namespace RPG::Client::Prop { class RubikCubePuzzleSwitchData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xE803DD0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xE803E70)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xE803E10)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE801F20)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xE802490)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xE7FF0F0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xE802950)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_JNPJIEDLIJI_OFFSET UNITYSDK_OFFSET(0xE8028C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_KINEOPJLIDD_OFFSET UNITYSDK_OFFSET(0xE802690)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ONPUZZLECANCEL_OFFSET UNITYSDK_OFFSET(0xE8014B0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_REGISTERROTATEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xE8038C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_RESETCUBESELECT_OFFSET UNITYSDK_OFFSET(0xE801500)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xE801750)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ROTATECUBE_OFFSET UNITYSDK_OFFSET(0xE8029A0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_SELECTCUBEGROUP_OFFSET UNITYSDK_OFFSET(0xE803160)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xE8012D0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_UNREGISTERROTATEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xE803B50)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD__GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0xE8016D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleBoard_TypeDefinitionIndex = 81588;

	class RubikCubePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleCubeData*>* CubeList; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleSwitchData*>* SwitchList; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleFrameData*>* FrameList; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ControlBoards; // 0x60
		::UnityEngine::GameObject* ConditionObjAttachPoint_A1; // 0x68
		::UnityEngine::GameObject* ConditionObjAttachPoint_A2; // 0x70
		::UnityEngine::GameObject* ConditionObjAttachPoint_B1; // 0x78
		::UnityEngine::GameObject* ConditionObjAttachPoint_B2; // 0x80
		::UnityEngine::GameObject* ConditionObjAttachPoint_C1; // 0x88
		::UnityEngine::GameObject* ConditionObjAttachPoint_C2; // 0x90
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RubikCubePuzzleCube*>* MFMPNOOMDFJ; // 0x98
		static ::System::String** StaticGet__GameKey()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RubikCubePuzzleBoard")->GetStaticField(0x5DFA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPuzzleCancel(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ONPUZZLECANCEL_OFFSET))(this, a1);
		}

		::System::Void ResetCubeSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_RESETCUBESELECT_OFFSET))(this);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void KINEOPJLIDD(::RPG::Client::Prop::RubikCubePuzzleCube* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubePuzzleCube*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_KINEOPJLIDD_OFFSET))(this, a1);
		}

		::System::Void JNPJIEDLIJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_JNPJIEDLIJI_OFFSET))(this);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void RotateCube(::System::String* a1, ::RPG::GameCore::RubikRotDirection a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::RubikRotDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_ROTATECUBE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SelectCubeGroup(::System::String* a1, ::RPG::GameCore::RubikRotDirection a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::RubikRotDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_SELECTCUBEGROUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RegisterRotateFinishCallback(::System::String* a1, ::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_REGISTERROTATEFINISHCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void UnRegisterRotateFinishCallback(::System::String* a1, ::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::RPG::Client::Prop::RubikCubePuzzleCube*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_UNREGISTERROTATEFINISHCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::UInt32 _GetUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLEBOARD__GETUNIQUEID_OFFSET))(this);
		}

	};
}
