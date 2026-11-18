#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OJCICCFFAJH_HENCMINKDID_DBOCKALICGP_OFFSET UNITYSDK_OFFSET(0xFB90C10)
#define OJCICCFFAJH_HENCMINKDID__CTOR_OFFSET UNITYSDK_OFFSET(0xFB90C00)

inline static constexpr unsigned int OJCICCFFAJH_HENCMINKDID_TypeDefinitionIndex = 80196;

class OJCICCFFAJH_HENCMINKDID : public ::System::Object
{
public:
	::System::Int32 ALJJBJEHLDN; // 0x10
	::System::Int32 OIAOHDAOEKA; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCICCFFAJH_HENCMINKDID__CTOR_OFFSET))(this);
	}

	::System::Void DBOCKALICGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCICCFFAJH_HENCMINKDID_DBOCKALICGP_OFFSET))(this);
	}
};
