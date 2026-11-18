#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMHIOADBIPH_GIMLIFHOCCH.h"
#include "unitysdk/System/Object.h"

#define JMHIOADBIPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1762FD00)

inline static constexpr unsigned int JMHIOADBIPH_TypeDefinitionIndex = 81742;

class JMHIOADBIPH : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* AOADDGCDELC; // 0x10
	::JMHIOADBIPH_GIMLIFHOCCH JBMAIPGKBFN; // 0x18
	::System::Boolean INBPEHDDJJA; // 0x1C
	::System::Boolean DOFCLPCLHOJ; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHIOADBIPH__CTOR_OFFSET))(this);
	}
};
