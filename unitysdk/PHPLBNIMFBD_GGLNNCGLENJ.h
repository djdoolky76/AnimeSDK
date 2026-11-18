#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODLBEJANMEG;
class PHPLBNIMFBD;

#define PHPLBNIMFBD_GGLNNCGLENJ_PKMALIBMJHM_OFFSET UNITYSDK_OFFSET(0x137146A0)
#define PHPLBNIMFBD_GGLNNCGLENJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13714690)

inline static constexpr unsigned int PHPLBNIMFBD_GGLNNCGLENJ_TypeDefinitionIndex = 53131;

class PHPLBNIMFBD_GGLNNCGLENJ : public ::System::Object
{
public:
	::PHPLBNIMFBD* KLHPEBKNIFB; // 0x10
	::ODLBEJANMEG* NMILJILPHHH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPLBNIMFBD_GGLNNCGLENJ__CTOR_OFFSET))(this);
	}

	::System::Void PKMALIBMJHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPLBNIMFBD_GGLNNCGLENJ_PKMALIBMJHM_OFFSET))(this);
	}
};
