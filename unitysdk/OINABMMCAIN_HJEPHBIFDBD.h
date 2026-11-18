#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OINABMMCAIN;
namespace System { class Action; }

#define OINABMMCAIN_HJEPHBIFDBD_AFBCJACLDLP_OFFSET UNITYSDK_OFFSET(0x11B36040)
#define OINABMMCAIN_HJEPHBIFDBD__CTOR_OFFSET UNITYSDK_OFFSET(0x11B36030)

inline static constexpr unsigned int OINABMMCAIN_HJEPHBIFDBD_TypeDefinitionIndex = 89932;

class OINABMMCAIN_HJEPHBIFDBD : public ::System::Object
{
public:
	::OINABMMCAIN* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINABMMCAIN_HJEPHBIFDBD__CTOR_OFFSET))(this);
	}

	::System::Void AFBCJACLDLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINABMMCAIN_HJEPHBIFDBD_AFBCJACLDLP_OFFSET))(this);
	}
};
