#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAPCCLFFPNB;
namespace System { class Object; }

#define HAPCCLFFPNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E50BA30)
#define HAPCCLFFPNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E50BA70)
#define HAPCCLFFPNB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E50BA80)

	class HAPCCLFFPNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAPCCLFFPNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPCCLFFPNB___C_CTOR_OFFSET))(this);
		}

		::HAPCCLFFPNB* __cctor_b__28_0()
		{
			return ((::HAPCCLFFPNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPCCLFFPNB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
