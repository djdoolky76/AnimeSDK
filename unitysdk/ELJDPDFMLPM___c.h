#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELJDPDFMLPM;
namespace System { class Object; }

#define ELJDPDFMLPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A68C0)
#define ELJDPDFMLPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A6900)
#define ELJDPDFMLPM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2A6910)

inline static constexpr unsigned int ELJDPDFMLPM___c_TypeDefinitionIndex = 33114;

	class ELJDPDFMLPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51AA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELJDPDFMLPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDPDFMLPM___C_CTOR_OFFSET))(this);
		}

		::ELJDPDFMLPM* __cctor_b__23_0()
		{
			return ((::ELJDPDFMLPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDPDFMLPM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
