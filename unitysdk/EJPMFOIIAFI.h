#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIJHNDADGPM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EJPMFOIIAFI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195228D0)
#define EJPMFOIIAFI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x195228B0)
#define EJPMFOIIAFI_JLDGIMOPJKP_OFFSET UNITYSDK_OFFSET(0x19522610)
#define EJPMFOIIAFI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x195228C0)
#define EJPMFOIIAFI_LJPCDCEFHKM_OFFSET UNITYSDK_OFFSET(0x19522500)
#define EJPMFOIIAFI_MPKDIOCPEPP_OFFSET UNITYSDK_OFFSET(0x19522750)
#define EJPMFOIIAFI__CTOR_OFFSET UNITYSDK_OFFSET(0x195224F0)

inline static constexpr unsigned int EJPMFOIIAFI_TypeDefinitionIndex = 11983;

class EJPMFOIIAFI : public ::System::Object
{
public:
	::JIJHNDADGPM HBDPAIKANDB; // 0x10
	::System::String* NKGIICCOPBH; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 BJGBJKENOND; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Boolean OGIBMJMLELN; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36
	::System::Byte CNIAANMNOCF; // 0x37

	::System::Void _ctor(::JIJHNDADGPM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JIJHNDADGPM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EJPMFOIIAFI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* LJPCDCEFHKM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPMFOIIAFI_LJPCDCEFHKM_OFFSET))(this);
	}

	::System::Int32 JLDGIMOPJKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPMFOIIAFI_JLDGIMOPJKP_OFFSET))(this);
	}

	::System::Boolean MPKDIOCPEPP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPMFOIIAFI_MPKDIOCPEPP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJPMFOIIAFI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPMFOIIAFI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPMFOIIAFI_COFGIJJOFLP_OFFSET))(this);
	}
};
