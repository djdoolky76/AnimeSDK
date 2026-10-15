#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKLDDAAECLN;
namespace System { class Object; }

#define HKLDDAAECLN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B4A90)
#define HKLDDAAECLN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B4AD0)
#define HKLDDAAECLN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5B4AE0)

	class HKLDDAAECLN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKLDDAAECLN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLDDAAECLN___C_CTOR_OFFSET))(this);
		}

		::HKLDDAAECLN* __cctor_b__28_0()
		{
			return ((::HKLDDAAECLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLDDAAECLN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
