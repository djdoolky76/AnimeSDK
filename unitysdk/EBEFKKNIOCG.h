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
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBEFKKNIOCG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x148C4650)
#define EBEFKKNIOCG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x148C42F0)
#define EBEFKKNIOCG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x148C4760)
#define EBEFKKNIOCG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x148C4B40)
#define EBEFKKNIOCG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x148C4750)
#define EBEFKKNIOCG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x148C49E0)
#define EBEFKKNIOCG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x148C4350)
#define EBEFKKNIOCG_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x148C4CF0)
#define EBEFKKNIOCG_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x148C4200)
#define EBEFKKNIOCG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x148C45F0)
#define EBEFKKNIOCG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x148C47E0)
#define EBEFKKNIOCG__CTOR_OFFSET UNITYSDK_OFFSET(0x148C49D0)

inline static constexpr unsigned int EBEFKKNIOCG_TypeDefinitionIndex = 92468;

class EBEFKKNIOCG : public ::LNODBDPJGFL
{
public:
	::System::Collections::Generic::List_1<::System::String*>* JCDKKGFDJPN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEFKKNIOCG__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EBEFKKNIOCG_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EBEFKKNIOCG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EBEFKKNIOCG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEFKKNIOCG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEFKKNIOCG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EBEFKKNIOCG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EBEFKKNIOCG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::EBEFKKNIOCG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EBEFKKNIOCG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EBEFKKNIOCG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::EBEFKKNIOCG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EBEFKKNIOCG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EBEFKKNIOCG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EBEFKKNIOCG_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EBEFKKNIOCG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
