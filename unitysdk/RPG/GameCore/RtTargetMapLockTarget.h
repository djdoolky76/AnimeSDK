#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtTargetMapLockTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPLOCKTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6A960)
#define RPG_GAMECORE_RTTARGETMAPLOCKTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA6AA10)
#define RPG_GAMECORE_RTTARGETMAPLOCKTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA6A9D0)
#define RPG_GAMECORE_RTTARGETMAPLOCKTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6A970)
#define RPG_GAMECORE_RTTARGETMAPLOCKTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6A8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapLockTarget_TypeDefinitionIndex = 24247;

	class RtTargetMapLockTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPLOCKTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPLOCKTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapLockTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPLOCKTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPLOCKTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPLOCKTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
