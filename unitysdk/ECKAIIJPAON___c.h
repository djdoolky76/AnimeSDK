#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECKAIIJPAON;
namespace System { class Object; }

#define ECKAIIJPAON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2542A0)
#define ECKAIIJPAON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2542E0)
#define ECKAIIJPAON___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2542F0)

	class ECKAIIJPAON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E9F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECKAIIJPAON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKAIIJPAON___C_CTOR_OFFSET))(this);
		}

		::ECKAIIJPAON* __cctor_b__33_0()
		{
			return ((::ECKAIIJPAON*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKAIIJPAON___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
