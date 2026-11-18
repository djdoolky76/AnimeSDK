#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BBANFEKKHLC;
namespace System { class String; }

#define BBANFEKKHLC_HHDALPMDDHM_BHGCDAMJGCD_OFFSET UNITYSDK_OFFSET(0x1360DFA0)
#define BBANFEKKHLC_HHDALPMDDHM_DECNGMNNIPK_OFFSET UNITYSDK_OFFSET(0x1360E2E0)
#define BBANFEKKHLC_HHDALPMDDHM_EFMCEPCBHPN_OFFSET UNITYSDK_OFFSET(0x1360E420)
#define BBANFEKKHLC_HHDALPMDDHM_LINEECGDLAP_OFFSET UNITYSDK_OFFSET(0x1360E5D0)
#define BBANFEKKHLC_HHDALPMDDHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1360DF90)

inline static constexpr unsigned int BBANFEKKHLC_HHDALPMDDHM_TypeDefinitionIndex = 73665;

class BBANFEKKHLC_HHDALPMDDHM : public ::System::Object
{
public:
	::BBANFEKKHLC* KLHPEBKNIFB; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBANFEKKHLC_HHDALPMDDHM__CTOR_OFFSET))(this);
	}

	::System::Boolean BHGCDAMJGCD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBANFEKKHLC_HHDALPMDDHM_BHGCDAMJGCD_OFFSET))(this);
	}

	::System::Void DECNGMNNIPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBANFEKKHLC_HHDALPMDDHM_DECNGMNNIPK_OFFSET))(this);
	}

	::System::Boolean EFMCEPCBHPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBANFEKKHLC_HHDALPMDDHM_EFMCEPCBHPN_OFFSET))(this);
	}

	::System::String* LINEECGDLAP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBANFEKKHLC_HHDALPMDDHM_LINEECGDLAP_OFFSET))(this);
	}
};
