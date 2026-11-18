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
namespace MoleMole::Config { class ConfigDynamicValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEOIDHMBPIK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15B434A0)
#define HEOIDHMBPIK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15B430E0)
#define HEOIDHMBPIK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15B435B0)
#define HEOIDHMBPIK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15B43D80)
#define HEOIDHMBPIK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15B435A0)
#define HEOIDHMBPIK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15B43C20)
#define HEOIDHMBPIK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15B43140)
#define HEOIDHMBPIK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15B43B40)
#define HEOIDHMBPIK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15B42FF0)
#define HEOIDHMBPIK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15B43420)
#define HEOIDHMBPIK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15B43630)
#define HEOIDHMBPIK__CTOR_OFFSET UNITYSDK_OFFSET(0x15B43B30)

inline static constexpr unsigned int HEOIDHMBPIK_TypeDefinitionIndex = 59921;

class HEOIDHMBPIK : public ::LNODBDPJGFL
{
public:
	::System::String* AOLGDHDOCLP; // 0x50
	::System::String* BGPMDIKJFPJ; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicValue*>* AHECJBACEDB; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOIDHMBPIK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HEOIDHMBPIK_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HEOIDHMBPIK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HEOIDHMBPIK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOIDHMBPIK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOIDHMBPIK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HEOIDHMBPIK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HEOIDHMBPIK_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::HEOIDHMBPIK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HEOIDHMBPIK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HEOIDHMBPIK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HEOIDHMBPIK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HEOIDHMBPIK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HEOIDHMBPIK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HEOIDHMBPIK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HEOIDHMBPIK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
