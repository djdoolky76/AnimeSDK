#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMIGPHLOLAJ_IHOPGDCAGIB.h"
#include "unitysdk/MoleMole/HollowChessboard/GeometryHeightType.h"
#include "unitysdk/MoleMole/PieceModelAnimType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class AIKGHHJKNCE;
class CMJKDHNDLBM;
class HJEBAFLEPOF;
class JMIGPHLOLAJ;
class KNILAOHIIIG;
class LDDDABNDHEG;
class LHCEEOMENHK;
class PNJDGHBEMLK;
class POPMPAPKINK;
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfigGroup; }
namespace MoleMole::HollowChessboard::ChessboardView { class ChessPieceLocalMoveEffect; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x19B00940)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_ANIMATEDCHESSBOARDSWITCH_OFFSET UNITYSDK_OFFSET(0x107A0520)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_BUILDLOCALMOVEEFFECT_OFFSET UNITYSDK_OFFSET(0x19B00780)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_CHANGEGEOMETRYRENDERTYPE_OFFSET UNITYSDK_OFFSET(0x107A0200)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_CREATEANDADDRENDERENTRY_OFFSET UNITYSDK_OFFSET(0x107A1780)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_DORISEORSINKBYCONFIG_OFFSET UNITYSDK_OFFSET(0x107A1870)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x19B00830)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_GETCHANGESTRUCTCONFIG_1_OFFSET UNITYSDK_OFFSET(0x19B00690)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_GETCHANGESTRUCTCONFIG_OFFSET UNITYSDK_OFFSET(0x107A0AB0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x19B009F0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_ONSTOP_OFFSET UNITYSDK_OFFSET(0x19B008B0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RECONSTRUCTRENDERDATA_OFFSET UNITYSDK_OFFSET(0x107A1180)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RECONSTRUCTRENDERTYPE_OFFSET UNITYSDK_OFFSET(0x107A02B0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RUNINNER_OFFSET UNITYSDK_OFFSET(0x107A03E0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RUN_OFFSET UNITYSDK_OFFSET(0x1079FF60)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_STOP_OFFSET UNITYSDK_OFFSET(0x19B00870)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19B00A00)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x19B00A20)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___BASE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x19B00AB0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___BASE_STOP_OFFSET UNITYSDK_OFFSET(0x19B00B40)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridMoveAction_TypeDefinitionIndex = 67539;

	class GridMoveAction
	{
	public:
		::System::Boolean ForceCloseMultipleDisplay; // 0x30
		::System::Byte _padding0[0x3];
		::MoleMole::HollowChessboard::GeometryHeightType HeightType; // 0x34
		::MoleMole::PieceModelAnimType animType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::CMJKDHNDLBM* context)
		{
			return ((::System::Void(*)(::PVOID, ::CMJKDHNDLBM*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RUN_OFFSET))(this, context);
		}

		static ::JMIGPHLOLAJ_IHOPGDCAGIB ChangeGeometryRenderType(::JMIGPHLOLAJ* data, ::JMIGPHLOLAJ_IHOPGDCAGIB& targetRenderType)
		{
			return ((::JMIGPHLOLAJ_IHOPGDCAGIB(*)(::JMIGPHLOLAJ*, ::JMIGPHLOLAJ_IHOPGDCAGIB&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_CHANGEGEOMETRYRENDERTYPE_OFFSET))(data, targetRenderType);
		}

		::System::Void ReconstructRenderType(::JMIGPHLOLAJ_IHOPGDCAGIB targetRenderType, ::JMIGPHLOLAJ* data)
		{
			return ((::System::Void(*)(::PVOID, ::JMIGPHLOLAJ_IHOPGDCAGIB, ::JMIGPHLOLAJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RECONSTRUCTRENDERTYPE_OFFSET))(this, targetRenderType, data);
		}

		::System::Void AnimatedChessboardSwitch(::JMIGPHLOLAJ* data, ::JMIGPHLOLAJ_IHOPGDCAGIB targetRenderType, ::POPMPAPKINK*& bigTvSwitchRunningData)
		{
			return ((::System::Void(*)(::PVOID, ::JMIGPHLOLAJ*, ::JMIGPHLOLAJ_IHOPGDCAGIB, ::POPMPAPKINK*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_ANIMATEDCHESSBOARDSWITCH_OFFSET))(this, data, targetRenderType, bigTvSwitchRunningData);
		}

		static ::System::Void ReconstructRenderData(::JMIGPHLOLAJ* data, ::JMIGPHLOLAJ_IHOPGDCAGIB targetRenderType)
		{
			return ((::System::Void(*)(::JMIGPHLOLAJ*, ::JMIGPHLOLAJ_IHOPGDCAGIB))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RECONSTRUCTRENDERDATA_OFFSET))(data, targetRenderType);
		}

		static ::System::Void CreateAndAddRenderEntry(::HJEBAFLEPOF* renderWorld, ::JMIGPHLOLAJ* data, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* cellIndexList, ::LDDDABNDHEG* effectRole, ::LHCEEOMENHK* effectRuntimeData, ::MoleMole::HollowChessboard::HollowChessboardUID sectionId)
		{
			return ((::System::Void(*)(::HJEBAFLEPOF*, ::JMIGPHLOLAJ*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::LDDDABNDHEG*, ::LHCEEOMENHK*, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_CREATEANDADDRENDERENTRY_OFFSET))(renderWorld, data, cellIndexList, effectRole, effectRuntimeData, sectionId);
		}

		static ::System::Void RunInner(::AIKGHHJKNCE* chessPieceProxy, ::MoleMole::PieceModelAnimType animType, ::MoleMole::HollowChessboard::GeometryHeightType geometryHeightType, ::System::Action* onEnd, ::System::Boolean forceCloseMultipleDisplay, ::KNILAOHIIIG* overrideInfo, ::System::Single speed)
		{
			return ((::System::Void(*)(::AIKGHHJKNCE*, ::MoleMole::PieceModelAnimType, ::MoleMole::HollowChessboard::GeometryHeightType, ::System::Action*, ::System::Boolean, ::KNILAOHIIIG*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RUNINNER_OFFSET))(chessPieceProxy, animType, geometryHeightType, onEnd, forceCloseMultipleDisplay, overrideInfo, speed);
		}

		static ::System::Void DoRiseOrSinkByConfig(::MoleMole::PieceModelAnimType animType, ::MoleMole::HollowChessboard::GeometryHeightType geometryHeightType, ::System::Action* onEnd, ::System::Boolean forceCloseMultipleDisplay, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* config, ::PNJDGHBEMLK* chessPiece3dModel, ::System::Boolean preserveVE, ::KNILAOHIIIG* overrideInfo, ::System::Single speed)
		{
			return ((::System::Void(*)(::MoleMole::PieceModelAnimType, ::MoleMole::HollowChessboard::GeometryHeightType, ::System::Action*, ::System::Boolean, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::PNJDGHBEMLK*, ::System::Boolean, ::KNILAOHIIIG*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_DORISEORSINKBYCONFIG_OFFSET))(animType, geometryHeightType, onEnd, forceCloseMultipleDisplay, config, chessPiece3dModel, preserveVE, overrideInfo, speed);
		}

		static ::System::Boolean GetChangeStructConfig(::AIKGHHJKNCE* chessPieceProxy, ::MoleMole::PieceModelAnimType changeType, ::MoleMole::HollowChessboard::GeometryHeightType geometryHeightType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*& config)
		{
			return ((::System::Boolean(*)(::AIKGHHJKNCE*, ::MoleMole::PieceModelAnimType, ::MoleMole::HollowChessboard::GeometryHeightType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_GETCHANGESTRUCTCONFIG_OFFSET))(chessPieceProxy, changeType, geometryHeightType, config);
		}

		static ::System::Boolean GetChangeStructConfig_1(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*& config, ::AIKGHHJKNCE* chessPieceProxy, ::MoleMole::PieceModelAnimType changeType, ::MoleMole::HollowChessboard::GeometryHeightType geometryHeightType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfigGroup* configGroup)
		{
			return ((::System::Boolean(*)(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*&, ::AIKGHHJKNCE*, ::MoleMole::PieceModelAnimType, ::MoleMole::HollowChessboard::GeometryHeightType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfigGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_GETCHANGESTRUCTCONFIG_1_OFFSET))(config, chessPieceProxy, changeType, geometryHeightType, configGroup);
		}

		static ::MoleMole::HollowChessboard::ChessboardView::ChessPieceLocalMoveEffect* BuildLocalMoveEffect(::MoleMole::PieceModelAnimType animType, ::System::Boolean forceCloseMultipleDisplay, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* config, ::System::Action* onEnd)
		{
			return ((::MoleMole::HollowChessboard::ChessboardView::ChessPieceLocalMoveEffect*(*)(::MoleMole::PieceModelAnimType, ::System::Boolean, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_BUILDLOCALMOVEEFFECT_OFFSET))(animType, forceCloseMultipleDisplay, config, onEnd);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_STOP_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_ONSTOP_OFFSET))(this);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___BASE_ACTIONOVER_OFFSET))(this);
		}

		::System::Void __base_ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___BASE_FORCESTOP_OFFSET))(this);
		}

		::System::Void __base_Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___BASE_STOP_OFFSET))(this);
		}
	};
}
