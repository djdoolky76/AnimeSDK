#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJMGOBMOPDL;
namespace System { class Object; }

#define MJMGOBMOPDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA4E950)
#define MJMGOBMOPDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4E980)
#define MJMGOBMOPDL___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1EA4E990)

	class MJMGOBMOPDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x560D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJMGOBMOPDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGOBMOPDL___C_CTOR_OFFSET))(this);
		}

		::MJMGOBMOPDL* __cctor_b__58_0()
		{
			return ((::MJMGOBMOPDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMGOBMOPDL___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
