#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define AKLNIAEEONB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x12CD7AA0)
#define AKLNIAEEONB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x12CD7AE0)
#define AKLNIAEEONB___C__REMOVELAUCHERRECORD_B__7_0_OFFSET UNITYSDK_OFFSET(0x12CD7AF0)

	class AKLNIAEEONB___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::String*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C210);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C218);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKLNIAEEONB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLNIAEEONB___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveLaucherRecord_b__7_0(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKLNIAEEONB___C__REMOVELAUCHERRECORD_B__7_0_OFFSET))(this, a1);
		}

	};
