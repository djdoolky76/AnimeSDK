#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDMNIHIFDFG;
namespace System { class Object; }

#define LDMNIHIFDFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8FDA40)
#define LDMNIHIFDFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8FDA80)
#define LDMNIHIFDFG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8FDA90)

	class LDMNIHIFDFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDMNIHIFDFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMNIHIFDFG___C_CTOR_OFFSET))(this);
		}

		::LDMNIHIFDFG* __cctor_b__23_0()
		{
			return ((::LDMNIHIFDFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMNIHIFDFG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
