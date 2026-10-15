#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TextDynamicParamBase; }

#define RPG_GAMECORE_TEXTDYNAMICPARAMBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB815D0)
#define RPG_GAMECORE_TEXTDYNAMICPARAMBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB815E0)
#define RPG_GAMECORE_TEXTDYNAMICPARAMBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB81220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextDynamicParamBase_TypeDefinitionIndex = 17010;

	class TextDynamicParamBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDYNAMICPARAMBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TextDynamicParamBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TextDynamicParamBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDYNAMICPARAMBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TextDynamicParamBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TextDynamicParamBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDYNAMICPARAMBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
