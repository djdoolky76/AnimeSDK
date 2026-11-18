#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ClientSceneObjectStateLooperConfigBase; }

#define NFEPECADMEG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x10D72770)
#define NFEPECADMEG_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x10D727F0)
#define NFEPECADMEG_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x10D72830)
#define NFEPECADMEG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x10D727B0)
#define NFEPECADMEG__CTOR_OFFSET UNITYSDK_OFFSET(0x10D72750)

inline static constexpr unsigned int NFEPECADMEG_TypeDefinitionIndex = 57748;

class NFEPECADMEG : public ::System::Object
{
public:
	::MoleMole::ClientSceneObjectStateLooperConfigBase* DFMKILICPFB; // 0x10

	::System::Void _ctor(::MoleMole::ClientSceneObjectStateLooperConfigBase* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ClientSceneObjectStateLooperConfigBase*))((::PBYTE)hIl2Cpp + NFEPECADMEG__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEPECADMEG_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEPECADMEG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean BGJPLEHEDKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEPECADMEG_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFEPECADMEG_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}
};
