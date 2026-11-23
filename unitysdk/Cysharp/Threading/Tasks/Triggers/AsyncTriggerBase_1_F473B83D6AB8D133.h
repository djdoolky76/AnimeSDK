#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BA343CE5A74797DB.h"
#include "unitysdk/BA90DFC92B3EFC5F.h"
#include "unitysdk/EE07210D342447A0.h"

namespace Cysharp::Threading::Tasks::Triggers { template <typename T> class AsyncTriggerBase_1; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
template <typename T> class A4032F0DB7A1A15B;

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerBase_1_F473B83D6AB8D133_TypeDefinitionIndex = 19921;

	template <typename T>
	class AsyncTriggerBase_1_F473B83D6AB8D133 : public ::BA343CE5A74797DB
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_B62124F7AFF17E5B()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AsyncTriggerBase_1_F473B83D6AB8D133_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>* EFE497ABF6BF98D8; // 0x0
		::BA90DFC92B3EFC5F B22B108A2E686F3C; // 0x0
		::EE07210D342447A0 E406C4915388583B; // 0x0
		::System::Boolean BA7EF1A247E44446; // 0x0
		T F280F572CD307F11; // 0x0
		::A4032F0DB7A1A15B<T>* A8962CFEFD32F5A4; // 0x0
		::A4032F0DB7A1A15B<T>* F2F4D5CBB23103D5; // 0x0
	};
}
