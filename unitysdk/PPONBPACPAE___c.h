#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPONBPACPAE;
namespace System { class Object; }

#define PPONBPACPAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFE2060)
#define PPONBPACPAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE20A0)
#define PPONBPACPAE___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DFE20B0)

	class PPONBPACPAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPONBPACPAE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPONBPACPAE___C_CTOR_OFFSET))(this);
		}

		::PPONBPACPAE* __cctor_b__18_0()
		{
			return ((::PPONBPACPAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPONBPACPAE___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
