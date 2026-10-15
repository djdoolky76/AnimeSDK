#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENILOPJOCBN;
namespace System { class Object; }

#define ENILOPJOCBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F10E0)
#define ENILOPJOCBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F1120)
#define ENILOPJOCBN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2F1130)

	class ENILOPJOCBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENILOPJOCBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENILOPJOCBN___C_CTOR_OFFSET))(this);
		}

		::ENILOPJOCBN* __cctor_b__23_0()
		{
			return ((::ENILOPJOCBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENILOPJOCBN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
