#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GDBADFKOFFG_KMHHNONEDOH;
class GIGFDLPMNND;

#define GDBADFKOFFG_FMEMGDNHIFK_ELBBFPMEJDA_OFFSET UNITYSDK_OFFSET(0xBB82730)
#define GDBADFKOFFG_FMEMGDNHIFK__CTOR_OFFSET UNITYSDK_OFFSET(0xBB82720)

inline static constexpr unsigned int GDBADFKOFFG_FMEMGDNHIFK_TypeDefinitionIndex = 74138;

class GDBADFKOFFG_FMEMGDNHIFK : public ::System::Object
{
public:
	::GIGFDLPMNND* LBNKPGEEPJH; // 0x10
	::GDBADFKOFFG_KMHHNONEDOH* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_FMEMGDNHIFK__CTOR_OFFSET))(this);
	}

	::System::Void ELBBFPMEJDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_FMEMGDNHIFK_ELBBFPMEJDA_OFFSET))(this);
	}
};
