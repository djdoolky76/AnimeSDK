#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EALCECBDAIC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1721F390)
#define EALCECBDAIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1721F380)

inline static constexpr unsigned int EALCECBDAIC_TypeDefinitionIndex = 63040;

class EALCECBDAIC : public ::System::Object
{
public:
	::System::Single ANIFDMEEAGG; // 0x10
	::System::Single PFCDEGHIJMJ; // 0x14
	::System::Single IKAGIJPMAOA; // 0x18
	::System::Boolean JLAGKJPGAMH; // 0x1C
	::System::Boolean FIINOBBIEIM; // 0x1D
	::System::Boolean BJLMIPAAFML; // 0x1E
	::System::Boolean NLKCOMNHIDI; // 0x1F
	::System::Single NMOAAIFGONL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EALCECBDAIC__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EALCECBDAIC_NPOLNFDBOOD_OFFSET))(this);
	}
};
