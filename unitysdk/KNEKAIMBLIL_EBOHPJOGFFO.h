#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NKHOMMGFIFO;

#define KNEKAIMBLIL_EBOHPJOGFFO_OAPOCPBKOCE_OFFSET UNITYSDK_OFFSET(0x16820D30)
#define KNEKAIMBLIL_EBOHPJOGFFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16820D20)

inline static constexpr unsigned int KNEKAIMBLIL_EBOHPJOGFFO_TypeDefinitionIndex = 80716;

class KNEKAIMBLIL_EBOHPJOGFFO : public ::System::Object
{
public:
	::NKHOMMGFIFO* MIJIHGJLCPC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEKAIMBLIL_EBOHPJOGFFO__CTOR_OFFSET))(this);
	}

	::System::Void OAPOCPBKOCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEKAIMBLIL_EBOHPJOGFFO_OAPOCPBKOCE_OFFSET))(this);
	}
};
