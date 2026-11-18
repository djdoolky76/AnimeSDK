#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKGIOGDGANK;

#define AKGIOGDGANK_PCFFNLOMNNE_HDICKPEOHNK_OFFSET UNITYSDK_OFFSET(0x155059E0)
#define AKGIOGDGANK_PCFFNLOMNNE_IDMMGMPCOJI_OFFSET UNITYSDK_OFFSET(0x155058E0)
#define AKGIOGDGANK_PCFFNLOMNNE__CTOR_OFFSET UNITYSDK_OFFSET(0x155057D0)

inline static constexpr unsigned int AKGIOGDGANK_PCFFNLOMNNE_TypeDefinitionIndex = 52155;

class AKGIOGDGANK_PCFFNLOMNNE : public ::System::Object
{
public:
	::AKGIOGDGANK* KLHPEBKNIFB; // 0x10
	::System::Single IOJMEHCNGJA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGIOGDGANK_PCFFNLOMNNE__CTOR_OFFSET))(this);
	}

	::System::Void IDMMGMPCOJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGIOGDGANK_PCFFNLOMNNE_IDMMGMPCOJI_OFFSET))(this);
	}

	::System::Void HDICKPEOHNK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGIOGDGANK_PCFFNLOMNNE_HDICKPEOHNK_OFFSET))(this);
	}
};
