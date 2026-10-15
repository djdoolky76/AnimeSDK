#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace TMPro
{
	template <typename T>
	class TMP_ListPool_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("TMPro", "<>c")->GetStaticField(0x0);
		}

	};
}
