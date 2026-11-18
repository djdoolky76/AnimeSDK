#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJAENPFCFEM.h"
#include "unitysdk/FPMHMAKIJLJ.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BDNPNPOIKIA_GDMMAANNNKJ_OFFSET UNITYSDK_OFFSET(0x1A16AE90)
#define BDNPNPOIKIA_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x1A16AEA0)
#define BDNPNPOIKIA_NCLBODLIEIB_OFFSET UNITYSDK_OFFSET(0x1A16AEB0)
#define BDNPNPOIKIA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A16AE80)

inline static constexpr unsigned int BDNPNPOIKIA_TypeDefinitionIndex = 15992;

class BDNPNPOIKIA : public ::FJAENPFCFEM
{
public:
	::System::Void _ctor(::FPMHMAKIJLJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FPMHMAKIJLJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BDNPNPOIKIA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* GDMMAANNNKJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNPNPOIKIA_GDMMAANNNKJ_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNPNPOIKIA_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::String* NCLBODLIEIB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDNPNPOIKIA_NCLBODLIEIB_OFFSET))(this);
	}
};
