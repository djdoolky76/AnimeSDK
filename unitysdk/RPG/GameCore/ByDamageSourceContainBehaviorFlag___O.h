#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDamageSourceContainBehaviorFlag___O_TypeDefinitionIndex = 23311;

	class ByDamageSourceContainBehaviorFlag___O : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet__0___FromJson()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>O")->GetStaticField(0xE2B0);
		}

	};
}
