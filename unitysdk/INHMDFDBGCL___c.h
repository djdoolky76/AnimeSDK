#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INHMDFDBGCL;
namespace System { class Object; }

#define INHMDFDBGCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C3360)
#define INHMDFDBGCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C33A0)
#define INHMDFDBGCL___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E6C33B0)

	class INHMDFDBGCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INHMDFDBGCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INHMDFDBGCL___C_CTOR_OFFSET))(this);
		}

		::INHMDFDBGCL* __cctor_b__43_0()
		{
			return ((::INHMDFDBGCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + INHMDFDBGCL___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
