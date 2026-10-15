#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByWaitCustomString; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYWAITCUSTOMSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D515D40)
#define RPG_GAMECORE_BYWAITCUSTOMSTRING_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D515EE0)
#define RPG_GAMECORE_BYWAITCUSTOMSTRING_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D515EB0)
#define RPG_GAMECORE_BYWAITCUSTOMSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D515D50)
#define RPG_GAMECORE_BYWAITCUSTOMSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D515D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByWaitCustomString_TypeDefinitionIndex = 21689;

	class ByWaitCustomString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* CustomString; // 0x20
		::System::Boolean CheckForWin; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYWAITCUSTOMSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByWaitCustomString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByWaitCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYWAITCUSTOMSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByWaitCustomString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByWaitCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYWAITCUSTOMSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByWaitCustomString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByWaitCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYWAITCUSTOMSTRING_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByWaitCustomString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByWaitCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYWAITCUSTOMSTRING_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
