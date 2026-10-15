#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPJONNDENCB;
namespace System { class Object; }

#define HPJONNDENCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5FB190)
#define HPJONNDENCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FB1D0)
#define HPJONNDENCB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5FB1E0)

	class HPJONNDENCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51EB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPJONNDENCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJONNDENCB___C_CTOR_OFFSET))(this);
		}

		::HPJONNDENCB* __cctor_b__28_0()
		{
			return ((::HPJONNDENCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJONNDENCB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
