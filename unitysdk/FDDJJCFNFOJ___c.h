#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDDJJCFNFOJ;
namespace System { class Object; }

#define FDDJJCFNFOJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E353360)
#define FDDJJCFNFOJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3533A0)
#define FDDJJCFNFOJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3533B0)

	class FDDJJCFNFOJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B0D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDDJJCFNFOJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDJJCFNFOJ___C_CTOR_OFFSET))(this);
		}

		::FDDJJCFNFOJ* __cctor_b__23_0()
		{
			return ((::FDDJJCFNFOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDJJCFNFOJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
