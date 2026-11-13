#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByEnableStoryStreamingSource; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE32A10)
#define RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CE32B90)
#define RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CE32B60)
#define RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE32A20)
#define RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE329E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByEnableStoryStreamingSource_TypeDefinitionIndex = 22296;

	class ByEnableStoryStreamingSource : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByEnableStoryStreamingSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByEnableStoryStreamingSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByEnableStoryStreamingSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByEnableStoryStreamingSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEnableStoryStreamingSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEnableStoryStreamingSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEnableStoryStreamingSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEnableStoryStreamingSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENABLESTORYSTREAMINGSOURCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
