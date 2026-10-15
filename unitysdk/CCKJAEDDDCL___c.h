#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCKJAEDDDCL;
namespace System { class Object; }

#define CCKJAEDDDCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0775A0)
#define CCKJAEDDDCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0775D0)
#define CCKJAEDDDCL___C___CCTOR_B__40_0_OFFSET UNITYSDK_OFFSET(0x1E0775E0)

	class CCKJAEDDDCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCKJAEDDDCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKJAEDDDCL___C_CTOR_OFFSET))(this);
		}

		::CCKJAEDDDCL* __cctor_b__40_0()
		{
			return ((::CCKJAEDDDCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKJAEDDDCL___C___CCTOR_B__40_0_OFFSET))(this);
		}

	};
