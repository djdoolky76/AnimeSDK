#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDCAGIAJLEH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define DFKIFKBJPKM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F381B0)
#define DFKIFKBJPKM_DHHOEJNKFDF_OFFSET UNITYSDK_OFFSET(0x19F37F30)
#define DFKIFKBJPKM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F37DE0)
#define DFKIFKBJPKM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F37DD0)
#define DFKIFKBJPKM_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x19F37DF0)
#define DFKIFKBJPKM_ODGGIAADMLO_OFFSET UNITYSDK_OFFSET(0x19F38070)
#define DFKIFKBJPKM__CTOR_OFFSET UNITYSDK_OFFSET(0x19F37DC0)

inline static constexpr unsigned int DFKIFKBJPKM_TypeDefinitionIndex = 15564;

class DFKIFKBJPKM : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::NDCAGIAJLEH HBDPAIKANDB; // 0x18
	::System::Int32 FEMJAIBIMDL; // 0x28
	::System::Int32 JEDEMPHDCAK; // 0x2C
	::System::Int32 GFKJCJHNNMB; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36

	::System::Void _ctor(::NDCAGIAJLEH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NDCAGIAJLEH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DFKIFKBJPKM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKIFKBJPKM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFKIFKBJPKM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKIFKBJPKM_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Int32 DHHOEJNKFDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKIFKBJPKM_DHHOEJNKFDF_OFFSET))(this);
	}

	::System::Int32 ODGGIAADMLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKIFKBJPKM_ODGGIAADMLO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKIFKBJPKM_COFGIJJOFLP_OFFSET))(this);
	}
};
