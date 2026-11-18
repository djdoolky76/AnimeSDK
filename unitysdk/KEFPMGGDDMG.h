#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEJOGEHPGPH.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BAMGJHJOEFM.h"

class JMNDEAFIAAF;
class KCJOLCJKIHE;

#define KEFPMGGDDMG_BANCGLIIFLO_OFFSET UNITYSDK_OFFSET(0x359150)
#define KEFPMGGDDMG_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x7AA9E0)
#define KEFPMGGDDMG_FLPFHMOBCEC_OFFSET UNITYSDK_OFFSET(0x359320)
#define KEFPMGGDDMG_HGOJEGDOHOH_OFFSET UNITYSDK_OFFSET(0x7AAB00)
#define KEFPMGGDDMG_HLLHAMKLMHL_OFFSET UNITYSDK_OFFSET(0x7AAAA0)
#define KEFPMGGDDMG_MDIABFBAEOD_OFFSET UNITYSDK_OFFSET(0x7AAA40)
#define KEFPMGGDDMG__CTOR_OFFSET UNITYSDK_OFFSET(0x7AA9D0)

inline static constexpr unsigned int KEFPMGGDDMG_TypeDefinitionIndex = 49696;

struct alignas(8) KEFPMGGDDMG
{
	::System::Int32 _JLFDKDCNNML_k__BackingField; // 0x10
	::OEJOGEHPGPH BPKOPILKPMP; // 0x14
	::KCJOLCJKIHE* DGKDJINBGHJ; // 0x18

	::System::Void _ctor(::System::Int32 DMMAAAKJANP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KEFPMGGDDMG__CTOR_OFFSET))(this, DMMAAAKJANP);
	}

	::System::Boolean FCFOEJGPDNO(::JMNDEAFIAAF* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::JMNDEAFIAAF*))((::PBYTE)hIl2Cpp + KEFPMGGDDMG_FCFOEJGPDNO_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void MDIABFBAEOD(::BAMGJHJOEFM AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::BAMGJHJOEFM))((::PBYTE)hIl2Cpp + KEFPMGGDDMG_MDIABFBAEOD_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Int32 HLLHAMKLMHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEFPMGGDDMG_HLLHAMKLMHL_OFFSET))(this);
	}

	::System::Int32 FLPFHMOBCEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEFPMGGDDMG_FLPFHMOBCEC_OFFSET))(this);
	}

	::System::Int32 HGOJEGDOHOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEFPMGGDDMG_HGOJEGDOHOH_OFFSET))(this);
	}

	::System::Void BANCGLIIFLO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KEFPMGGDDMG_BANCGLIIFLO_OFFSET))(this, EGEGIMGMJHN);
	}
};
