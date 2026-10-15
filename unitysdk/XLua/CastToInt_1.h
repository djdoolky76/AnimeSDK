#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace XLua
{
	template <typename T>
	class CastToInt_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_caster()
		{
			return (::System::Object**)UnitySDK::FromName("XLua", "CastToInt`1")->GetStaticField(0x0);
		}

		static ::System::Boolean* StaticGet_isEnum()
		{
			return (::System::Boolean*)UnitySDK::FromName("XLua", "CastToInt`1")->GetStaticField(0x0);
		}

		static ::System::Object** StaticGet_getFunc()
		{
			return (::System::Object**)UnitySDK::FromName("XLua", "CastToInt`1")->GetStaticField(0x0);
		}

	};
}
