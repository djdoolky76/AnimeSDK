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
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define LHLGCPDOGMO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x12A48720)
#define LHLGCPDOGMO_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x12A48C60)
#define LHLGCPDOGMO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12A48450)
#define LHLGCPDOGMO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12A48830)
#define LHLGCPDOGMO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x12A48AB0)
#define LHLGCPDOGMO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x12A48820)
#define LHLGCPDOGMO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12A48D30)
#define LHLGCPDOGMO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12A484B0)
#define LHLGCPDOGMO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12A48690)
#define LHLGCPDOGMO_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x12A48350)
#define LHLGCPDOGMO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12A488B0)
#define LHLGCPDOGMO__CTOR_OFFSET UNITYSDK_OFFSET(0x12A48AA0)

inline static constexpr unsigned int LHLGCPDOGMO_TypeDefinitionIndex = 68855;

class LHLGCPDOGMO : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicString* HEPGIHIMCDP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLGCPDOGMO__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LHLGCPDOGMO_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LHLGCPDOGMO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LHLGCPDOGMO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLGCPDOGMO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLGCPDOGMO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LHLGCPDOGMO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LHLGCPDOGMO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LHLGCPDOGMO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LHLGCPDOGMO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LHLGCPDOGMO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LHLGCPDOGMO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LHLGCPDOGMO_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::LHLGCPDOGMO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LHLGCPDOGMO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LHLGCPDOGMO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
