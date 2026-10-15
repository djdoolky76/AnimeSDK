#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareEnvProfilePath; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D47B6B0)
#define RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D47B870)
#define RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D47B840)
#define RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D47B6C0)
#define RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D47B680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareEnvProfilePath_TypeDefinitionIndex = 20582;

	class ByCompareEnvProfilePath : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* TargetPath; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareEnvProfilePath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareEnvProfilePath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareEnvProfilePath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareEnvProfilePath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEnvProfilePath* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEnvProfilePath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareEnvProfilePath* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareEnvProfilePath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREENVPROFILEPATH_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
