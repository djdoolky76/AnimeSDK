#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGCEOEHGPPE;
class HIAMBDKHMIJ;
class KGPCBBIOGLB;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define EMILHGPLJHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15537F30)
#define EMILHGPLJHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15537F70)
#define EMILHGPLJHC___C__ADDPROGRESSLOG_B__90_5_OFFSET UNITYSDK_OFFSET(0x15537F80)
#define EMILHGPLJHC___C__ADDPROGRESSLOG_B__90_6_OFFSET UNITYSDK_OFFSET(0x15537FC0)

inline static constexpr unsigned int EMILHGPLJHC___c_TypeDefinitionIndex = 59552;

	class EMILHGPLJHC___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::HGCEOEHGPPE*, ::KGPCBBIOGLB*>** StaticGet___9__90_5()
		{
			return (::System::Action_2<::HGCEOEHGPPE*, ::KGPCBBIOGLB*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BE30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BE38);
		}

		static ::System::Action_1<::HIAMBDKHMIJ*>** StaticGet___9__90_6()
		{
			return (::System::Action_1<::HIAMBDKHMIJ*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BE40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMILHGPLJHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMILHGPLJHC___C_CTOR_OFFSET))(this);
		}

		::System::Void _AddProgressLog_b__90_5(::HGCEOEHGPPE* a1, ::KGPCBBIOGLB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*, ::KGPCBBIOGLB*))((::PBYTE)hIl2Cpp + EMILHGPLJHC___C__ADDPROGRESSLOG_B__90_5_OFFSET))(this, a1, a2);
		}

		::System::Void _AddProgressLog_b__90_6(::HIAMBDKHMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + EMILHGPLJHC___C__ADDPROGRESSLOG_B__90_6_OFFSET))(this, a1);
		}

	};
