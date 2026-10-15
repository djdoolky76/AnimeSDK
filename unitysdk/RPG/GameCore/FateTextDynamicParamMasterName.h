#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TextDynamicParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateTextDynamicParamMasterName; }
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_FATETEXTDYNAMICPARAMMASTERNAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69F160)
#define RPG_GAMECORE_FATETEXTDYNAMICPARAMMASTERNAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69F170)
#define RPG_GAMECORE_FATETEXTDYNAMICPARAMMASTERNAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69F050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateTextDynamicParamMasterName_TypeDefinitionIndex = 16647;

	class FateTextDynamicParamMasterName : public ::RPG::GameCore::TextDynamicParamBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* MasterAvatarID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMMASTERNAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateTextDynamicParamMasterName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateTextDynamicParamMasterName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMMASTERNAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateTextDynamicParamMasterName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateTextDynamicParamMasterName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETEXTDYNAMICPARAMMASTERNAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
