#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDDHJLCEFOJ.h"

class ACNLKLCDALA;
class GEIHCPAOKKK;

#define EGLNKJJBCJK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x161406B0)
#define EGLNKJJBCJK_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x161402E0)
#define EGLNKJJBCJK__CTOR_OFFSET UNITYSDK_OFFSET(0x161406A0)

inline static constexpr unsigned int EGLNKJJBCJK_TypeDefinitionIndex = 86124;

class EGLNKJJBCJK : public ::LDDHJLCEFOJ
{
public:
	::GEIHCPAOKKK* HPDFPPAHNGL; // 0x28
	::ACNLKLCDALA* HMKPMMCDECM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLNKJJBCJK__CTOR_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLNKJJBCJK_PLPONJAKNEB_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::ACNLKLCDALA* PAHAKIECKMN, ::GEIHCPAOKKK* MNIEFFFEKEH)
	{
		return ((::System::Void(*)(::PVOID, ::ACNLKLCDALA*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + EGLNKJJBCJK_BBOMJDBNHIC_OFFSET))(this, PAHAKIECKMN, MNIEFFFEKEH);
	}
};
