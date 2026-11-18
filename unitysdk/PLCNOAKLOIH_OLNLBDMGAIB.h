#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define PLCNOAKLOIH_OLNLBDMGAIB_EICDBBPDNFM_OFFSET UNITYSDK_OFFSET(0x1D630440)
#define PLCNOAKLOIH_OLNLBDMGAIB_JGDIFNGKAGA_OFFSET UNITYSDK_OFFSET(0x1D630430)
#define PLCNOAKLOIH_OLNLBDMGAIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D630420)

inline static constexpr unsigned int PLCNOAKLOIH_OLNLBDMGAIB_TypeDefinitionIndex = 89236;

class PLCNOAKLOIH_OLNLBDMGAIB : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* OIPJFHJAKLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_OLNLBDMGAIB__CTOR_OFFSET))(this);
	}

	::System::Void JGDIFNGKAGA(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_OLNLBDMGAIB_JGDIFNGKAGA_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void EICDBBPDNFM(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_OLNLBDMGAIB_EICDBBPDNFM_OFFSET))(this, BHDNBGLCNOM);
	}
};
