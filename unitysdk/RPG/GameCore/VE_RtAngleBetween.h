#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtDirConfig; }
namespace RPG::GameCore { class VE_RtAngleBetween; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTANGLEBETWEEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC54B50)
#define RPG_GAMECORE_VE_RTANGLEBETWEEN_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC54D70)
#define RPG_GAMECORE_VE_RTANGLEBETWEEN_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC54D40)
#define RPG_GAMECORE_VE_RTANGLEBETWEEN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC54B60)
#define RPG_GAMECORE_VE_RTANGLEBETWEEN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC54B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtAngleBetween_TypeDefinitionIndex = 24268;

	class VE_RtAngleBetween : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::RtDirConfig* Dir1; // 0x20
		::RPG::GameCore::RtDirConfig* Dir2; // 0x28
		::System::Boolean Abs; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTANGLEBETWEEN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtAngleBetween* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtAngleBetween*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTANGLEBETWEEN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtAngleBetween* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtAngleBetween*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTANGLEBETWEEN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtAngleBetween* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtAngleBetween*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTANGLEBETWEEN_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtAngleBetween* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtAngleBetween*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTANGLEBETWEEN_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
