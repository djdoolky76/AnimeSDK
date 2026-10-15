#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAAOKALNHIO;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PCOMPBCHHKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7EC560)
#define PCOMPBCHHKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7EC5A0)
#define PCOMPBCHHKC___C__GETDELETEENTITYLISTSTRING_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C7EC5D0)
#define PCOMPBCHHKC___C__GETUPDATEENTITYLISTSTRING_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C7EC5B0)

	class PCOMPBCHHKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BC20);
		}

		static ::System::Func_2<::LAAOKALNHIO*, ::System::Int32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::LAAOKALNHIO*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BC28);
		}

		static ::System::Func_2<::LAAOKALNHIO*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::LAAOKALNHIO*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BC30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCOMPBCHHKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOMPBCHHKC___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetUpdateEntityListString_b__4_0(::LAAOKALNHIO* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::LAAOKALNHIO*))((::PBYTE)hIl2Cpp + PCOMPBCHHKC___C__GETUPDATEENTITYLISTSTRING_B__4_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetDeleteEntityListString_b__5_0(::LAAOKALNHIO* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::LAAOKALNHIO*))((::PBYTE)hIl2Cpp + PCOMPBCHHKC___C__GETDELETEENTITYLISTSTRING_B__5_0_OFFSET))(this, a1);
		}

	};
