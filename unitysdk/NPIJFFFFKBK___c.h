#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPIJFFFFKBK;
namespace System { class Object; }

#define NPIJFFFFKBK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB9DAA0)
#define NPIJFFFFKBK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB9DAD0)
#define NPIJFFFFKBK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EB9DAE0)

	class NPIJFFFFKBK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEAC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPIJFFFFKBK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIJFFFFKBK___C_CTOR_OFFSET))(this);
		}

		::NPIJFFFFKBK* __cctor_b__38_0()
		{
			return ((::NPIJFFFFKBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIJFFFFKBK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
