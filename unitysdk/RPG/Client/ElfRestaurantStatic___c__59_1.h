#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

namespace RPG::Client
{
	template <typename T>
	class ElfRestaurantStatic___c__59_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c__59`1")->GetStaticField(0x0);
		}

		static ::System::Comparison_1<::UnityEngine::RaycastHit>** StaticGet___9__59_0()
		{
			return (::System::Comparison_1<::UnityEngine::RaycastHit>**)UnitySDK::FromName("RPG.Client", "<>c__59`1")->GetStaticField(0x0);
		}

	};
}
