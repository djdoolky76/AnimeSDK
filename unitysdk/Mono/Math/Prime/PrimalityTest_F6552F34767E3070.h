#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/Prime/ConfidenceFactor_E982AD35DD688AA9.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Mono::Math { class BigInteger_195A9C52A7AD8B6F; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_MATH_PRIME_PRIMALITYTEST_F6552F34767E3070_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F2B96C0)
#define MONO_MATH_PRIME_PRIMALITYTEST_F6552F34767E3070_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F2B9740)
#define MONO_MATH_PRIME_PRIMALITYTEST_F6552F34767E3070_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F2B9140)
#define MONO_MATH_PRIME_PRIMALITYTEST_F6552F34767E3070__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2B9130)

namespace Mono::Math::Prime
{
	inline static constexpr unsigned int PrimalityTest_F6552F34767E3070_TypeDefinitionIndex = 2484;

	class PrimalityTest_F6552F34767E3070 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTEST_F6552F34767E3070__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::Mono::Math::BigInteger_195A9C52A7AD8B6F* bi, ::Mono::Math::Prime::ConfidenceFactor_E982AD35DD688AA9 confidence)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::Mono::Math::Prime::ConfidenceFactor_E982AD35DD688AA9))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTEST_F6552F34767E3070_INVOKE_OFFSET))(this, bi, confidence);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Math::BigInteger_195A9C52A7AD8B6F* bi, ::Mono::Math::Prime::ConfidenceFactor_E982AD35DD688AA9 confidence, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::Mono::Math::Prime::ConfidenceFactor_E982AD35DD688AA9, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTEST_F6552F34767E3070_BEGININVOKE_OFFSET))(this, bi, confidence, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTEST_F6552F34767E3070_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
