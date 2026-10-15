#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowEntityFloatMessage; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWENTITYFLOATMESSAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADB170)
#define RPG_GAMECORE_SHOWENTITYFLOATMESSAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DADB190)
#define RPG_GAMECORE_SHOWENTITYFLOATMESSAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADB130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEntityFloatMessage_TypeDefinitionIndex = 22484;

	class ShowEntityFloatMessage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean AliveOnly; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID ContentID; // 0x28
		::System::Boolean IsShowUIMessageFromModel; // 0x38
		::System::Byte _padding1[0x3];
		::RPG::GameCore::FloatMessageType MessageType; // 0x3C
		::System::Single ShowUIMessageDelayTime; // 0x40
		::System::Single ShowUIMessageInternalTime; // 0x44
		::System::String* CustomUIModelAttachPointName; // 0x48
		::RPG::MVector3 CustomOffset; // 0x50
		::System::Boolean ForceVisible; // 0x5C
		::System::Boolean UseFixedPosition; // 0x5D
		::System::Boolean ScreenSpaceFloatMsg; // 0x5E
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENTITYFLOATMESSAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowEntityFloatMessage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowEntityFloatMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENTITYFLOATMESSAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowEntityFloatMessage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowEntityFloatMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENTITYFLOATMESSAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
