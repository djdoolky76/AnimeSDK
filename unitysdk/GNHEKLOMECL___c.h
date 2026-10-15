#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNHEKLOMECL;
namespace System { class Object; }

#define GNHEKLOMECL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E0460)
#define GNHEKLOMECL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E04A0)
#define GNHEKLOMECL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4E04B0)

	class GNHEKLOMECL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNHEKLOMECL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHEKLOMECL___C_CTOR_OFFSET))(this);
		}

		::GNHEKLOMECL* __cctor_b__28_0()
		{
			return ((::GNHEKLOMECL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHEKLOMECL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
