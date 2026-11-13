#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPMLHDINLFL;
class NIMHLHECACH;

#define FPMLHDINLFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B84F410)
#define FPMLHDINLFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B84F340)
#define FPMLHDINLFL_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x1B84F2C0)
#define FPMLHDINLFL_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0x1B84F350)

inline static constexpr unsigned int FPMLHDINLFL_TypeDefinitionIndex = 77598;

	class FPMLHDINLFL : public ::System::Object
	{
	public:
		static ::FPMLHDINLFL** StaticGet_EMLNOINPICJ()
		{
			return (::FPMLHDINLFL**)UnitySDK::FromName("", "FPMLHDINLFL")->GetStaticField(0x58450);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMLHDINLFL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPMLHDINLFL_CCTOR_OFFSET))();
		}

		static ::FPMLHDINLFL* GGBLHEHJBDO()
		{
			return ((::FPMLHDINLFL*(*)())((::PBYTE)hIl2Cpp + FPMLHDINLFL_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void MBABPIHGAJN(::NIMHLHECACH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIMHLHECACH*))((::PBYTE)hIl2Cpp + FPMLHDINLFL_MBABPIHGAJN_OFFSET))(this, a1);
		}

	};
