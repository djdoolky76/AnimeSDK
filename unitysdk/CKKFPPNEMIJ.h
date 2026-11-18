#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MHMFHAGMFOC;
class PPLDDIKFMBO;

#define CKKFPPNEMIJ_ALGDLJGCEHD_OFFSET UNITYSDK_OFFSET(0x18DDC7C0)
#define CKKFPPNEMIJ_AMGHKKDIPPM_OFFSET UNITYSDK_OFFSET(0x18DDC7B0)
#define CKKFPPNEMIJ_CHGLDNGMEFI_OFFSET UNITYSDK_OFFSET(0x18DDC7D0)
#define CKKFPPNEMIJ_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x18DDC7A0)
#define CKKFPPNEMIJ_KIPGBLFACHN_OFFSET UNITYSDK_OFFSET(0x18DDC930)
#define CKKFPPNEMIJ_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x18DDC790)
#define CKKFPPNEMIJ_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x18DDC940)
#define CKKFPPNEMIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDC6A0)

inline static constexpr unsigned int CKKFPPNEMIJ_TypeDefinitionIndex = 41506;

class CKKFPPNEMIJ : public ::System::Object
{
public:
	::PPLDDIKFMBO* _KMJDPDLPPFE_k__BackingField; // 0x10
	::MHMFHAGMFOC* BMKPOOLFMKL; // 0x18
	::System::UInt32 _HHNNKGPFJNO_k__BackingField; // 0x20
	::System::Boolean _DPHDLDDONII_k__BackingField; // 0x24

	::System::Void _ctor(::MHMFHAGMFOC* ODPEJNDHNNA)
	{
		return ((::System::Void(*)(::PVOID, ::MHMFHAGMFOC*))((::PBYTE)hIl2Cpp + CKKFPPNEMIJ__CTOR_OFFSET))(this, ODPEJNDHNNA);
	}

	::System::Void LFDIBLLPICO(::PPLDDIKFMBO* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::PPLDDIKFMBO*))((::PBYTE)hIl2Cpp + CKKFPPNEMIJ_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::PPLDDIKFMBO* EKHHIIJOEFN()
	{
		return ((::PPLDDIKFMBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKKFPPNEMIJ_EKHHIIJOEFN_OFFSET))(this);
	}

	::System::Void AMGHKKDIPPM(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKKFPPNEMIJ_AMGHKKDIPPM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ALGDLJGCEHD(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKKFPPNEMIJ_ALGDLJGCEHD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean CHGLDNGMEFI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKKFPPNEMIJ_CHGLDNGMEFI_OFFSET))(this);
	}

	::System::Boolean KIPGBLFACHN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKKFPPNEMIJ_KIPGBLFACHN_OFFSET))(this);
	}

	::System::UInt32 PPIFNHNGCGO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKKFPPNEMIJ_PPIFNHNGCGO_OFFSET))(this);
	}
};
