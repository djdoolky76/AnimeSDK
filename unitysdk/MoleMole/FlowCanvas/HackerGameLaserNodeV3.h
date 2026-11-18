#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardFlowNode.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/FlowCanvas/Flow.h"

class CEIAAPADPPO;
class PHCAOEMIJPJ;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class ChessEntityCollection; }
namespace MoleMole { class HackerGameBaseDamage; }
namespace MoleMole::FlowCanvas { class DelayedLaserV3; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_CREATEPERFORMENTITY_OFFSET UNITYSDK_OFFSET(0x180D4210)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x180D2090)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x180D2260)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_SPAWNLASEREFFECT_OFFSET UNITYSDK_OFFSET(0x180D4DA0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_START_OFFSET UNITYSDK_OFFSET(0x180D2620)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_UPDATE_OFFSET UNITYSDK_OFFSET(0x180D4AA0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3__CTOR_OFFSET UNITYSDK_OFFSET(0x180D5020)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x180D5160)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x180D5190)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameLaserNodeV3_TypeDefinitionIndex = 75770;

	class HackerGameLaserNodeV3 : public ::MoleMole::FlowCanvas::ChessboardFlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* damageDelay; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::HollowChessboard::HollowCell>* triggerPoint; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* isPaused; // 0xC0
		::FlowCanvas::FlowInput* start; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* screenIndex; // 0xD0
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::DelayedLaserV3*>* Data; // 0xD8
		::CEIAAPADPPO* _laserEffectInstance; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Int32>* frameIndex; // 0xE8
		::FlowCanvas::ValueInput_1<::System::String*>* laserParticleKey; // 0xF0
		::FlowCanvas::ValueInput_1<::System::Single>* alertExtraDuration; // 0xF8
		::FlowCanvas::ValueInput_1<::MoleMole::HackerGameBaseDamage*>* damage; // 0x100
		::FlowCanvas::ValueInput_1<::MoleMole::ChessEntityCollection*>* playerEntityCollection; // 0x108
		::FlowCanvas::ValueInput_1<::System::Int32>* alertFrameCount; // 0x110
		::FlowCanvas::ValueInput_1<::System::String*>* alertTextureKey; // 0x118
		::FlowCanvas::ValueInput_1<::System::String*>* damageSoundTriggerName; // 0x120
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* boundList; // 0x128
		::FlowCanvas::ValueInput_1<::System::Single>* damageDuration; // 0x130
		::FlowCanvas::ValueInput_1<::System::Single>* alertDuration; // 0x138
		::FlowCanvas::ValueInput_1<::System::String*>* laserSpawnSoundTriggerName; // 0x140
		::FlowCanvas::ValueInput_1<::System::String*>* alertSoundTriggerName; // 0x148
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::Single>*>* laserPerformSequence; // 0x150
		::FlowCanvas::ValueInput_1<::System::String*>* feverDamageSoundTriggerName; // 0x158
		::System::Action* SpawnLaserEffectDelegate; // 0x160
		::FlowCanvas::ValueInput_1<::MoleMole::ChessEntityCollection*>* chessEntityCollection; // 0x168
		::FlowCanvas::ValueInput_1<::System::Int32>* laserWidthExtend; // 0x170
		::FlowCanvas::ValueInput_1<::System::String*>* laserSpawnScreenEffectKey; // 0x178
		::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>* PerformCache; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_START_OFFSET))(this, f);
		}

		::MoleMole::HollowChessboard::HollowEntity* CreatePerformEntity(::System::Collections::Generic::List_1<::PHCAOEMIJPJ*>* temp, ::MoleMole::HollowChessboard::HollowCell cell)
		{
			return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::System::Collections::Generic::List_1<::PHCAOEMIJPJ*>*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_CREATEPERFORMENTITY_OFFSET))(this, temp, cell);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_UPDATE_OFFSET))(this);
		}

		::System::Void SpawnLaserEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3_SPAWNLASEREFFECT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMELASERNODEV3___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
