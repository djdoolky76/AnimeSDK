#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPDILLMEAKN;
namespace System { class Object; }

#define DPDILLMEAKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E20C300)
#define DPDILLMEAKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E20C340)
#define DPDILLMEAKN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E20C350)

	class DPDILLMEAKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPDILLMEAKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDILLMEAKN___C_CTOR_OFFSET))(this);
		}

		::DPDILLMEAKN* __cctor_b__28_0()
		{
			return ((::DPDILLMEAKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDILLMEAKN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
