#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedModifierConfig; }

#define DPJEFJDNCDN_ILODFDMLENI_OFFSET UNITYSDK_OFFSET(0x1263BDE0)

inline static constexpr unsigned int DPJEFJDNCDN_TypeDefinitionIndex = 56501;

	class DPJEFJDNCDN : public ::System::Object
	{
	public:
		static ::System::Int32 ILODFDMLENI(::RPG::GameCore::TurnBasedModifierConfig* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + DPJEFJDNCDN_ILODFDMLENI_OFFSET))(a1);
		}

	};
