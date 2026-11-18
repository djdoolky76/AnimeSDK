#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define HPGADGHEPGP_AGEKMAEJING_OFFSET UNITYSDK_OFFSET(0x15BE5CB0)
#define HPGADGHEPGP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15BE5D50)
#define HPGADGHEPGP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15BE5CC0)
#define HPGADGHEPGP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15BE5C20)
#define HPGADGHEPGP__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BE5BA0)
#define HPGADGHEPGP__CTOR_OFFSET UNITYSDK_OFFSET(0x15BE5C10)

inline static constexpr unsigned int HPGADGHEPGP_TypeDefinitionIndex = 78612;

class HPGADGHEPGP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x96; // 0x0
	::System::String* ABOHEJIINDD; // 0x20
	::System::Int32 EHHHLIDAGLA; // 0x28
	::System::UInt32 AOGNNJLKHGL; // 0x2C
	::System::Int32 KBIGPEAHGII; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPGADGHEPGP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGADGHEPGP__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGADGHEPGP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Boolean AGEKMAEJING()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGADGHEPGP_AGEKMAEJING_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGADGHEPGP_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 NJNCGJLHLKC, ::System::Int32 KEHNCKBIBFA, ::System::Int32 CKEEODCFHHO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HPGADGHEPGP_CNHBDOMKKDE_OFFSET))(this, NJNCGJLHLKC, KEHNCKBIBFA, CKEEODCFHHO);
	}
};
