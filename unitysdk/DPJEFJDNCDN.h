#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedModifierConfig; }

#define DPJEFJDNCDN_ILODFDMLENI_OFFSET UNITYSDK_OFFSET(0x12E05D30)

inline static constexpr unsigned int DPJEFJDNCDN_TypeDefinitionIndex = 57721;

	class DPJEFJDNCDN : public ::System::Object
	{
	public:
		static ::System::Int32 ILODFDMLENI(::RPG::GameCore::TurnBasedModifierConfig* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + DPJEFJDNCDN_ILODFDMLENI_OFFSET))(a1);
		}

	};
