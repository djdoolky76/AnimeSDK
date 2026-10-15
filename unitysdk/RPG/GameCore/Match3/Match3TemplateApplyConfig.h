#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class Match3GridTagApplyConfig; }
namespace RPG::GameCore::Match3 { class Match3PieceTagApplyConfig; }
namespace RPG::GameCore::Match3 { class Match3TemplateApplyConfig; }

#define RPG_GAMECORE_MATCH3_MATCH3TEMPLATEAPPLYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8212F0)
#define RPG_GAMECORE_MATCH3_MATCH3TEMPLATEAPPLYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D820260)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3TemplateApplyConfig_TypeDefinitionIndex = 24942;

	class Match3TemplateApplyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::Match3PieceTagApplyConfig*>* PieceTagApplyConfig; // 0x10
		::Il2CppArray<::RPG::GameCore::Match3::Match3GridTagApplyConfig*>* GridTagApplyConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TEMPLATEAPPLYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::Match3TemplateApplyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::Match3TemplateApplyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TEMPLATEAPPLYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
