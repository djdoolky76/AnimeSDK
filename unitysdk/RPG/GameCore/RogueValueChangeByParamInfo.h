#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueValueChangeByParamInfo; }

#define RPG_GAMECORE_ROGUEVALUECHANGEBYPARAMINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA17FF0)
#define RPG_GAMECORE_ROGUEVALUECHANGEBYPARAMINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA17FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueValueChangeByParamInfo_TypeDefinitionIndex = 19860;

	class RogueValueChangeByParamInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEVALUECHANGEBYPARAMINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueValueChangeByParamInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueValueChangeByParamInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEVALUECHANGEBYPARAMINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
