#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALBMDPOIIDL;
namespace System { class Object; }

#define ALBMDPOIIDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D37E0)
#define ALBMDPOIIDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D3820)
#define ALBMDPOIIDL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3D3830)

	class ALBMDPOIIDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALBMDPOIIDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBMDPOIIDL___C_CTOR_OFFSET))(this);
		}

		::ALBMDPOIIDL* __cctor_b__23_0()
		{
			return ((::ALBMDPOIIDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBMDPOIIDL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
