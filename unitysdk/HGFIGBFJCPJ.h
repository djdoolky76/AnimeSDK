#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NMCCBABECPJ;

#define HGFIGBFJCPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14D276F0)

inline static constexpr unsigned int HGFIGBFJCPJ_TypeDefinitionIndex = 59069;

class HGFIGBFJCPJ : public ::System::Object
{
public:
	::NMCCBABECPJ* HFPLICABNOE; // 0x10
	::System::Int32 CHFEDONOMMG; // 0x18
	::System::Boolean IGAGINDJKCH; // 0x1C
	::System::Boolean AOLKFIKCNOH; // 0x1D
	::System::Byte _padding0[0x2];
	::System::Int32 LLFMGKBGJHP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFIGBFJCPJ__CTOR_OFFSET))(this);
	}
};
