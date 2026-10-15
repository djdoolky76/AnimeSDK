#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNHCNPDALBB;
class PHCMIJEDENP;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PAEKOKFPOIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBFC6DA0)
#define PAEKOKFPOIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC6DE0)
#define PAEKOKFPOIM___C__ENTERCRAFT_B__7_0_OFFSET UNITYSDK_OFFSET(0xBFC6DF0)
#define PAEKOKFPOIM___C__ENTERCRAFT_B__7_1_OFFSET UNITYSDK_OFFSET(0xBFC6E10)

	class PAEKOKFPOIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60F50);
		}

		static ::System::Func_2<::PHCMIJEDENP*, ::KNHCNPDALBB*>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::PHCMIJEDENP*, ::KNHCNPDALBB*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60F58);
		}

		static ::System::Func_2<::PHCMIJEDENP*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::PHCMIJEDENP*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAEKOKFPOIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEKOKFPOIM___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _EnterCraft_b__7_0(::PHCMIJEDENP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHCMIJEDENP*))((::PBYTE)hIl2Cpp + PAEKOKFPOIM___C__ENTERCRAFT_B__7_0_OFFSET))(this, a1);
		}

		::KNHCNPDALBB* _EnterCraft_b__7_1(::PHCMIJEDENP* a1)
		{
			return ((::KNHCNPDALBB*(*)(::PVOID, ::PHCMIJEDENP*))((::PBYTE)hIl2Cpp + PAEKOKFPOIM___C__ENTERCRAFT_B__7_1_OFFSET))(this, a1);
		}

	};
