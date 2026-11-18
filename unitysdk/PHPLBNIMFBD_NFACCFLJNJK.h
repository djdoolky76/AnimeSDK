#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;

#define PHPLBNIMFBD_NFACCFLJNJK_JBMKEGHNPMH_OFFSET UNITYSDK_OFFSET(0x1B9E65A0)
#define PHPLBNIMFBD_NFACCFLJNJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E6590)

inline static constexpr unsigned int PHPLBNIMFBD_NFACCFLJNJK_TypeDefinitionIndex = 53132;

class PHPLBNIMFBD_NFACCFLJNJK : public ::System::Object
{
public:
	::FMHDMLBDIJC* HODAIDNDKHD; // 0x10
	::System::Int32 IHIHIAIHJLG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPLBNIMFBD_NFACCFLJNJK__CTOR_OFFSET))(this);
	}

	::System::Void JBMKEGHNPMH(::System::Int32 MOPKGJMEFHE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PHPLBNIMFBD_NFACCFLJNJK_JBMKEGHNPMH_OFFSET))(this, MOPKGJMEFHE);
	}
};
