#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMLOJKGMBMC;
namespace System { class Object; }

#define JMLOJKGMBMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78F780)
#define JMLOJKGMBMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E78F7C0)
#define JMLOJKGMBMC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E78F7D0)

	class JMLOJKGMBMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMLOJKGMBMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLOJKGMBMC___C_CTOR_OFFSET))(this);
		}

		::JMLOJKGMBMC* __cctor_b__23_0()
		{
			return ((::JMLOJKGMBMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMLOJKGMBMC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
