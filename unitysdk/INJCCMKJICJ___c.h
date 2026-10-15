#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INJCCMKJICJ;
namespace System { class Object; }

#define INJCCMKJICJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C46F0)
#define INJCCMKJICJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C4730)
#define INJCCMKJICJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6C4740)

	class INJCCMKJICJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INJCCMKJICJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJCCMKJICJ___C_CTOR_OFFSET))(this);
		}

		::INJCCMKJICJ* __cctor_b__28_0()
		{
			return ((::INJCCMKJICJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + INJCCMKJICJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
