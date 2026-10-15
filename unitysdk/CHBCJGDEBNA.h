#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class Action; }

#define CHBCJGDEBNA_CTOR_OFFSET UNITYSDK_OFFSET(0xCC90610)
#define CHBCJGDEBNA_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0xCC90670)

	class CHBCJGDEBNA : public ::System::Exception
	{
	public:
		::System::Action* EAOILKHLOIP; // 0x88
		::System::Void _ctor(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CHBCJGDEBNA_CTOR_OFFSET))(this, a1);
		}

		::System::Void MBABPIHGAJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBCJGDEBNA_MBABPIHGAJN_OFFSET))(this);
		}

	};
