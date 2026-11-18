#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGFGJIIIBMD.h"
#include "unitysdk/GMKJPFMGGHJ.h"
#include "unitysdk/System/Object.h"

class PNLJLPNEDHF;
namespace System { class String; }

#define BPHAHGICCGN_PMKIBMGAHAP_AMGBGFDJNFG_OFFSET UNITYSDK_OFFSET(0xFF97920)
#define BPHAHGICCGN_PMKIBMGAHAP_DHDIOCOGIDP_OFFSET UNITYSDK_OFFSET(0xFF97D50)
#define BPHAHGICCGN_PMKIBMGAHAP_HFLKHCDCCKC_OFFSET UNITYSDK_OFFSET(0xFF97D70)
#define BPHAHGICCGN_PMKIBMGAHAP__CTOR_OFFSET UNITYSDK_OFFSET(0xFF978D0)

inline static constexpr unsigned int BPHAHGICCGN_PMKIBMGAHAP_TypeDefinitionIndex = 65145;

class BPHAHGICCGN_PMKIBMGAHAP : public ::System::Object
{
public:
	::PNLJLPNEDHF* AHMFPFACACD; // 0x10
	::GMKJPFMGGHJ JMDGBBOJODJ; // 0x18

	::System::Void _ctor(::GMKJPFMGGHJ NHHPNPHHMBH, ::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::GMKJPFMGGHJ, ::System::Int32))((::PBYTE)hIl2Cpp + BPHAHGICCGN_PMKIBMGAHAP__CTOR_OFFSET))(this, NHHPNPHHMBH, MGMDLMBEDJF);
	}

	::System::Boolean AMGBGFDJNFG(::System::Boolean IOAFANLFAEB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPHAHGICCGN_PMKIBMGAHAP_AMGBGFDJNFG_OFFSET))(this, IOAFANLFAEB);
	}

	::BGFGJIIIBMD DHDIOCOGIDP()
	{
		return ((::BGFGJIIIBMD(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHAHGICCGN_PMKIBMGAHAP_DHDIOCOGIDP_OFFSET))(this);
	}

	::System::String* HFLKHCDCCKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHAHGICCGN_PMKIBMGAHAP_HFLKHCDCCKC_OFFSET))(this);
	}
};
