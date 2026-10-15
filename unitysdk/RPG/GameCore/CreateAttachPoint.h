#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateAttachPoint; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CREATEATTACHPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E06A0)
#define RPG_GAMECORE_CREATEATTACHPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E06E0)
#define RPG_GAMECORE_CREATEATTACHPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E0640)

namespace RPG::GameCore
{
	class CreateAttachPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SourcePointName; // 0x20
		::System::String* NewPointName; // 0x28
		::RPG::MVector3 Posffset; // 0x30
		::RPG::MVector3 RotOffset; // 0x3C
		::System::Boolean FollowSourcePoint; // 0x48
		::System::Byte _padding0[0x7];
		::System::String* SourceBoneName; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEATTACHPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEATTACHPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateAttachPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEATTACHPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
