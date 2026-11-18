#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DEAKMFEBBIN;
namespace System { class Action; }

#define DEAKMFEBBIN_EEIFCEFAHEL__CTOR_OFFSET UNITYSDK_OFFSET(0x7F6DEF0)

inline static constexpr unsigned int DEAKMFEBBIN_EEIFCEFAHEL_TypeDefinitionIndex = 67714;

class DEAKMFEBBIN_EEIFCEFAHEL : public ::System::Object
{
public:
	::DEAKMFEBBIN* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAKMFEBBIN_EEIFCEFAHEL__CTOR_OFFSET))(this);
	}
};
