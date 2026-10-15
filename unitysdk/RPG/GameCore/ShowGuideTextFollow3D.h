#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GuideTextPC; }
namespace RPG::GameCore { class ShowGuideTextFollow3D; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_GAMECORE_SHOWGUIDETEXTFOLLOW3D_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB26A0)
#define RPG_GAMECORE_SHOWGUIDETEXTFOLLOW3D_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1DAB26E0)
#define RPG_GAMECORE_SHOWGUIDETEXTFOLLOW3D_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAB2640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowGuideTextFollow3D_TypeDefinitionIndex = 24340;

	class ShowGuideTextFollow3D : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 ID; // 0x18
		::System::Int32 GuideResID; // 0x1C
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* AttachPoint; // 0x28
		::System::String* TextPath; // 0x30
		::System::String* Text; // 0x38
		::System::String* ActionName; // 0x40
		::System::Boolean Show; // 0x48
		::System::Byte _padding0[0x3];
		::System::Single OffsetX; // 0x4C
		::System::Single OffsetY; // 0x50
		::System::Byte _padding1[0x4];
		::RPG::GameCore::GuideTextPC* PCGuide; // 0x58
		::UnityEngine::GameObject* FollowTarget; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDETEXTFOLLOW3D_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGuideTextFollow3D* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGuideTextFollow3D*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDETEXTFOLLOW3D_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGuideTextFollow3D* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGuideTextFollow3D*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDETEXTFOLLOW3D_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
