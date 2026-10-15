#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNCEOOPHIOK;
namespace System { class Object; }

#define DNCEOOPHIOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F4130)
#define DNCEOOPHIOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F4170)
#define DNCEOOPHIOK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1F4180)

	class DNCEOOPHIOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNCEOOPHIOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCEOOPHIOK___C_CTOR_OFFSET))(this);
		}

		::DNCEOOPHIOK* __cctor_b__23_0()
		{
			return ((::DNCEOOPHIOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCEOOPHIOK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
