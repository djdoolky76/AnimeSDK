#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

namespace System { class EventArgs; }

#define BEMFCOBCJHL_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x12D1F9E0)
#define BEMFCOBCJHL_FHNCNHCPEHE_OFFSET UNITYSDK_OFFSET(0x12D1FD10)
#define BEMFCOBCJHL_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x12D1FC80)
#define BEMFCOBCJHL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D1F840)
#define BEMFCOBCJHL__CTOR_OFFSET UNITYSDK_OFFSET(0x12D1FC40)

inline static constexpr unsigned int BEMFCOBCJHL_TypeDefinitionIndex = 58269;

class BEMFCOBCJHL : public ::BBKFNNHAKBP
{
public:
	::System::Int32 CCONDFIFHDE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMFCOBCJHL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMFCOBCJHL_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMFCOBCJHL_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMFCOBCJHL_KHAEIOINMBG_OFFSET))(this);
	}

	::System::Void FHNCNHCPEHE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BEMFCOBCJHL_FHNCNHCPEHE_OFFSET))(this, KOIBHLHLMFC);
	}
};
