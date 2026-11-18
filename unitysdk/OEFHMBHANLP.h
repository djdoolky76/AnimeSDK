#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOONMNPCCNF.h"

#define OEFHMBHANLP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C05820)

inline static constexpr unsigned int OEFHMBHANLP_TypeDefinitionIndex = 68116;

class OEFHMBHANLP : public ::IOONMNPCCNF
{
public:
	::System::Single ICBBNCHKPDN; // 0x18
	::System::Int32 LOPEGINDIKN; // 0x1C
	::System::Single BJOIFCHKMKO; // 0x20
	::System::Single NCCDJLDKFGA; // 0x24
	::System::Boolean OLJMDMKLMPP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFHMBHANLP__CTOR_OFFSET))(this);
	}
};
