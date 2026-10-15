#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace RPG::GameCore
{
	class DynamicValue___O : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet__0___ToBinary()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>O")->GetStaticField(0x22C90);
		}

	};
}
