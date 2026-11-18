#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBJDNOCBDOG.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/BILDEENCPDN.h"

class KGBFLHNJHHN;

#define JLCLMJOCGHI_CMIHHAFAFFH_OFFSET UNITYSDK_OFFSET(0x14FC19B0)
#define JLCLMJOCGHI_IMMNLIEDHDA_OFFSET UNITYSDK_OFFSET(0x14FC1800)
#define JLCLMJOCGHI_KHFACCLHMGJ_OFFSET UNITYSDK_OFFSET(0x14FC1740)
#define JLCLMJOCGHI_KNHMDGCCNJD_OFFSET UNITYSDK_OFFSET(0x14FC1920)
#define JLCLMJOCGHI_LGMPGNEGCKA_OFFSET UNITYSDK_OFFSET(0x14FC1890)
#define JLCLMJOCGHI_MDBECAAIJCC_OFFSET UNITYSDK_OFFSET(0x14FC16B0)
#define JLCLMJOCGHI__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC16A0)

inline static constexpr unsigned int JLCLMJOCGHI_TypeDefinitionIndex = 60453;

class JLCLMJOCGHI : public ::LBJDNOCBDOG
{
public:
	::System::Void _ctor(::BILDEENCPDN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BILDEENCPDN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JLCLMJOCGHI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Single MDBECAAIJCC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCLMJOCGHI_MDBECAAIJCC_OFFSET))(this);
	}

	::System::Boolean KHFACCLHMGJ(::MoleMole::Config::BaseProperty BGJOPBCCMOC, ::System::Single& NLGAFPJLJDM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::Single&))((::PBYTE)hIl2Cpp + JLCLMJOCGHI_KHFACCLHMGJ_OFFSET))(this, BGJOPBCCMOC, NLGAFPJLJDM);
	}

	::System::Single IMMNLIEDHDA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCLMJOCGHI_IMMNLIEDHDA_OFFSET))(this);
	}

	::System::Single LGMPGNEGCKA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCLMJOCGHI_LGMPGNEGCKA_OFFSET))(this);
	}

	::System::Single CMIHHAFAFFH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCLMJOCGHI_CMIHHAFAFFH_OFFSET))(this);
	}

	::System::Single KNHMDGCCNJD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCLMJOCGHI_KNHMDGCCNJD_OFFSET))(this);
	}
};
