#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJHPILBBHDI;
namespace System { class Object; }

#define IJHPILBBHDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E694AE0)
#define IJHPILBBHDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E694B10)
#define IJHPILBBHDI___C___CCTOR_B__29_0_OFFSET UNITYSDK_OFFSET(0x1E694B20)

	class IJHPILBBHDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJHPILBBHDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHPILBBHDI___C_CTOR_OFFSET))(this);
		}

		::IJHPILBBHDI* __cctor_b__29_0()
		{
			return ((::IJHPILBBHDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHPILBBHDI___C___CCTOR_B__29_0_OFFSET))(this);
		}

	};
