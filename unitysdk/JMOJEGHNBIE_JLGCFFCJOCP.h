#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMOJEGHNBIE_JLGCFFCJOCP_DDECECJKGEE.h"
#include "unitysdk/System/Object.h"

#define JMOJEGHNBIE_JLGCFFCJOCP_MDHPPJGDMBC_OFFSET UNITYSDK_OFFSET(0x1874B3A0)
#define JMOJEGHNBIE_JLGCFFCJOCP_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1874B3F0)
#define JMOJEGHNBIE_JLGCFFCJOCP_OHEEKHADOCM_OFFSET UNITYSDK_OFFSET(0x1874B350)
#define JMOJEGHNBIE_JLGCFFCJOCP__CTOR_OFFSET UNITYSDK_OFFSET(0x1874B340)

inline static constexpr unsigned int JMOJEGHNBIE_JLGCFFCJOCP_TypeDefinitionIndex = 39599;

class JMOJEGHNBIE_JLGCFFCJOCP : public ::System::Object
{
public:
	::JMOJEGHNBIE_JLGCFFCJOCP_DDECECJKGEE HGEFFCBEEPN; // 0x10
	::System::Single HHPDMGLNNFC; // 0x14
	::System::Single CCDNKBONPLB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOJEGHNBIE_JLGCFFCJOCP__CTOR_OFFSET))(this);
	}

	::System::Boolean OHEEKHADOCM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOJEGHNBIE_JLGCFFCJOCP_OHEEKHADOCM_OFFSET))(this);
	}

	::System::Void MDHPPJGDMBC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOJEGHNBIE_JLGCFFCJOCP_MDHPPJGDMBC_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOJEGHNBIE_JLGCFFCJOCP_NPOLNFDBOOD_OFFSET))(this);
	}
};
