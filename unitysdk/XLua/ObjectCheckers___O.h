#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace XLua { class ObjectCheck; }

namespace XLua
{
	class ObjectCheckers___O : public ::System::Object
	{
	public:
		static ::XLua::ObjectCheck** StaticGet__0___objectCheck()
		{
			return (::XLua::ObjectCheck**)UnitySDK::FromName("XLua", "<>O")->GetStaticField(0x49900);
		}

	};
}
