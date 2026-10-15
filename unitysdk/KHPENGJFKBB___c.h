#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLCJBFLKOJD;
class LBKMCGDMNJO;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KHPENGJFKBB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB40F350)
#define KHPENGJFKBB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB40F390)
#define KHPENGJFKBB___C___CTOR_B__8_0_OFFSET UNITYSDK_OFFSET(0xB40F3A0)
#define KHPENGJFKBB___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0xB40F3B0)

inline static constexpr unsigned int KHPENGJFKBB___c_TypeDefinitionIndex = 81462;

	class KHPENGJFKBB___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::JLCJBFLKOJD*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::JLCJBFLKOJD*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B390);
		}

		static ::System::Func_2<::LBKMCGDMNJO*, ::JLCJBFLKOJD*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::LBKMCGDMNJO*, ::JLCJBFLKOJD*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B398);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B3A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHPENGJFKBB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPENGJFKBB___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__8_0(::JLCJBFLKOJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLCJBFLKOJD*))((::PBYTE)hIl2Cpp + KHPENGJFKBB___C___CTOR_B__8_0_OFFSET))(this, a1);
		}

		::JLCJBFLKOJD* __ctor_b__9_0(::LBKMCGDMNJO* a1)
		{
			return ((::JLCJBFLKOJD*(*)(::PVOID, ::LBKMCGDMNJO*))((::PBYTE)hIl2Cpp + KHPENGJFKBB___C___CTOR_B__9_0_OFFSET))(this, a1);
		}

	};
