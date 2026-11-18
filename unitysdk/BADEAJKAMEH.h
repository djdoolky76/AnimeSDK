#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJPFPDLFPEN.h"
#include "unitysdk/IMPGHLBGMNJ.h"
#include "unitysdk/LDIENANCAPG.h"

namespace MoleMole::Config { class ButtonQTETaskSinglePressAccurateEntry; }
namespace MoleMole::Config { class RealtimeQTETaskEntryBase; }

#define BADEAJKAMEH_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x113CBAE0)
#define BADEAJKAMEH_GIDDPIMLAGN_OFFSET UNITYSDK_OFFSET(0x113CBA40)
#define BADEAJKAMEH_IJOCPOKBNEN_OFFSET UNITYSDK_OFFSET(0x113CBB90)
#define BADEAJKAMEH_JLGPJGAOOPC_OFFSET UNITYSDK_OFFSET(0x113CB930)
#define BADEAJKAMEH_KAJKGHMFAEC_OFFSET UNITYSDK_OFFSET(0x113CB920)
#define BADEAJKAMEH_MHGLFNCBLJF_OFFSET UNITYSDK_OFFSET(0x113CBCB0)
#define BADEAJKAMEH_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x113CBD40)
#define BADEAJKAMEH_PCFLCMFJECD_OFFSET UNITYSDK_OFFSET(0x113CBA90)
#define BADEAJKAMEH__CTOR_OFFSET UNITYSDK_OFFSET(0x113CB940)

inline static constexpr unsigned int BADEAJKAMEH_TypeDefinitionIndex = 82759;

class BADEAJKAMEH : public ::LDIENANCAPG
{
public:
	::MoleMole::Config::ButtonQTETaskSinglePressAccurateEntry* IFPBLAMBEFP; // 0x40
	::System::Single NOJGGKGIMMO; // 0x48
	::System::Single LHONKJKACDE; // 0x4C

	::System::Void _ctor(::MoleMole::Config::RealtimeQTETaskEntryBase* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RealtimeQTETaskEntryBase*))((::PBYTE)hIl2Cpp + BADEAJKAMEH__CTOR_OFFSET))(this, AAIJGGIEOGK);
	}

	::IMPGHLBGMNJ KAJKGHMFAEC()
	{
		return ((::IMPGHLBGMNJ(*)(::PVOID))((::PBYTE)hIl2Cpp + BADEAJKAMEH_KAJKGHMFAEC_OFFSET))(this);
	}

	::EJPFPDLFPEN JLGPJGAOOPC()
	{
		return ((::EJPFPDLFPEN(*)(::PVOID))((::PBYTE)hIl2Cpp + BADEAJKAMEH_JLGPJGAOOPC_OFFSET))(this);
	}

	::System::Single GIDDPIMLAGN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BADEAJKAMEH_GIDDPIMLAGN_OFFSET))(this);
	}

	::System::Single PCFLCMFJECD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BADEAJKAMEH_PCFLCMFJECD_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BADEAJKAMEH_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void IJOCPOKBNEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADEAJKAMEH_IJOCPOKBNEN_OFFSET))(this);
	}

	::System::Void MHGLFNCBLJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADEAJKAMEH_MHGLFNCBLJF_OFFSET))(this);
	}

	::System::Void PBGJKMAEINN(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BADEAJKAMEH_PBGJKMAEINN_OFFSET))(this, MIALFKCCCPI);
	}
};
