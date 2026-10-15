#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define XLUA_TYPEEXTENSIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x153C0050)
#define XLUA_TYPEEXTENSIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x153C0090)
#define XLUA_TYPEEXTENSIONS___C__CSHARPNAME_B__13_0_OFFSET UNITYSDK_OFFSET(0x153C00B0)
#define XLUA_TYPEEXTENSIONS___C__GETFRIENDLYNAME_B__12_0_OFFSET UNITYSDK_OFFSET(0x153C00A0)

namespace XLua
{
	class TypeExtensions___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::System::Type*, ::System::String*>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6EAC0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6EAC8);
		}

		static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::Type*, ::System::String*>**)UnitySDK::FromName("XLua", "<>c")->GetStaticField(0x6EAD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS___C_CTOR_OFFSET))(this);
		}

		::System::String* _GetFriendlyName_b__12_0(::System::Type* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS___C__GETFRIENDLYNAME_B__12_0_OFFSET))(this, a1);
		}

		::System::String* _CSharpName_b__13_0(::System::Type* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS___C__CSHARPNAME_B__13_0_OFFSET))(this, a1);
		}

	};
}
