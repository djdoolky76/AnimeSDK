#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HIIBLFOIBDL_ENPAKJJBODE;

#define HIIBLFOIBDL_KMHFECLLINL_FICBCMIAPGG_OFFSET UNITYSDK_OFFSET(0x146FD540)
#define HIIBLFOIBDL_KMHFECLLINL__CTOR_OFFSET UNITYSDK_OFFSET(0x146FD530)

inline static constexpr unsigned int HIIBLFOIBDL_KMHFECLLINL_TypeDefinitionIndex = 71531;

class HIIBLFOIBDL_KMHFECLLINL : public ::System::Object
{
public:
	::HIIBLFOIBDL_ENPAKJJBODE* EEMOEMFLABI; // 0x10
	::System::Int32 HJOOOLAOICP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIBLFOIBDL_KMHFECLLINL__CTOR_OFFSET))(this);
	}

	::System::Void FICBCMIAPGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIBLFOIBDL_KMHFECLLINL_FICBCMIAPGG_OFFSET))(this);
	}
};
