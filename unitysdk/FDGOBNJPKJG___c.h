#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDGOBNJPKJG;
namespace System { class Object; }

#define FDGOBNJPKJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E359580)
#define FDGOBNJPKJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3595B0)
#define FDGOBNJPKJG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3595C0)

	class FDGOBNJPKJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BA40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDGOBNJPKJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGOBNJPKJG___C_CTOR_OFFSET))(this);
		}

		::FDGOBNJPKJG* __cctor_b__23_0()
		{
			return ((::FDGOBNJPKJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGOBNJPKJG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
