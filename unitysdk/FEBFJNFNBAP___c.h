#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEBFJNFNBAP;
namespace System { class Object; }

#define FEBFJNFNBAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E35FC20)
#define FEBFJNFNBAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E35FC50)
#define FEBFJNFNBAP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E35FC60)

	class FEBFJNFNBAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BFA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEBFJNFNBAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBFJNFNBAP___C_CTOR_OFFSET))(this);
		}

		::FEBFJNFNBAP* __cctor_b__33_0()
		{
			return ((::FEBFJNFNBAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBFJNFNBAP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
