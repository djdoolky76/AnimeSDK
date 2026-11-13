#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COMGNGLLCFN;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ILDNJGBJGPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B58DFB0)
#define ILDNJGBJGPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B58DFF0)
#define ILDNJGBJGPF___C___HANDLESESSIONSETTLE_B__36_1_OFFSET UNITYSDK_OFFSET(0x1B58E040)
#define ILDNJGBJGPF___C___HANDLESESSIONSETTLE_B__36_2_OFFSET UNITYSDK_OFFSET(0x1B58E060)
#define ILDNJGBJGPF___C___HANDLESTAGESETTLE_B__34_0_OFFSET UNITYSDK_OFFSET(0x1B58E000)
#define ILDNJGBJGPF___C___HANDLESTAGESETTLE_B__34_1_OFFSET UNITYSDK_OFFSET(0x1B58E020)

inline static constexpr unsigned int ILDNJGBJGPF___c_TypeDefinitionIndex = 84229;

	class ILDNJGBJGPF___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::COMGNGLLCFN*, ::System::UInt32>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::COMGNGLLCFN*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A6D0);
		}

		static ::System::Func_2<::COMGNGLLCFN*, ::System::Int32>** StaticGet___9__34_1()
		{
			return (::System::Func_2<::COMGNGLLCFN*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A6D8);
		}

		static ::System::Func_2<::COMGNGLLCFN*, ::System::Int32>** StaticGet___9__36_2()
		{
			return (::System::Func_2<::COMGNGLLCFN*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A6E0);
		}

		static ::System::Func_2<::COMGNGLLCFN*, ::System::UInt32>** StaticGet___9__36_1()
		{
			return (::System::Func_2<::COMGNGLLCFN*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A6E8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A6F0);
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
