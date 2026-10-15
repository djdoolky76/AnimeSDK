#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EACFPDHBLNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA307C0)
#define EACFPDHBLNC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1CA30770)

inline static constexpr unsigned int EACFPDHBLNC_TypeDefinitionIndex = 42114;

	class EACFPDHBLNC : public ::System::Object
	{
	public:
		::System::Boolean HPMEGCHGKCJ; // 0x10
		::System::Boolean HHCFPDJALFG; // 0x11
		::System::Boolean CAGCHKJHMPD; // 0x12
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACFPDHBLNC_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACFPDHBLNC_KHGIKBFDLFB_OFFSET))(this);
		}

	};
