#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNKPAIAPPHP;
class PDCLCPAKHAI;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BAGPGBMNCGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15BE19A0)
#define BAGPGBMNCGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15BE19E0)
#define BAGPGBMNCGL___C___FETCHUSABLEBUFFITEM_B__14_0_OFFSET UNITYSDK_OFFSET(0x15BE1A40)
#define BAGPGBMNCGL___C___FETCHUSABLEDAMAGEITEM_B__13_0_OFFSET UNITYSDK_OFFSET(0x15BE19F0)

	class BAGPGBMNCGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69670);
		}

		static ::System::Func_2<::PDCLCPAKHAI*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::PDCLCPAKHAI*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69678);
		}

		static ::System::Func_2<::NNKPAIAPPHP*, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::NNKPAIAPPHP*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAGPGBMNCGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGPGBMNCGL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __FetchUsableDamageItem_b__13_0(::NNKPAIAPPHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NNKPAIAPPHP*))((::PBYTE)hIl2Cpp + BAGPGBMNCGL___C___FETCHUSABLEDAMAGEITEM_B__13_0_OFFSET))(this, a1);
		}

		::System::Boolean __FetchUsableBuffItem_b__14_0(::PDCLCPAKHAI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PDCLCPAKHAI*))((::PBYTE)hIl2Cpp + BAGPGBMNCGL___C___FETCHUSABLEBUFFITEM_B__14_0_OFFSET))(this, a1);
		}

	};
