#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFNPIPBLFJM;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define KCCHDNACOND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB331730)
#define KCCHDNACOND___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB331770)
#define KCCHDNACOND___C___BUILDRUNTIMERANKROWS_B__9_0_OFFSET UNITYSDK_OFFSET(0xB331780)
#define KCCHDNACOND___C___BUILDRUNTIMERANKROWS_B__9_1_OFFSET UNITYSDK_OFFSET(0xB3317C0)

inline static constexpr unsigned int KCCHDNACOND___c_TypeDefinitionIndex = 81974;

	class KCCHDNACOND___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::AFNPIPBLFJM*>** StaticGet___9__9_1()
		{
			return (::System::Predicate_1<::AFNPIPBLFJM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35820);
		}

		static ::System::Comparison_1<::AFNPIPBLFJM*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::AFNPIPBLFJM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35828);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCCHDNACOND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCHDNACOND___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __BuildRuntimeRankRows_b__9_0(::AFNPIPBLFJM* a1, ::AFNPIPBLFJM* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::AFNPIPBLFJM*, ::AFNPIPBLFJM*))((::PBYTE)hIl2Cpp + KCCHDNACOND___C___BUILDRUNTIMERANKROWS_B__9_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean __BuildRuntimeRankRows_b__9_1(::AFNPIPBLFJM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFNPIPBLFJM*))((::PBYTE)hIl2Cpp + KCCHDNACOND___C___BUILDRUNTIMERANKROWS_B__9_1_OFFSET))(this, a1);
		}

	};
