#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCPAJELJLGE;
namespace System { class Object; }

#define OCPAJELJLGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB4ADC0)
#define OCPAJELJLGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4AE00)
#define OCPAJELJLGE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FB4AE10)

inline static constexpr unsigned int OCPAJELJLGE___c_TypeDefinitionIndex = 32894;

	class OCPAJELJLGE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDD90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCPAJELJLGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPAJELJLGE___C_CTOR_OFFSET))(this);
		}

		::OCPAJELJLGE* __cctor_b__28_0()
		{
			return ((::OCPAJELJLGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPAJELJLGE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
