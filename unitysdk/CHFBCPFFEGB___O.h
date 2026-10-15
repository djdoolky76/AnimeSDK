#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Predicate_1; }

inline static constexpr unsigned int CHFBCPFFEGB___O_TypeDefinitionIndex = 72320;

	class CHFBCPFFEGB___O : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet__0____IsModifierUnitHalo()
		{
			return (::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x26A30);
		}

	};
