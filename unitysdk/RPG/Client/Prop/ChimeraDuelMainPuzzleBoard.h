#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleStateType.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleConfig; }
namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleStateMachine; }
namespace RPG::Client::Prop { class IChimeraDuelMainPuzzleStateMachine; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_AKCMGEGCMAP_OFFSET UNITYSDK_OFFSET(0xDC5C640)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_CGCKHGMAJJE_OFFSET UNITYSDK_OFFSET(0xDC5CC20)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDC5CDD0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_DGAJIGIHOEO_OFFSET UNITYSDK_OFFSET(0xDC5C6B0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC5C2D0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_FIKPMIJGBIL_OFFSET UNITYSDK_OFFSET(0xDC5BF30)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_GET_STATEMACHINE_OFFSET UNITYSDK_OFFSET(0xDC5B960)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_GJIIHKMAMAJ_OFFSET UNITYSDK_OFFSET(0xDC5C390)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_HLGJBGPJIEB_OFFSET UNITYSDK_OFFSET(0xDC5C440)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC5B970)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_ISPUZZLESTART_OFFSET UNITYSDK_OFFSET(0xDC5BEA0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_LKPCMPPNLBD_OFFSET UNITYSDK_OFFSET(0xDC5BCC0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_NAKIGFCHAMF_OFFSET UNITYSDK_OFFSET(0xDC5BEE0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_PCJENGFNDAE_OFFSET UNITYSDK_OFFSET(0xDC5CA70)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC5BD70)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD__STARTPUZZLE_B__7_0_OFFSET UNITYSDK_OFFSET(0xDC5CF00)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD__STARTPUZZLE_B__7_1_OFFSET UNITYSDK_OFFSET(0xDC5CF70)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleBoard_TypeDefinitionIndex = 78300;

	class ChimeraDuelMainPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::RPG::Client::Prop::ChimeraDuelMainPuzzleConfig* _Config; // 0x48
		::RPG::Client::Prop::ChimeraDuelMainPuzzleStateMachine* CBIGPGKJAEI; // 0x50
		::System::Boolean DKIFNCBJKNF; // 0x58
		::System::Boolean LJAILOCELFD; // 0x59
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::IChimeraDuelMainPuzzleStateMachine* get_StateMachine()
		{
			return ((::RPG::Client::Prop::IChimeraDuelMainPuzzleStateMachine*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_GET_STATEMACHINE_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_ISPUZZLESTART_OFFSET))(this);
		}

		::System::Void NAKIGFCHAMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_NAKIGFCHAMF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType HLGJBGPJIEB()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_HLGJBGPJIEB_OFFSET))(this);
		}

		::System::Void AKCMGEGCMAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_AKCMGEGCMAP_OFFSET))(this);
		}

		::System::Void LKPCMPPNLBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_LKPCMPPNLBD_OFFSET))(this);
		}

		::System::Void GJIIHKMAMAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_GJIIHKMAMAJ_OFFSET))(this);
		}

		::System::Void DGAJIGIHOEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_DGAJIGIHOEO_OFFSET))(this);
		}

		::System::Void FIKPMIJGBIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_FIKPMIJGBIL_OFFSET))(this);
		}

		::System::Void PCJENGFNDAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_PCJENGFNDAE_OFFSET))(this);
		}

		::System::Void CGCKHGMAJJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD_CGCKHGMAJJE_OFFSET))(this);
		}

		::System::Void _StartPuzzle_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD__STARTPUZZLE_B__7_0_OFFSET))(this);
		}

		::System::Void _StartPuzzle_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBOARD__STARTPUZZLE_B__7_1_OFFSET))(this);
		}

	};
}
