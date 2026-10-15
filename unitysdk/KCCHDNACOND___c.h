#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFNPIPBLFJM;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define KCCHDNACOND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB32ABF0)
#define KCCHDNACOND___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB32AC30)
#define KCCHDNACOND___C___BUILDRUNTIMERANKROWS_B__9_0_OFFSET UNITYSDK_OFFSET(0xB32AC40)
#define KCCHDNACOND___C___BUILDRUNTIMERANKROWS_B__9_1_OFFSET UNITYSDK_OFFSET(0xB32AC80)

inline static constexpr unsigned int KCCHDNACOND___c_TypeDefinitionIndex = 81973;

	class KCCHDNACOND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34430);
		}

		static ::System::Predicate_1<::AFNPIPBLFJM*>** StaticGet___9__9_1()
		{
			return (::System::Predicate_1<::AFNPIPBLFJM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34438);
		}

		static ::System::Comparison_1<::AFNPIPBLFJM*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::AFNPIPBLFJM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34440);
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
