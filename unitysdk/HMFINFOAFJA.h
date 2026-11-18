#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGFNPCPAKNL.h"
#include "unitysdk/BOENNLFBFKP.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HMFINFOAFJA_FJEOMPKAJPJ_OFFSET UNITYSDK_OFFSET(0x1BADF6C0)
#define HMFINFOAFJA_FKDBLOFCAFA_OFFSET UNITYSDK_OFFSET(0x1BADF5E0)
#define HMFINFOAFJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BADF5D0)

inline static constexpr unsigned int HMFINFOAFJA_TypeDefinitionIndex = 17117;

class HMFINFOAFJA : public ::GGFNPCPAKNL
{
public:
	::System::Int32 EOIOHOIJPKP; // 0x60

	::System::Void _ctor(::BOENNLFBFKP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BOENNLFBFKP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HMFINFOAFJA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	static ::System::Int32 FKDBLOFCAFA(::System::String* LCEGOBBEECM)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + HMFINFOAFJA_FKDBLOFCAFA_OFFSET))(LCEGOBBEECM);
	}

	::System::Void FJEOMPKAJPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFINFOAFJA_FJEOMPKAJPJ_OFFSET))(this);
	}
};
