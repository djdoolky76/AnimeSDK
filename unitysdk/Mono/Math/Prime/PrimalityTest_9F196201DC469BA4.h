#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/Prime/ConfidenceFactor_BC2964F1B0FE5128.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace Mono::Math { class BigInteger_B63D07FB4865BEA1; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_MATH_PRIME_PRIMALITYTEST_9F196201DC469BA4_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C028E50)
#define MONO_MATH_PRIME_PRIMALITYTEST_9F196201DC469BA4_CTOR_OFFSET UNITYSDK_OFFSET(0x1C028D60)
#define MONO_MATH_PRIME_PRIMALITYTEST_9F196201DC469BA4_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C028ED0)
#define MONO_MATH_PRIME_PRIMALITYTEST_9F196201DC469BA4_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C028D40)

namespace Mono::Math::Prime
{
	class PrimalityTest_9F196201DC469BA4 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTEST_9F196201DC469BA4_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::Prime::ConfidenceFactor_BC2964F1B0FE5128 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::Prime::ConfidenceFactor_BC2964F1B0FE5128))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTEST_9F196201DC469BA4_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::Prime::ConfidenceFactor_BC2964F1B0FE5128 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::Prime::ConfidenceFactor_BC2964F1B0FE5128, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTEST_9F196201DC469BA4_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTEST_9F196201DC469BA4_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
