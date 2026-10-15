#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFLBAIOGIMO.h"

#define MHEEJBJHLOB_CTOR_OFFSET UNITYSDK_OFFSET(0xB933AF0)
#define MHEEJBJHLOB_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0xB933A70)

	class MHEEJBJHLOB : public ::OFLBAIOGIMO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEEJBJHLOB_CTOR_OFFSET))(this);
		}

		::System::Void MBABPIHGAJN(::System::Int64 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + MHEEJBJHLOB_MBABPIHGAJN_OFFSET))(this, a1, a2);
		}

	};
