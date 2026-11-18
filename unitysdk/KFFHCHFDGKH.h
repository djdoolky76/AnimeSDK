#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNBFHOHIOHP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KFFHCHFDGKH_ANNHHHEGPOA_OFFSET UNITYSDK_OFFSET(0x18DE4810)
#define KFFHCHFDGKH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18DE4950)
#define KFFHCHFDGKH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18DE45B0)
#define KFFHCHFDGKH_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x18DE45C0)
#define KFFHCHFDGKH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18DE45A0)
#define KFFHCHFDGKH_MFLMGECAGIA_OFFSET UNITYSDK_OFFSET(0x18DE46D0)
#define KFFHCHFDGKH__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE4590)

inline static constexpr unsigned int KFFHCHFDGKH_TypeDefinitionIndex = 14670;

class KFFHCHFDGKH : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::GNBFHOHIOHP HBDPAIKANDB; // 0x18
	::System::String* EOALHEEBMKM; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 HCAJIDPDDGH; // 0x34
	::System::Int32 FEIOEHMLAIM; // 0x38

	::System::Void _ctor(::GNBFHOHIOHP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GNBFHOHIOHP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KFFHCHFDGKH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFHCHFDGKH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFFHCHFDGKH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFHCHFDGKH_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Int32 MFLMGECAGIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFHCHFDGKH_MFLMGECAGIA_OFFSET))(this);
	}

	::System::Int32 ANNHHHEGPOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFHCHFDGKH_ANNHHHEGPOA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFHCHFDGKH_COFGIJJOFLP_OFFSET))(this);
	}
};
