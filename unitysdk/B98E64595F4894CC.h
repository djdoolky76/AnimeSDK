#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BA90DFC92B3EFC5F.h"
#include "unitysdk/EE07210D342447A0.h"
#include "unitysdk/FC7CE6AB2CF24951.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks::Triggers { template <typename T> class AsyncTriggerBase_1; }
namespace System { template <typename T> class Action_1; }
template <typename T> class A4032F0DB7A1A15B;

inline static constexpr unsigned int B98E64595F4894CC_TypeDefinitionIndex = 19843;

template <typename T>
class B98E64595F4894CC : public ::System::Object
{
public:
	static ::System::Action_1<::System::Object*>** StaticGet_B62124F7AFF17E5B()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(B98E64595F4894CC_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>* E3B41EAA33A08C46; // 0x0
	::BA90DFC92B3EFC5F B22B108A2E686F3C; // 0x0
	::EE07210D342447A0 E406C4915388583B; // 0x0
	::System::Boolean BA7EF1A247E44446; // 0x0
	::System::Boolean B9570E357160FBB7; // 0x0
	::FC7CE6AB2CF24951<T> F3F8728D794E6158; // 0x0
	::A4032F0DB7A1A15B<T>* A8962CFEFD32F5A4; // 0x0
	::A4032F0DB7A1A15B<T>* F2F4D5CBB23103D5; // 0x0
};
