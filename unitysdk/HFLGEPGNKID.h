#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFLGEPGNKID_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19E0C0A0)
#define HFLGEPGNKID_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x19E0C740)
#define HFLGEPGNKID_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19E0BD10)
#define HFLGEPGNKID_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19E0C1B0)
#define HFLGEPGNKID_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19E0C430)
#define HFLGEPGNKID_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19E0C1A0)
#define HFLGEPGNKID_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19E0C5E0)
#define HFLGEPGNKID_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19E0BD70)
#define HFLGEPGNKID_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19E0C010)
#define HFLGEPGNKID_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x19E0BA80)
#define HFLGEPGNKID_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19E0C230)
#define HFLGEPGNKID__CTOR_OFFSET UNITYSDK_OFFSET(0x19E0C420)

inline static constexpr unsigned int HFLGEPGNKID_TypeDefinitionIndex = 67572;

class HFLGEPGNKID : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::String*>* PGJEEDHIFLK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLGEPGNKID__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HFLGEPGNKID_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HFLGEPGNKID_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HFLGEPGNKID_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLGEPGNKID_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLGEPGNKID_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HFLGEPGNKID_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HFLGEPGNKID_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HFLGEPGNKID* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HFLGEPGNKID*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HFLGEPGNKID_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HFLGEPGNKID_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HFLGEPGNKID* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HFLGEPGNKID*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HFLGEPGNKID_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HFLGEPGNKID_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};
