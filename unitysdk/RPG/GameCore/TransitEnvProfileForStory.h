#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TransitEnvProfile.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TransitEnvProfileForStory; }

#define RPG_GAMECORE_TRANSITENVPROFILEFORSTORY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC38B40)
#define RPG_GAMECORE_TRANSITENVPROFILEFORSTORY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC38B50)
#define RPG_GAMECORE_TRANSITENVPROFILEFORSTORY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC38CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TransitEnvProfileForStory_TypeDefinitionIndex = 21901;

	class TransitEnvProfileForStory : public ::RPG::GameCore::TransitEnvProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSITENVPROFILEFORSTORY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TransitEnvProfileForStory* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TransitEnvProfileForStory*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSITENVPROFILEFORSTORY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TransitEnvProfileForStory* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TransitEnvProfileForStory*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSITENVPROFILEFORSTORY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
