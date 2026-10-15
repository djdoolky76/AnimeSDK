#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGNGCOFKPPG;
namespace System { class Object; }

#define OGNGCOFKPPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE59AC0)
#define OGNGCOFKPPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE59AF0)
#define OGNGCOFKPPG___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1DE59B00)

	class OGNGCOFKPPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGNGCOFKPPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNGCOFKPPG___C_CTOR_OFFSET))(this);
		}

		::OGNGCOFKPPG* __cctor_b__58_0()
		{
			return ((::OGNGCOFKPPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNGCOFKPPG___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
