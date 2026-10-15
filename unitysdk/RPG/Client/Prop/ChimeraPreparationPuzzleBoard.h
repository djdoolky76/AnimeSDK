#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
class FFBPJHMPGCM;
class NOKCGCNICDJ;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_AKBIKOKKBFI_OFFSET UNITYSDK_OFFSET(0xDC81130)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_BNLPMEMODPH_OFFSET UNITYSDK_OFFSET(0xDC80740)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDC812C0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC80F40)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_HLGJBGPJIEB_OFFSET UNITYSDK_OFFSET(0xDC80980)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC80440)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_LJCCCPPGEPL_OFFSET UNITYSDK_OFFSET(0xDC811F0)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_NHDFPLGBLLK_OFFSET UNITYSDK_OFFSET(0xDC81260)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC80800)
#define RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC80DD0)

namespace RPG::Client::Prop
{
	class ChimeraPreparationPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _StatePrefabs; // 0x48
		::System::String* _ExitPuzzleCustomStringEvent; // 0x50
		::System::String* _SkipTargetDataKey; // 0x58
		::FFBPJHMPGCM* CBIGPGKJAEI; // 0x60
		::NOKCGCNICDJ* IPLGCJPLIKH; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void BNLPMEMODPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_BNLPMEMODPH_OFFSET))(this);
		}

		::System::Void AKBIKOKKBFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_AKBIKOKKBFI_OFFSET))(this);
		}

		::System::Void LJCCCPPGEPL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_LJCCCPPGEPL_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::ChimeraPreparationState HLGJBGPJIEB()
		{
			return ((::RPG::Client::Prop::ChimeraPreparationState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_HLGJBGPJIEB_OFFSET))(this);
		}

		::System::Void NHDFPLGBLLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAPREPARATIONPUZZLEBOARD_NHDFPLGBLLK_OFFSET))(this);
		}

	};
}
