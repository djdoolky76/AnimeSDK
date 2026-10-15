#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEOOKOOABJD;
namespace System { class Object; }

#define EEOOKOOABJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E28AAC0)
#define EEOOKOOABJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E28AB00)
#define EEOOKOOABJD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E28AB10)

	class EEOOKOOABJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEOOKOOABJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOOKOOABJD___C_CTOR_OFFSET))(this);
		}

		::EEOOKOOABJD* __cctor_b__23_0()
		{
			return ((::EEOOKOOABJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOOKOOABJD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
