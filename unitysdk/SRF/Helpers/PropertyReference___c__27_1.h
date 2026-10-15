#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Attribute; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace SRF::Helpers
{
	template <typename T>
	class PropertyReference___c__27_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("SRF.Helpers", "<>c__27`1")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Attribute*, ::System::Boolean>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::System::Attribute*, ::System::Boolean>**)UnitySDK::FromName("SRF.Helpers", "<>c__27`1")->GetStaticField(0x0);
		}

	};
}
