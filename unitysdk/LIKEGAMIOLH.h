#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPNOAJONDEA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LIKEGAMIOLH_CFOONJHKOJN_OFFSET UNITYSDK_OFFSET(0x1B7F0C20)
#define LIKEGAMIOLH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B7F1000)
#define LIKEGAMIOLH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B7F0FF0)
#define LIKEGAMIOLH_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x1B7F09A0)
#define LIKEGAMIOLH_JENCFBLNJBL_OFFSET UNITYSDK_OFFSET(0x1B7F0890)
#define LIKEGAMIOLH_LBMEFLAOHFP_OFFSET UNITYSDK_OFFSET(0x1B7F0AE0)
#define LIKEGAMIOLH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B7F0EA0)
#define LIKEGAMIOLH_MFLMGECAGIA_OFFSET UNITYSDK_OFFSET(0x1B7F0EB0)
#define LIKEGAMIOLH_NOFKCFKLFFD_OFFSET UNITYSDK_OFFSET(0x1B7F0D60)
#define LIKEGAMIOLH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7F0880)

inline static constexpr unsigned int LIKEGAMIOLH_TypeDefinitionIndex = 11361;

class LIKEGAMIOLH : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::KPNOAJONDEA HBDPAIKANDB; // 0x18
	::System::String* AGIOKAICIHE; // 0x28
	::System::Int32 FEIOEHMLAIM; // 0x30
	::System::Int32 BKDMAEIIIBB; // 0x34
	::System::Int32 MMPHKHNFOKI; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 JFFPLPGOLNL; // 0x40
	::System::Int32 OKBBGPGIODD; // 0x44

	::System::Void _ctor(::KPNOAJONDEA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KPNOAJONDEA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LIKEGAMIOLH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* JENCFBLNJBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKEGAMIOLH_JENCFBLNJBL_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKEGAMIOLH_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Int32 LBMEFLAOHFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKEGAMIOLH_LBMEFLAOHFP_OFFSET))(this);
	}

	::System::Int32 CFOONJHKOJN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKEGAMIOLH_CFOONJHKOJN_OFFSET))(this);
	}

	::System::Int32 NOFKCFKLFFD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKEGAMIOLH_NOFKCFKLFFD_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKEGAMIOLH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 MFLMGECAGIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKEGAMIOLH_MFLMGECAGIA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LIKEGAMIOLH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKEGAMIOLH_COFGIJJOFLP_OFFSET))(this);
	}
};
