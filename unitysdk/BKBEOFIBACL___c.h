#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define BKBEOFIBACL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7ACAE0)
#define BKBEOFIBACL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB7ACB20)
#define BKBEOFIBACL___C__CREATEITEM_B__1_0_OFFSET UNITYSDK_OFFSET(0xB7ACB30)

	class BKBEOFIBACL___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::String*>** StaticGet___9__1_0()
		{
			return (::System::Func_1<::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F640);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F648);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKBEOFIBACL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBEOFIBACL___C_CTOR_OFFSET))(this);
		}

		::System::String* _CreateItem_b__1_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBEOFIBACL___C__CREATEITEM_B__1_0_OFFSET))(this);
		}

	};
