#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMGFDBOANJO;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HKAJMEMCBLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D3BDF0)
#define HKAJMEMCBLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15D3BE30)
#define HKAJMEMCBLC___C__GET_ISCOPYLAST_B__91_0_OFFSET UNITYSDK_OFFSET(0x15D3BF30)
#define HKAJMEMCBLC___C__GET_ISIMPORTANT_B__93_0_OFFSET UNITYSDK_OFFSET(0x15D3BF80)
#define HKAJMEMCBLC___C__GET_ISPROJECTION_B__89_0_OFFSET UNITYSDK_OFFSET(0x15D3BEE0)
#define HKAJMEMCBLC___C__GET_ISSTACKABLE_B__87_0_OFFSET UNITYSDK_OFFSET(0x15D3BE90)
#define HKAJMEMCBLC___C__GET_ISUNPLAYABLE_B__85_0_OFFSET UNITYSDK_OFFSET(0x15D3BE40)

inline static constexpr unsigned int HKAJMEMCBLC___c_TypeDefinitionIndex = 81080;

	class HKAJMEMCBLC___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::KMGFDBOANJO*, ::System::Boolean>** StaticGet___9__89_0()
		{
			return (::System::Func_2<::KMGFDBOANJO*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22460);
		}

		static ::System::Func_2<::KMGFDBOANJO*, ::System::Boolean>** StaticGet___9__85_0()
		{
			return (::System::Func_2<::KMGFDBOANJO*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22468);
		}

		static ::System::Func_2<::KMGFDBOANJO*, ::System::Boolean>** StaticGet___9__87_0()
		{
			return (::System::Func_2<::KMGFDBOANJO*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22470);
		}

		static ::System::Func_2<::KMGFDBOANJO*, ::System::Boolean>** StaticGet___9__93_0()
		{
			return (::System::Func_2<::KMGFDBOANJO*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22478);
		}

		static ::System::Func_2<::KMGFDBOANJO*, ::System::Boolean>** StaticGet___9__91_0()
		{
			return (::System::Func_2<::KMGFDBOANJO*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22480);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22488);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKAJMEMCBLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsUnplayable_b__85_0(::KMGFDBOANJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMGFDBOANJO*))((::PBYTE)hIl2Cpp + HKAJMEMCBLC___C__GET_ISUNPLAYABLE_B__85_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsStackable_b__87_0(::KMGFDBOANJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMGFDBOANJO*))((::PBYTE)hIl2Cpp + HKAJMEMCBLC___C__GET_ISSTACKABLE_B__87_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsProjection_b__89_0(::KMGFDBOANJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMGFDBOANJO*))((::PBYTE)hIl2Cpp + HKAJMEMCBLC___C__GET_ISPROJECTION_B__89_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsCopyLast_b__91_0(::KMGFDBOANJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMGFDBOANJO*))((::PBYTE)hIl2Cpp + HKAJMEMCBLC___C__GET_ISCOPYLAST_B__91_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsImportant_b__93_0(::KMGFDBOANJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMGFDBOANJO*))((::PBYTE)hIl2Cpp + HKAJMEMCBLC___C__GET_ISIMPORTANT_B__93_0_OFFSET))(this, a1);
		}

	};
