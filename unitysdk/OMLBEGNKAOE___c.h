#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMLBEGNKAOE;
namespace System { class Object; }

#define OMLBEGNKAOE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB9BF0)
#define OMLBEGNKAOE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB9C30)
#define OMLBEGNKAOE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEB9C40)

	class OMLBEGNKAOE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B5F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMLBEGNKAOE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLBEGNKAOE___C_CTOR_OFFSET))(this);
		}

		::OMLBEGNKAOE* __cctor_b__28_0()
		{
			return ((::OMLBEGNKAOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLBEGNKAOE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
