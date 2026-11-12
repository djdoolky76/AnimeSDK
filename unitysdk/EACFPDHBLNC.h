#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EACFPDHBLNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBF4020)
#define EACFPDHBLNC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1DBF3FD0)

inline static constexpr unsigned int EACFPDHBLNC_TypeDefinitionIndex = 43089;

	class EACFPDHBLNC : public ::System::Object
	{
	public:
		::System::Boolean CAGCHKJHMPD; // 0x10
		::System::Boolean HHCFPDJALFG; // 0x11
		::System::Boolean HPMEGCHGKCJ; // 0x12
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACFPDHBLNC_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACFPDHBLNC_KHGIKBFDLFB_OFFSET))(this);
		}

	};
