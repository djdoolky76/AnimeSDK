#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IJFKMLMENIL;
namespace System { class Action; }

#define IJFKMLMENIL_IMGICJCFOOD_HJCCGMHPMIH_OFFSET UNITYSDK_OFFSET(0x13810110)
#define IJFKMLMENIL_IMGICJCFOOD__CTOR_OFFSET UNITYSDK_OFFSET(0x13810100)

inline static constexpr unsigned int IJFKMLMENIL_IMGICJCFOOD_TypeDefinitionIndex = 49431;

class IJFKMLMENIL_IMGICJCFOOD : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::IJFKMLMENIL* KLHPEBKNIFB; // 0x18
	::System::UInt32 OFBIMIABNEP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFKMLMENIL_IMGICJCFOOD__CTOR_OFFSET))(this);
	}

	::System::Void HJCCGMHPMIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFKMLMENIL_IMGICJCFOOD_HJCCGMHPMIH_OFFSET))(this);
	}
};
