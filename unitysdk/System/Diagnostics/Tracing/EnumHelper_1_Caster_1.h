#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Diagnostics::Tracing
{
	template <typename T>
	class EnumHelper_1_Caster_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_Instance()
		{
			return (::System::Object**)UnitySDK::FromName("System.Diagnostics.Tracing", "Caster`1")->GetStaticField(0x0);
		}

	};
}
