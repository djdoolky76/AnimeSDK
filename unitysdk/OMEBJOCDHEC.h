#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define OMEBJOCDHEC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13A71A30)
#define OMEBJOCDHEC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13A716D0)
#define OMEBJOCDHEC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13A71B40)
#define OMEBJOCDHEC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13A72070)
#define OMEBJOCDHEC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13A71B30)
#define OMEBJOCDHEC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13A72300)
#define OMEBJOCDHEC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13A71730)
#define OMEBJOCDHEC_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x13A72220)
#define OMEBJOCDHEC_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x13A71570)
#define OMEBJOCDHEC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13A719C0)
#define OMEBJOCDHEC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13A71BC0)
#define OMEBJOCDHEC__CTOR_OFFSET UNITYSDK_OFFSET(0x13A72060)

inline static constexpr unsigned int OMEBJOCDHEC_TypeDefinitionIndex = 56778;

class OMEBJOCDHEC : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x50
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x58
	::MoleMole::Config::BaseProperty CMHKNFPBDFO; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEBJOCDHEC__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OMEBJOCDHEC_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OMEBJOCDHEC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OMEBJOCDHEC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEBJOCDHEC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMEBJOCDHEC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OMEBJOCDHEC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OMEBJOCDHEC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::OMEBJOCDHEC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OMEBJOCDHEC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OMEBJOCDHEC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OMEBJOCDHEC_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OMEBJOCDHEC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::OMEBJOCDHEC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OMEBJOCDHEC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OMEBJOCDHEC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
