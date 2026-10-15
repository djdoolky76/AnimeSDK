#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetReverse; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETREVERSE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB404D0)
#define RPG_GAMECORE_TARGETREVERSE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB40560)
#define RPG_GAMECORE_TARGETREVERSE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB40540)
#define RPG_GAMECORE_TARGETREVERSE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB404E0)
#define RPG_GAMECORE_TARGETREVERSE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB40460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetReverse_TypeDefinitionIndex = 24034;

	class TargetReverse : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREVERSE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetReverse* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetReverse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREVERSE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetReverse* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetReverse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREVERSE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetReverse* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetReverse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREVERSE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetReverse* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetReverse*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETREVERSE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
