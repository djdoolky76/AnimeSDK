#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGBKODNDKEN;
namespace System { class Object; }

#define OGBKODNDKEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE4F710)
#define OGBKODNDKEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4F740)
#define OGBKODNDKEN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE4F750)

	class OGBKODNDKEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGBKODNDKEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBKODNDKEN___C_CTOR_OFFSET))(this);
		}

		::OGBKODNDKEN* __cctor_b__23_0()
		{
			return ((::OGBKODNDKEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBKODNDKEN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
