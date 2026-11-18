#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBANHAJIKNM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JKKFCEEFMDP_AGKJHLOALPK_OFFSET UNITYSDK_OFFSET(0x1935DC50)
#define JKKFCEEFMDP_CNHJMGHBKGN_OFFSET UNITYSDK_OFFSET(0x1935E030)
#define JKKFCEEFMDP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1935DA20)
#define JKKFCEEFMDP_EGGCACEKBEE_OFFSET UNITYSDK_OFFSET(0x1935E4F0)
#define JKKFCEEFMDP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1935E260)
#define JKKFCEEFMDP_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x1935DB10)
#define JKKFCEEFMDP_JKNCDEBINBM_OFFSET UNITYSDK_OFFSET(0x1935DF20)
#define JKKFCEEFMDP_KKPCMMCJPMB_OFFSET UNITYSDK_OFFSET(0x1935E140)
#define JKKFCEEFMDP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1935E250)
#define JKKFCEEFMDP_MENBNDGCGCF_OFFSET UNITYSDK_OFFSET(0x1935E270)
#define JKKFCEEFMDP_MJEKGNJNEEO_OFFSET UNITYSDK_OFFSET(0x1935E3B0)
#define JKKFCEEFMDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1935DA10)

inline static constexpr unsigned int JKKFCEEFMDP_TypeDefinitionIndex = 10519;

class JKKFCEEFMDP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::PBANHAJIKNM HBDPAIKANDB; // 0x18
	::System::String* ECBGMMPJHIM; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* GJCOHNMHMKP; // 0x30
	::System::String* EKNAALIPICN; // 0x38
	::System::String* FINEKLCONGF; // 0x40
	::System::Int32 OGOMAHCKHJK; // 0x48
	::System::Int32 DCADPBEHDAN; // 0x4C
	::System::Int32 KBFDEAADJFF; // 0x50
	::System::Byte CNIAANMNOCF; // 0x54
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x55
	::System::Byte ACIOBDEBDNK; // 0x56
	::System::Byte _padding0[0x1];
	::System::Int32 OKBBGPGIODD; // 0x58

	::System::Void _ctor(::PBANHAJIKNM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PBANHAJIKNM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JKKFCEEFMDP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKFCEEFMDP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKFCEEFMDP_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* AGKJHLOALPK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKFCEEFMDP_AGKJHLOALPK_OFFSET))(this);
	}

	::System::String* JKNCDEBINBM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKFCEEFMDP_JKNCDEBINBM_OFFSET))(this);
	}

	::System::String* CNHJMGHBKGN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKFCEEFMDP_CNHJMGHBKGN_OFFSET))(this);
	}

	::System::String* KKPCMMCJPMB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKFCEEFMDP_KKPCMMCJPMB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKFCEEFMDP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JKKFCEEFMDP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MENBNDGCGCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKFCEEFMDP_MENBNDGCGCF_OFFSET))(this);
	}

	::System::Int32 MJEKGNJNEEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKFCEEFMDP_MJEKGNJNEEO_OFFSET))(this);
	}

	::System::Int32 EGGCACEKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKFCEEFMDP_EGGCACEKBEE_OFFSET))(this);
	}
};
