#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAliveSourceEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB31AA0)
#define RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB31B30)
#define RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB31B10)
#define RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB31AB0)
#define RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB31A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAliveSourceEntity_TypeDefinitionIndex = 23966;

	class TargetFetchAliveSourceEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAliveSourceEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAliveSourceEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAliveSourceEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAliveSourceEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAliveSourceEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAliveSourceEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAliveSourceEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAliveSourceEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALIVESOURCEENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
