#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AJJMHOGKDNF.h"

#define BMDNLGGOIIH_DDPMCBPGAOF_DODPEJCIJLB_OFFSET UNITYSDK_OFFSET(0xFF8DBD0)
#define BMDNLGGOIIH_DDPMCBPGAOF__CTOR_OFFSET UNITYSDK_OFFSET(0xFF8DBC0)

inline static constexpr unsigned int BMDNLGGOIIH_DDPMCBPGAOF_TypeDefinitionIndex = 77955;

class BMDNLGGOIIH_DDPMCBPGAOF : public ::System::Object
{
public:
	::System::Int32 AELLPLBJELA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDNLGGOIIH_DDPMCBPGAOF__CTOR_OFFSET))(this);
	}

	::System::Boolean DODPEJCIJLB(::AJJMHOGKDNF IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::AJJMHOGKDNF))((::PBYTE)hIl2Cpp + BMDNLGGOIIH_DDPMCBPGAOF_DODPEJCIJLB_OFFSET))(this, IMLLDOHDCNC);
	}
};
