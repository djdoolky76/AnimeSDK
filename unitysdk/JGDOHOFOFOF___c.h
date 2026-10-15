#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGDOHOFOFOF;
namespace System { class Object; }

#define JGDOHOFOFOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E738B20)
#define JGDOHOFOFOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E738B50)
#define JGDOHOFOFOF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E738B60)

	class JGDOHOFOFOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGDOHOFOFOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDOHOFOFOF___C_CTOR_OFFSET))(this);
		}

		::JGDOHOFOFOF* __cctor_b__38_0()
		{
			return ((::JGDOHOFOFOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGDOHOFOFOF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
