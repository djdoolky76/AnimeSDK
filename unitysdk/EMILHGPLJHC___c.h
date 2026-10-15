#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGCEOEHGPPE;
class HIAMBDKHMIJ;
class KGPCBBIOGLB;
namespace System { class Action; }
namespace System { class Object; }

#define EMILHGPLJHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15543C20)
#define EMILHGPLJHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15543C60)
#define EMILHGPLJHC___C__ADDPROGRESSLOG_B__90_5_OFFSET UNITYSDK_OFFSET(0x15543C70)
#define EMILHGPLJHC___C__ADDPROGRESSLOG_B__90_6_OFFSET UNITYSDK_OFFSET(0x15543CB0)

	class EMILHGPLJHC___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__90_5()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ACB0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ACB8);
		}

		static ::System::Action** StaticGet___9__90_6()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ACC0);
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
