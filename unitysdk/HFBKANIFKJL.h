#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJPFPDLFPEN.h"
#include "unitysdk/IMPGHLBGMNJ.h"
#include "unitysdk/LDIENANCAPG.h"

namespace MoleMole::Config { class ButtonQTETaskMultiPressByTimesEntry; }
namespace MoleMole::Config { class RealtimeQTETaskEntryBase; }

#define HFBKANIFKJL_HKAEEAJGLKG_OFFSET UNITYSDK_OFFSET(0x19E0B540)
#define HFBKANIFKJL_IJOCPOKBNEN_OFFSET UNITYSDK_OFFSET(0x19E0B3B0)
#define HFBKANIFKJL_JLGPJGAOOPC_OFFSET UNITYSDK_OFFSET(0x19E0B2C0)
#define HFBKANIFKJL_KAJKGHMFAEC_OFFSET UNITYSDK_OFFSET(0x19E0B2B0)
#define HFBKANIFKJL_LHALLAIIMJC_OFFSET UNITYSDK_OFFSET(0x19E0B520)
#define HFBKANIFKJL_MCOFGLABGLE_OFFSET UNITYSDK_OFFSET(0x19E0B5F0)
#define HFBKANIFKJL_MHGLFNCBLJF_OFFSET UNITYSDK_OFFSET(0x19E0B560)
#define HFBKANIFKJL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E0B2D0)

inline static constexpr unsigned int HFBKANIFKJL_TypeDefinitionIndex = 59753;

class HFBKANIFKJL : public ::LDIENANCAPG
{
public:
	::MoleMole::Config::ButtonQTETaskMultiPressByTimesEntry* IFPBLAMBEFP; // 0x40
	::System::Single DEHLBOKEGEM; // 0x48
	::System::Single CHBNOAELLHM; // 0x4C

	::System::Void _ctor(::MoleMole::Config::RealtimeQTETaskEntryBase* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RealtimeQTETaskEntryBase*))((::PBYTE)hIl2Cpp + HFBKANIFKJL__CTOR_OFFSET))(this, AAIJGGIEOGK);
	}

	::IMPGHLBGMNJ KAJKGHMFAEC()
	{
		return ((::IMPGHLBGMNJ(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBKANIFKJL_KAJKGHMFAEC_OFFSET))(this);
	}

	::EJPFPDLFPEN JLGPJGAOOPC()
	{
		return ((::EJPFPDLFPEN(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBKANIFKJL_JLGPJGAOOPC_OFFSET))(this);
	}

	::System::Void IJOCPOKBNEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBKANIFKJL_IJOCPOKBNEN_OFFSET))(this);
	}

	::System::Single LHALLAIIMJC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBKANIFKJL_LHALLAIIMJC_OFFSET))(this);
	}

	::System::Boolean HKAEEAJGLKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBKANIFKJL_HKAEEAJGLKG_OFFSET))(this);
	}

	::System::Void MHGLFNCBLJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBKANIFKJL_MHGLFNCBLJF_OFFSET))(this);
	}

	::System::Single MCOFGLABGLE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBKANIFKJL_MCOFGLABGLE_OFFSET))(this);
	}
};
