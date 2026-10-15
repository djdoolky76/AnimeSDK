#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLOPGLDOPHB.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OLOPGLDOPHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC3F6E0)
#define OLOPGLDOPHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC3F720)
#define OLOPGLDOPHB___C__COMBINE_B__6_0_OFFSET UNITYSDK_OFFSET(0x1EC3F730)
#define OLOPGLDOPHB___C__GETDIRECTORIES_B__20_0_OFFSET UNITYSDK_OFFSET(0x1EC3F810)
#define OLOPGLDOPHB___C__GETFILES_B__19_0_OFFSET UNITYSDK_OFFSET(0x1EC3F780)

inline static constexpr unsigned int OLOPGLDOPHB___c_TypeDefinitionIndex = 35294;

	class OLOPGLDOPHB___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::OLOPGLDOPHB>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::System::String*, ::OLOPGLDOPHB>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44580);
		}

		static ::System::Func_2<::System::String*, ::OLOPGLDOPHB>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::System::String*, ::OLOPGLDOPHB>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44588);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44590);
		}

		static ::System::Func_2<::OLOPGLDOPHB, ::System::String*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::OLOPGLDOPHB, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44598);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLOPGLDOPHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB___C_CTOR_OFFSET))(this);
		}

		::System::String* _Combine_b__6_0(::OLOPGLDOPHB a1)
		{
			return ((::System::String*(*)(::PVOID, ::OLOPGLDOPHB))((::PBYTE)hIl2Cpp + OLOPGLDOPHB___C__COMBINE_B__6_0_OFFSET))(this, a1);
		}

		::OLOPGLDOPHB _GetFiles_b__19_0(::System::String* a1)
		{
			return ((::OLOPGLDOPHB(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OLOPGLDOPHB___C__GETFILES_B__19_0_OFFSET))(this, a1);
		}

		::OLOPGLDOPHB _GetDirectories_b__20_0(::System::String* a1)
		{
			return ((::OLOPGLDOPHB(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OLOPGLDOPHB___C__GETDIRECTORIES_B__20_0_OFFSET))(this, a1);
		}

	};
