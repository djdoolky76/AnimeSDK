#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GDBADFKOFFG_HFPIBHFHPLM_OPBJJLLOGHG_OFFSET UNITYSDK_OFFSET(0x179D3040)
#define GDBADFKOFFG_HFPIBHFHPLM__CTOR_OFFSET UNITYSDK_OFFSET(0x179D3030)

inline static constexpr unsigned int GDBADFKOFFG_HFPIBHFHPLM_TypeDefinitionIndex = 74137;

class GDBADFKOFFG_HFPIBHFHPLM : public ::System::Object
{
public:
	::System::UInt32 BKLGNCBNEGM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_HFPIBHFHPLM__CTOR_OFFSET))(this);
	}

	::System::Boolean OPBJJLLOGHG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_HFPIBHFHPLM_OPBJJLLOGHG_OFFSET))(this);
	}
};
