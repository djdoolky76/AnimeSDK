#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEPLHEMIEID__CTOR_OFFSET UNITYSDK_OFFSET(0x1313F460)

inline static constexpr unsigned int NEPLHEMIEID_TypeDefinitionIndex = 51617;

class NEPLHEMIEID : public ::System::Object
{
public:
	::System::Int32 BFBMHJJHCIJ; // 0x10
	::System::Int32 MEBHJEEFGLP; // 0x14

	::System::Void _ctor(::System::Int32 MEBHJEEFGLP, ::System::Int32 BFBMHJJHCIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEPLHEMIEID__CTOR_OFFSET))(this, MEBHJEEFGLP, BFBMHJJHCIJ);
	}
};
