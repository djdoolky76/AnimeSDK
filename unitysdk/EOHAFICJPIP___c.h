#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOHAFICJPIP;
namespace System { class Object; }

#define EOHAFICJPIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2FBE70)
#define EOHAFICJPIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FBEB0)
#define EOHAFICJPIP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E2FBEC0)

	class EOHAFICJPIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOHAFICJPIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHAFICJPIP___C_CTOR_OFFSET))(this);
		}

		::EOHAFICJPIP* __cctor_b__38_0()
		{
			return ((::EOHAFICJPIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHAFICJPIP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
