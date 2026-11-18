#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMFIEIBPFID.h"
#include "unitysdk/EPDHCLCNENK.h"
#include "unitysdk/System/Object.h"

class LDHEACPNOGD;
class LOFBJGGBCFG;

#define IJMEEDEBNCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB938960)
#define IJMEEDEBNCH_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0xB938A10)
#define IJMEEDEBNCH_ICOELJNGAPB_OFFSET UNITYSDK_OFFSET(0x13C8B3B0)
#define IJMEEDEBNCH_OAMBFKFHIBD_OFFSET UNITYSDK_OFFSET(0x13C8B280)
#define IJMEEDEBNCH__CTOR_OFFSET UNITYSDK_OFFSET(0xB9389B0)

inline static constexpr unsigned int IJMEEDEBNCH_TypeDefinitionIndex = 69895;

class IJMEEDEBNCH : public ::System::Object
{
public:
	::LOFBJGGBCFG* MCFPDHPPGNA; // 0x10
	::LDHEACPNOGD* KNEEDIOMJOA; // 0x18
	::System::UInt32 ADBNJEEONIM; // 0x20
	::EMFIEIBPFID NABAJJPDLOI; // 0x24
	::EPDHCLCNENK OLKEDCDFHPE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMEEDEBNCH__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMEEDEBNCH_DISPOSE_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJMEEDEBNCH_EDEFLFIKNFK_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void OAMBFKFHIBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMEEDEBNCH_OAMBFKFHIBD_OFFSET))(this);
	}

	::System::UInt32 ICOELJNGAPB()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJMEEDEBNCH_ICOELJNGAPB_OFFSET))(this);
	}
};
