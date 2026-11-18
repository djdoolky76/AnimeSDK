#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIPCMLEONLI.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define HHEBJHEAFIM_CBJAEOKBGBE_OFFSET UNITYSDK_OFFSET(0x17AF7E00)
#define HHEBJHEAFIM_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x17AF7DB0)
#define HHEBJHEAFIM_FENPLGEJDLF_OFFSET UNITYSDK_OFFSET(0x17AF7CD0)
#define HHEBJHEAFIM__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF7C90)

inline static constexpr unsigned int HHEBJHEAFIM_TypeDefinitionIndex = 39775;

class HHEBJHEAFIM : public ::GIPCMLEONLI
{
public:
	::System::Func_2<::System::Single, ::System::Boolean>* DFJPMOOOLHM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEBJHEAFIM__CTOR_OFFSET))(this);
	}

	::System::Void FENPLGEJDLF(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HHEBJHEAFIM_FENPLGEJDLF_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEBJHEAFIM_CHCGMACMJLD_OFFSET))(this);
	}

	::System::Void CBJAEOKBGBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEBJHEAFIM_CBJAEOKBGBE_OFFSET))(this);
	}
};
