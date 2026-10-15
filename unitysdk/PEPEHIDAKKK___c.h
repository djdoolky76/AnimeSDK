#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEPEHIDAKKK;
namespace System { class Object; }

#define PEPEHIDAKKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF203F0)
#define PEPEHIDAKKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF20430)
#define PEPEHIDAKKK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF20440)

	class PEPEHIDAKKK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AA50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEPEHIDAKKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPEHIDAKKK___C_CTOR_OFFSET))(this);
		}

		::PEPEHIDAKKK* __cctor_b__28_0()
		{
			return ((::PEPEHIDAKKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPEHIDAKKK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
