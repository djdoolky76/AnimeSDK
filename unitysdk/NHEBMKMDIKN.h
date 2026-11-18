#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPOKJCMPONJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NHEBMKMDIKN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195B6D00)
#define NHEBMKMDIKN_ENOJJNEPLDJ_OFFSET UNITYSDK_OFFSET(0x195B6800)
#define NHEBMKMDIKN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x195B67F0)
#define NHEBMKMDIKN_GCJEHAPDEMH_OFFSET UNITYSDK_OFFSET(0x195B6BA0)
#define NHEBMKMDIKN_HDJLCKBGHJA_OFFSET UNITYSDK_OFFSET(0x195B66E0)
#define NHEBMKMDIKN_LACMOPHIBFM_OFFSET UNITYSDK_OFFSET(0x195B6920)
#define NHEBMKMDIKN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x195B6910)
#define NHEBMKMDIKN_NIOPHODOFHP_OFFSET UNITYSDK_OFFSET(0x195B6A60)
#define NHEBMKMDIKN_OAHPPGCJFMJ_OFFSET UNITYSDK_OFFSET(0x195B65A0)
#define NHEBMKMDIKN__CTOR_OFFSET UNITYSDK_OFFSET(0x195B6590)

inline static constexpr unsigned int NHEBMKMDIKN_TypeDefinitionIndex = 15863;

class NHEBMKMDIKN : public ::System::Object
{
public:
	::IPOKJCMPONJ HBDPAIKANDB; // 0x10
	::System::String* GAGDGHJPHLB; // 0x20
	::System::String* AJJENBHAIJH; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 LFIPMAIFGPK; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3D
	::System::Byte _padding0[0x2];
	::System::Int32 NKBNBHGLHND; // 0x40
	::System::Boolean EMGKBKPFHPE; // 0x44
	::System::Byte CNIAANMNOCF; // 0x45
	::System::Boolean KABGOKDBLBG; // 0x46
	::System::Byte _padding1[0x1];
	::System::Int32 EBBMLNAGLCG; // 0x48

	::System::Void _ctor(::IPOKJCMPONJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IPOKJCMPONJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NHEBMKMDIKN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 OAHPPGCJFMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEBMKMDIKN_OAHPPGCJFMJ_OFFSET))(this);
	}

	::System::String* HDJLCKBGHJA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEBMKMDIKN_HDJLCKBGHJA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NHEBMKMDIKN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ENOJJNEPLDJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEBMKMDIKN_ENOJJNEPLDJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEBMKMDIKN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 LACMOPHIBFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEBMKMDIKN_LACMOPHIBFM_OFFSET))(this);
	}

	::System::Int32 NIOPHODOFHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEBMKMDIKN_NIOPHODOFHP_OFFSET))(this);
	}

	::System::Boolean GCJEHAPDEMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEBMKMDIKN_GCJEHAPDEMH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEBMKMDIKN_COFGIJJOFLP_OFFSET))(this);
	}
};
