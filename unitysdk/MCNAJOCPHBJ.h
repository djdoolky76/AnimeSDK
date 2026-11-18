#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJHPIEKNNBN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MCNAJOCPHBJ_BFMPDFGPMFF_OFFSET UNITYSDK_OFFSET(0x1B65B730)
#define MCNAJOCPHBJ_BGKPJHIJIHB_OFFSET UNITYSDK_OFFSET(0x1B65BA10)
#define MCNAJOCPHBJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B65B640)
#define MCNAJOCPHBJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B65BA00)
#define MCNAJOCPHBJ_LFAHHJLPCBA_OFFSET UNITYSDK_OFFSET(0x1B65B420)
#define MCNAJOCPHBJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B65BCE0)
#define MCNAJOCPHBJ_OOKCBCCGMHM_OFFSET UNITYSDK_OFFSET(0x1B65B530)
#define MCNAJOCPHBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B65B410)

inline static constexpr unsigned int MCNAJOCPHBJ_TypeDefinitionIndex = 13661;

class MCNAJOCPHBJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* COFPLGNGLHN; // 0x10
	::System::String* NJFMJFKBMMD; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* JNLJHMGOJJP; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::CJHPIEKNNBN HBDPAIKANDB; // 0x30
	::System::String* MOIAINENPGM; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A

	::System::Void _ctor(::CJHPIEKNNBN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CJHPIEKNNBN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MCNAJOCPHBJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* LFAHHJLPCBA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNAJOCPHBJ_LFAHHJLPCBA_OFFSET))(this);
	}

	::System::String* OOKCBCCGMHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNAJOCPHBJ_OOKCBCCGMHM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNAJOCPHBJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BFMPDFGPMFF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNAJOCPHBJ_BFMPDFGPMFF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MCNAJOCPHBJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BGKPJHIJIHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNAJOCPHBJ_BGKPJHIJIHB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNAJOCPHBJ_LJANCIBECFG_OFFSET))(this);
	}
};
