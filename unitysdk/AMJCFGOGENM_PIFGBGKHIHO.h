#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FANBKJPNEDB;

#define AMJCFGOGENM_PIFGBGKHIHO_MGMIGPNLKBP_OFFSET UNITYSDK_OFFSET(0x1422D6A0)
#define AMJCFGOGENM_PIFGBGKHIHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1422D690)

inline static constexpr unsigned int AMJCFGOGENM_PIFGBGKHIHO_TypeDefinitionIndex = 92764;

class AMJCFGOGENM_PIFGBGKHIHO : public ::System::Object
{
public:
	::System::Int32 GDAHIOLKOFA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJCFGOGENM_PIFGBGKHIHO__CTOR_OFFSET))(this);
	}

	::System::Boolean MGMIGPNLKBP(::FANBKJPNEDB* KHIGJKINJJB)
	{
		return ((::System::Boolean(*)(::PVOID, ::FANBKJPNEDB*))((::PBYTE)hIl2Cpp + AMJCFGOGENM_PIFGBGKHIHO_MGMIGPNLKBP_OFFSET))(this, KHIGJKINJJB);
	}
};
