#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CEAOIBECHOF_IMGLEMPKDLL_KLKLIAJFAFC_OFFSET UNITYSDK_OFFSET(0x15327880)
#define CEAOIBECHOF_IMGLEMPKDLL__CTOR_OFFSET UNITYSDK_OFFSET(0x15327870)

inline static constexpr unsigned int CEAOIBECHOF_IMGLEMPKDLL_TypeDefinitionIndex = 76881;

class CEAOIBECHOF_IMGLEMPKDLL : public ::System::Object
{
public:
	::System::Int32 HJLIBJJBLKP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAOIBECHOF_IMGLEMPKDLL__CTOR_OFFSET))(this);
	}

	::System::String* KLKLIAJFAFC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAOIBECHOF_IMGLEMPKDLL_KLKLIAJFAFC_OFFSET))(this);
	}
};
