#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJCGHLCFPPI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MCBBOGAPLBJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18E03BF0)
#define MCBBOGAPLBJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18E03BD0)
#define MCBBOGAPLBJ_HDJLCKBGHJA_OFFSET UNITYSDK_OFFSET(0x18E03E20)
#define MCBBOGAPLBJ_LACMOPHIBFM_OFFSET UNITYSDK_OFFSET(0x18E03A90)
#define MCBBOGAPLBJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18E03BE0)
#define MCBBOGAPLBJ_NIOPHODOFHP_OFFSET UNITYSDK_OFFSET(0x18E03950)
#define MCBBOGAPLBJ_OAHPPGCJFMJ_OFFSET UNITYSDK_OFFSET(0x18E03CE0)
#define MCBBOGAPLBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18E03940)

inline static constexpr unsigned int MCBBOGAPLBJ_TypeDefinitionIndex = 14148;

class MCBBOGAPLBJ : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* AJJENBHAIJH; // 0x18
	::GJCGHLCFPPI HBDPAIKANDB; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 LFIPMAIFGPK; // 0x34
	::System::Int32 NKBNBHGLHND; // 0x38
	::System::Int32 EBBMLNAGLCG; // 0x3C

	::System::Void _ctor(::GJCGHLCFPPI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GJCGHLCFPPI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MCBBOGAPLBJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 NIOPHODOFHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCBBOGAPLBJ_NIOPHODOFHP_OFFSET))(this);
	}

	::System::Int32 LACMOPHIBFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCBBOGAPLBJ_LACMOPHIBFM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MCBBOGAPLBJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCBBOGAPLBJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCBBOGAPLBJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 OAHPPGCJFMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCBBOGAPLBJ_OAHPPGCJFMJ_OFFSET))(this);
	}

	::System::String* HDJLCKBGHJA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCBBOGAPLBJ_HDJLCKBGHJA_OFFSET))(this);
	}
};
