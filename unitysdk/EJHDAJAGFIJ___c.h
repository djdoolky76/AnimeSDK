#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJHDAJAGFIJ;
namespace System { class Object; }

#define EJHDAJAGFIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B6B90)
#define EJHDAJAGFIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B6BD0)
#define EJHDAJAGFIJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2B6BE0)

	class EJHDAJAGFIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B7B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJHDAJAGFIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ___C_CTOR_OFFSET))(this);
		}

		::EJHDAJAGFIJ* __cctor_b__28_0()
		{
			return ((::EJHDAJAGFIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHDAJAGFIJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
