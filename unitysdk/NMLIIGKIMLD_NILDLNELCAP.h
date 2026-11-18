#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;

#define NMLIIGKIMLD_NILDLNELCAP_JBMKEGHNPMH_OFFSET UNITYSDK_OFFSET(0xE7691F0)
#define NMLIIGKIMLD_NILDLNELCAP__CTOR_OFFSET UNITYSDK_OFFSET(0xE7691E0)

inline static constexpr unsigned int NMLIIGKIMLD_NILDLNELCAP_TypeDefinitionIndex = 57960;

class NMLIIGKIMLD_NILDLNELCAP : public ::System::Object
{
public:
	::FMHDMLBDIJC* HODAIDNDKHD; // 0x10
	::System::Int32 IHIHIAIHJLG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLIIGKIMLD_NILDLNELCAP__CTOR_OFFSET))(this);
	}

	::System::Void JBMKEGHNPMH(::System::Int32 MOPKGJMEFHE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NMLIIGKIMLD_NILDLNELCAP_JBMKEGHNPMH_OFFSET))(this, MOPKGJMEFHE);
	}
};
