#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IODAFIBPAGM;
namespace System { class Object; }

#define IODAFIBPAGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6CB6C0)
#define IODAFIBPAGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CB6F0)
#define IODAFIBPAGM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E6CB700)

	class IODAFIBPAGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IODAFIBPAGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODAFIBPAGM___C_CTOR_OFFSET))(this);
		}

		::IODAFIBPAGM* __cctor_b__33_0()
		{
			return ((::IODAFIBPAGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IODAFIBPAGM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
