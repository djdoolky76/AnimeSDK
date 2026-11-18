#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PFBPKHDLHOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD28C0)

inline static constexpr unsigned int PFBPKHDLHOF_TypeDefinitionIndex = 94072;

class PFBPKHDLHOF : public ::System::Object
{
public:
	::System::Int32 NPJFMDJNNCD; // 0x10
	::System::Int32 AMJMAPFPEBL; // 0x14
	::System::Int32 JMLCPADPPNM; // 0x18
	::System::Int32 LDMLKEGJBNK; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBPKHDLHOF__CTOR_OFFSET))(this);
	}
};
