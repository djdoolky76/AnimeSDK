#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE28D6B0)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE28D6F0)
#define RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR___C___COLLECTRENDERERSTO_B__21_0_OFFSET UNITYSDK_OFFSET(0xE28D700)

namespace RPG::Client
{
	class TimeSpaceCrisscrossAdditionsBehavior___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::Renderer*>** StaticGet___9__21_0()
		{
			return (::System::Predicate_1<::UnityEngine::Renderer*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1B4E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1B4E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectRenderersTo_b__21_0(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSADDITIONSBEHAVIOR___C___COLLECTRENDERERSTO_B__21_0_OFFSET))(this, a1);
		}

	};
}
