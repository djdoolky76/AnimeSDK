#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define FHKCGMGHEDD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x10F6B950)
#define FHKCGMGHEDD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10F6B4E0)
#define FHKCGMGHEDD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10F6BA60)
#define FHKCGMGHEDD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x10F6C170)
#define FHKCGMGHEDD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x10F6BA50)
#define FHKCGMGHEDD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x10F6C400)
#define FHKCGMGHEDD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10F6B540)
#define FHKCGMGHEDD_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x10F6C320)
#define FHKCGMGHEDD_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x10F6B310)
#define FHKCGMGHEDD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x10F6B8D0)
#define FHKCGMGHEDD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10F6BAE0)
#define FHKCGMGHEDD__CTOR_OFFSET UNITYSDK_OFFSET(0x10F6C160)

inline static constexpr unsigned int FHKCGMGHEDD_TypeDefinitionIndex = 75462;

class FHKCGMGHEDD : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* ADDNICJFOBJ; // 0x50
	::MoleMole::Config::DynamicInt* HEIPOGMMNKK; // 0x58
	::MoleMole::Config::DynamicInt* HBADNCJHEOJ; // 0x60
	::System::Boolean NLLKOICDPNM; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKCGMGHEDD__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FHKCGMGHEDD_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHKCGMGHEDD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FHKCGMGHEDD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKCGMGHEDD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKCGMGHEDD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FHKCGMGHEDD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FHKCGMGHEDD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FHKCGMGHEDD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHKCGMGHEDD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FHKCGMGHEDD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FHKCGMGHEDD_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::FHKCGMGHEDD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FHKCGMGHEDD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FHKCGMGHEDD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FHKCGMGHEDD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
