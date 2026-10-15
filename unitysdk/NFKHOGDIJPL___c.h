#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFKHOGDIJPL;
namespace System { class Object; }

#define NFKHOGDIJPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB04450)
#define NFKHOGDIJPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB04490)
#define NFKHOGDIJPL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB044A0)

	class NFKHOGDIJPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EA20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFKHOGDIJPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKHOGDIJPL___C_CTOR_OFFSET))(this);
		}

		::NFKHOGDIJPL* __cctor_b__33_0()
		{
			return ((::NFKHOGDIJPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKHOGDIJPL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
