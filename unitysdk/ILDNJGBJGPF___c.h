#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COMGNGLLCFN;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ILDNJGBJGPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x164AC9E0)
#define ILDNJGBJGPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x164ACA20)
#define ILDNJGBJGPF___C___HANDLESESSIONSETTLE_B__36_1_OFFSET UNITYSDK_OFFSET(0x164ACA70)
#define ILDNJGBJGPF___C___HANDLESESSIONSETTLE_B__36_2_OFFSET UNITYSDK_OFFSET(0x164ACA90)
#define ILDNJGBJGPF___C___HANDLESTAGESETTLE_B__34_0_OFFSET UNITYSDK_OFFSET(0x164ACA30)
#define ILDNJGBJGPF___C___HANDLESTAGESETTLE_B__34_1_OFFSET UNITYSDK_OFFSET(0x164ACA50)

	class ILDNJGBJGPF___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::COMGNGLLCFN*, ::System::UInt32>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::COMGNGLLCFN*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65A40);
		}

		static ::System::Func_2<::COMGNGLLCFN*, ::System::UInt32>** StaticGet___9__36_1()
		{
			return (::System::Func_2<::COMGNGLLCFN*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65A48);
		}

		static ::System::Func_2<::COMGNGLLCFN*, ::System::Int32>** StaticGet___9__34_1()
		{
			return (::System::Func_2<::COMGNGLLCFN*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65A50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65A58);
		}

		static ::System::Func_2<::COMGNGLLCFN*, ::System::Int32>** StaticGet___9__36_2()
		{
			return (::System::Func_2<::COMGNGLLCFN*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILDNJGBJGPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDNJGBJGPF___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __HandleStageSettle_b__34_0(::COMGNGLLCFN* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::COMGNGLLCFN*))((::PBYTE)hIl2Cpp + ILDNJGBJGPF___C___HANDLESTAGESETTLE_B__34_0_OFFSET))(this, a1);
		}

		::System::Int32 __HandleStageSettle_b__34_1(::COMGNGLLCFN* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::COMGNGLLCFN*))((::PBYTE)hIl2Cpp + ILDNJGBJGPF___C___HANDLESTAGESETTLE_B__34_1_OFFSET))(this, a1);
		}

		::System::UInt32 __HandleSessionSettle_b__36_1(::COMGNGLLCFN* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::COMGNGLLCFN*))((::PBYTE)hIl2Cpp + ILDNJGBJGPF___C___HANDLESESSIONSETTLE_B__36_1_OFFSET))(this, a1);
		}

		::System::Int32 __HandleSessionSettle_b__36_2(::COMGNGLLCFN* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::COMGNGLLCFN*))((::PBYTE)hIl2Cpp + ILDNJGBJGPF___C___HANDLESESSIONSETTLE_B__36_2_OFFSET))(this, a1);
		}

	};
