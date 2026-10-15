#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHMAENLPNCF;
namespace System { class Object; }

#define DHMAENLPNCF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B8640)
#define DHMAENLPNCF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B8670)
#define DHMAENLPNCF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E1B8680)

	class DHMAENLPNCF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHMAENLPNCF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMAENLPNCF___C_CTOR_OFFSET))(this);
		}

		::DHMAENLPNCF* __cctor_b__18_0()
		{
			return ((::DHMAENLPNCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMAENLPNCF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
