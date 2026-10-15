#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPGLAPAHADP;
namespace System { class Object; }

#define MPGLAPAHADP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB7E00)
#define MPGLAPAHADP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB7E30)
#define MPGLAPAHADP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EAB7E40)

	class MPGLAPAHADP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPGLAPAHADP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGLAPAHADP___C_CTOR_OFFSET))(this);
		}

		::MPGLAPAHADP* __cctor_b__18_0()
		{
			return ((::MPGLAPAHADP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGLAPAHADP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
