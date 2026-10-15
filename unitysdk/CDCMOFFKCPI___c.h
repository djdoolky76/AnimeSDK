#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDCMOFFKCPI;
namespace System { class Object; }

#define CDCMOFFKCPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E081140)
#define CDCMOFFKCPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E081180)
#define CDCMOFFKCPI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E081190)

	class CDCMOFFKCPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xED20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDCMOFFKCPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCMOFFKCPI___C_CTOR_OFFSET))(this);
		}

		::CDCMOFFKCPI* __cctor_b__33_0()
		{
			return ((::CDCMOFFKCPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCMOFFKCPI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
