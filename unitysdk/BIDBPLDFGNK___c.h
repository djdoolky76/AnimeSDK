#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIDBPLDFGNK;
namespace System { class Object; }

#define BIDBPLDFGNK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE00FF0)
#define BIDBPLDFGNK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE01030)
#define BIDBPLDFGNK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE01040)

	class BIDBPLDFGNK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x480E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIDBPLDFGNK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDBPLDFGNK___C_CTOR_OFFSET))(this);
		}

		::BIDBPLDFGNK* __cctor_b__23_0()
		{
			return ((::BIDBPLDFGNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDBPLDFGNK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
