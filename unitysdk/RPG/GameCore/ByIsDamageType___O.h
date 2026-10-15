#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsDamageType___O_TypeDefinitionIndex = 23518;

	class ByIsDamageType___O : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet__0___FromJson()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>O")->GetStaticField(0x10920);
		}

	};
}
