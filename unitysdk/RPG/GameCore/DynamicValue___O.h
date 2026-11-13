#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicValue___O_TypeDefinitionIndex = 10857;

	class DynamicValue___O : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet__0___ToBinary()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>O")->GetStaticField(0x1C900);
		}

	};
}
