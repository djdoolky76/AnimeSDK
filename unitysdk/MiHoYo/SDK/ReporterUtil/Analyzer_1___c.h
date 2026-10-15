#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

namespace MiHoYo::SDK::ReporterUtil
{
	template <typename T>
	class Analyzer_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.ReporterUtil", "<>c")->GetStaticField(0x0);
		}

		static ::System::Comparison_1<T>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<T>**)UnitySDK::FromName("MiHoYo.SDK.ReporterUtil", "<>c")->GetStaticField(0x0);
		}

	};
}
