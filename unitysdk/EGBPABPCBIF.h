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

#define EGBPABPCBIF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x154A80A0)
#define EGBPABPCBIF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x154A7D40)
#define EGBPABPCBIF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x154A81B0)
#define EGBPABPCBIF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x154A8430)
#define EGBPABPCBIF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x154A81A0)
#define EGBPABPCBIF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x154A86C0)
#define EGBPABPCBIF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x154A7DA0)
#define EGBPABPCBIF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x154A85E0)
#define EGBPABPCBIF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x154A7960)
#define EGBPABPCBIF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x154A8040)
#define EGBPABPCBIF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x154A8230)
#define EGBPABPCBIF__CTOR_OFFSET UNITYSDK_OFFSET(0x154A8420)

inline static constexpr unsigned int EGBPABPCBIF_TypeDefinitionIndex = 70667;

class EGBPABPCBIF : public ::LNODBDPJGFL
{
public:
	::System::Collections::Generic::List_1<::System::String*>* PGJEEDHIFLK; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBPABPCBIF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EGBPABPCBIF_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EGBPABPCBIF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EGBPABPCBIF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBPABPCBIF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBPABPCBIF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EGBPABPCBIF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::EGBPABPCBIF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EGBPABPCBIF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EGBPABPCBIF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EGBPABPCBIF_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::EGBPABPCBIF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EGBPABPCBIF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EGBPABPCBIF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EGBPABPCBIF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EGBPABPCBIF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
