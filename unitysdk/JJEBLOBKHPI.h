#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JJEBLOBKHPI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14A81540)
#define JJEBLOBKHPI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14A80FD0)
#define JJEBLOBKHPI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14A81650)
#define JJEBLOBKHPI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14A81DD0)
#define JJEBLOBKHPI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14A81640)
#define JJEBLOBKHPI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14A81F80)
#define JJEBLOBKHPI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14A81030)
#define JJEBLOBKHPI_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x14A820E0)
#define JJEBLOBKHPI_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x14A80EE0)
#define JJEBLOBKHPI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14A814C0)
#define JJEBLOBKHPI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14A816D0)
#define JJEBLOBKHPI__CTOR_OFFSET UNITYSDK_OFFSET(0x14A81DC0)

inline static constexpr unsigned int JJEBLOBKHPI_TypeDefinitionIndex = 81058;

class JJEBLOBKHPI : public ::LNODBDPJGFL
{
public:
	::System::String* NEAOHHEGDDD; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* OGGJOICNNBA; // 0x58
	::MoleMole::Config::ConfigPosRot* GKINLPJPGKO; // 0x60
	::MoleMole::Config::AbilityTargetting AOINIHEJHFA; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEBLOBKHPI__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JJEBLOBKHPI_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JJEBLOBKHPI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JJEBLOBKHPI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEBLOBKHPI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEBLOBKHPI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JJEBLOBKHPI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::JJEBLOBKHPI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JJEBLOBKHPI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JJEBLOBKHPI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JJEBLOBKHPI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JJEBLOBKHPI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::JJEBLOBKHPI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JJEBLOBKHPI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JJEBLOBKHPI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JJEBLOBKHPI_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
