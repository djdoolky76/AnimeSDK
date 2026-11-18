#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMPFAEHBBIN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BGFEBJBBDHH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17EF4070)
#define BGFEBJBBDHH_DGOHNEKEIOE_OFFSET UNITYSDK_OFFSET(0x17EF4280)
#define BGFEBJBBDHH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17EF4270)
#define BGFEBJBBDHH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17EF4390)
#define BGFEBJBBDHH_NCCPACOJHKF_OFFSET UNITYSDK_OFFSET(0x17EF4160)
#define BGFEBJBBDHH__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF4060)

inline static constexpr unsigned int BGFEBJBBDHH_TypeDefinitionIndex = 12543;

class BGFEBJBBDHH : public ::System::Object
{
public:
	::System::String* IIMJJMIKNKB; // 0x10
	::System::String* FMKMDODOBIP; // 0x18
	::MMPFAEHBBIN HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* NJIFJNGDMFK; // 0x38
	::System::Int32 GLGPNLDMDEK; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x45
	::System::Byte CNIAANMNOCF; // 0x46

	::System::Void _ctor(::MMPFAEHBBIN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MMPFAEHBBIN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BGFEBJBBDHH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFEBJBBDHH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* NCCPACOJHKF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFEBJBBDHH_NCCPACOJHKF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGFEBJBBDHH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* DGOHNEKEIOE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFEBJBBDHH_DGOHNEKEIOE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGFEBJBBDHH_LJANCIBECFG_OFFSET))(this);
	}
};
