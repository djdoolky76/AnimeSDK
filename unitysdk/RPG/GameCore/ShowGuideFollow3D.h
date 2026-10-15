#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowGuideFollow3D; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_GAMECORE_SHOWGUIDEFOLLOW3D_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADE5B0)
#define RPG_GAMECORE_SHOWGUIDEFOLLOW3D_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1DADE5C0)
#define RPG_GAMECORE_SHOWGUIDEFOLLOW3D_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DADE580)

namespace RPG::GameCore
{
	class ShowGuideFollow3D : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 ID; // 0x18
		::System::Int32 GuideResID; // 0x1C
		::System::UInt32 CharacterID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::String* AttachPoint; // 0x30
		::System::Boolean Show; // 0x38
		::System::Byte _padding1[0x3];
		::System::Single OffsetX; // 0x3C
		::System::Single OffsetY; // 0x40
		::System::Byte _padding2[0x4];
		::UnityEngine::GameObject* FollowTarget; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEFOLLOW3D_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGuideFollow3D* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGuideFollow3D*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEFOLLOW3D_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGuideFollow3D* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGuideFollow3D*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEFOLLOW3D_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
