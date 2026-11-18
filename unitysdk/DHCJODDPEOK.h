#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLPJECICNDE.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DHCJODDPEOK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19411450)
#define DHCJODDPEOK_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x19411E50)
#define DHCJODDPEOK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19411030)
#define DHCJODDPEOK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19411560)
#define DHCJODDPEOK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19411F20)
#define DHCJODDPEOK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19411550)
#define DHCJODDPEOK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19411CF0)
#define DHCJODDPEOK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19411090)
#define DHCJODDPEOK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19411390)
#define DHCJODDPEOK_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x19410F40)
#define DHCJODDPEOK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x194115E0)
#define DHCJODDPEOK__CTOR_OFFSET UNITYSDK_OFFSET(0x19411CE0)

inline static constexpr unsigned int DHCJODDPEOK_TypeDefinitionIndex = 81118;

class DHCJODDPEOK : public ::LHHNKBDEMGO
{
public:
	::System::String* KDEFPBLCEHB; // 0x40
	::System::String* MINILDIPHOG; // 0x48
	::System::Object* KLBGAHPJAJO; // 0x50
	::BLPJECICNDE JEJABEHHBIJ; // 0x58
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCJODDPEOK__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DHCJODDPEOK_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DHCJODDPEOK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DHCJODDPEOK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCJODDPEOK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCJODDPEOK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DHCJODDPEOK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DHCJODDPEOK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DHCJODDPEOK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DHCJODDPEOK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DHCJODDPEOK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DHCJODDPEOK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DHCJODDPEOK_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::DHCJODDPEOK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DHCJODDPEOK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DHCJODDPEOK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
