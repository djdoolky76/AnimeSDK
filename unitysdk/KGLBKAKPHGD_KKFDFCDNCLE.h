#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMGJDGKABGL.h"
#include "unitysdk/System/Object.h"

#define KGLBKAKPHGD_KKFDFCDNCLE__CTOR_OFFSET UNITYSDK_OFFSET(0x13C5E3B0)

inline static constexpr unsigned int KGLBKAKPHGD_KKFDFCDNCLE_TypeDefinitionIndex = 62901;

class KGLBKAKPHGD_KKFDFCDNCLE : public ::System::Object
{
public:
	::System::Boolean CABOHALIHCH; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 DNGBOIPBJCE; // 0x14
	::KMGJDGKABGL JJPEDAMOOLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGLBKAKPHGD_KKFDFCDNCLE__CTOR_OFFSET))(this);
	}
};
