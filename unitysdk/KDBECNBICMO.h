#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/MoleMole/Config/ANIM_CTRLER_PARAMS_TYPE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KDBECNBICMO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16332B30)
#define KDBECNBICMO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16333630)
#define KDBECNBICMO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16332C40)
#define KDBECNBICMO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16333CB0)
#define KDBECNBICMO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16332C30)
#define KDBECNBICMO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16333E60)
#define KDBECNBICMO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16333690)
#define KDBECNBICMO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16333C20)
#define KDBECNBICMO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x163326B0)
#define KDBECNBICMO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16332AA0)
#define KDBECNBICMO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16332CC0)
#define KDBECNBICMO__CTOR_OFFSET UNITYSDK_OFFSET(0x16333A00)

inline static constexpr unsigned int KDBECNBICMO_TypeDefinitionIndex = 70269;

class KDBECNBICMO : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::String*> KDEFPBLCEHB; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Single> CAMJBCCNEPC; // 0x50
	::System::Byte _padding1[0x18];
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x70
	::FOBNALGHPPD_1<::System::Int32> PBGAHAPMFFK; // 0x78
	::System::Byte _padding2[0x18];
	::FOBNALGHPPD_1<::System::Boolean> PKHNMNHEBIK; // 0x98
	::System::Byte _padding3[0x18];
	::MoleMole::Config::ANIM_CTRLER_PARAMS_TYPE JEJABEHHBIJ; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBECNBICMO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBECNBICMO_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KDBECNBICMO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBECNBICMO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBECNBICMO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KDBECNBICMO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KDBECNBICMO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KDBECNBICMO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBECNBICMO_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::KDBECNBICMO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KDBECNBICMO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KDBECNBICMO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KDBECNBICMO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::KDBECNBICMO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KDBECNBICMO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KDBECNBICMO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
