#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFMAPBDADDE;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleEffectService_1___c_TypeDefinitionIndex = 76484;

	template <typename T>
	class SimpleEffectService_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x0);
		}

		static ::System::Func_3<::System::String*, ::DFMAPBDADDE*, ::System::Boolean>** StaticGet___9__35_0()
		{
			return (::System::Func_3<::System::String*, ::DFMAPBDADDE*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x0);
		}

		static ::System::Func_3<::System::String*, ::DFMAPBDADDE*, ::System::Boolean>** StaticGet___9__36_0()
		{
			return (::System::Func_3<::System::String*, ::DFMAPBDADDE*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x0);
		}

	};
}
