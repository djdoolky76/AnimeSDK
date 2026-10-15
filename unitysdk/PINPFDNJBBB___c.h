#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIPCDNCKCGE;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define PINPFDNJBBB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC274530)
#define PINPFDNJBBB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC274560)
#define PINPFDNJBBB___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xC274570)

inline static constexpr unsigned int PINPFDNJBBB___c_TypeDefinitionIndex = 80760;

	class PINPFDNJBBB___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::CIPCDNCKCGE*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::CIPCDNCKCGE*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F860);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F868);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PINPFDNJBBB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PINPFDNJBBB___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__0_0(::CIPCDNCKCGE* a1, ::CIPCDNCKCGE* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::CIPCDNCKCGE*, ::CIPCDNCKCGE*))((::PBYTE)hIl2Cpp + PINPFDNJBBB___C___CTOR_B__0_0_OFFSET))(this, a1, a2);
		}

	};
