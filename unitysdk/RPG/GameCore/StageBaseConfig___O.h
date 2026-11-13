#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageBaseConfig___O_TypeDefinitionIndex = 19327;

	class StageBaseConfig___O : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet__0___FromJson()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>O")->GetStaticField(0x19350);
		}

		static ::System::Object** StaticGet__1___FromJson()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>O")->GetStaticField(0x19358);
		}

	};
}
