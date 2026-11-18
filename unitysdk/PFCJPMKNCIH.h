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

#define PFCJPMKNCIH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xFDABCD0)
#define PFCJPMKNCIH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFDAB8A0)
#define PFCJPMKNCIH_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFDABDE0)
#define PFCJPMKNCIH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xFDAC330)
#define PFCJPMKNCIH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xFDABDD0)
#define PFCJPMKNCIH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xFDAC1D0)
#define PFCJPMKNCIH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFDAB900)
#define PFCJPMKNCIH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xFDAC4E0)
#define PFCJPMKNCIH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xFDAB530)
#define PFCJPMKNCIH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xFDABC70)
#define PFCJPMKNCIH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFDABE60)
#define PFCJPMKNCIH__CTOR_OFFSET UNITYSDK_OFFSET(0xFDAC1C0)

inline static constexpr unsigned int PFCJPMKNCIH_TypeDefinitionIndex = 63757;

class PFCJPMKNCIH : public ::LNODBDPJGFL
{
public:
	::System::Collections::Generic::List_1<::System::String*>* FCLOIEODLFJ; // 0x50
	::System::Boolean KFAENCNBGDL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCJPMKNCIH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PFCJPMKNCIH_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PFCJPMKNCIH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PFCJPMKNCIH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCJPMKNCIH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCJPMKNCIH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PFCJPMKNCIH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PFCJPMKNCIH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PFCJPMKNCIH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PFCJPMKNCIH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::PFCJPMKNCIH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PFCJPMKNCIH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PFCJPMKNCIH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PFCJPMKNCIH_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PFCJPMKNCIH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PFCJPMKNCIH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
