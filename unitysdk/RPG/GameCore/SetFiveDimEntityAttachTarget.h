#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetFiveDimEntityAttachTarget; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETFIVEDIMENTITYATTACHTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB2600)
#define RPG_GAMECORE_SETFIVEDIMENTITYATTACHTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB2610)
#define RPG_GAMECORE_SETFIVEDIMENTITYATTACHTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB25C0)

namespace RPG::GameCore
{
	class SetFiveDimEntityAttachTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LittleGame; // 0x18
		::RPG::GameCore::TargetEvaluator* AttachTarget; // 0x20
		::RPG::GameCore::DynamicString* EntityID; // 0x28
		::System::Boolean ClearAttach; // 0x30
		::System::Byte _padding0[0x7];
		::System::String* AttachPoint; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFIVEDIMENTITYATTACHTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFiveDimEntityAttachTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFiveDimEntityAttachTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFIVEDIMENTITYATTACHTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFiveDimEntityAttachTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFiveDimEntityAttachTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFIVEDIMENTITYATTACHTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
