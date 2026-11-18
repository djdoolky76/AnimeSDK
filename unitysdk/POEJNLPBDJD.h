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

#define POEJNLPBDJD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1B9FA500)
#define POEJNLPBDJD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9FA120)
#define POEJNLPBDJD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B9FA610)
#define POEJNLPBDJD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1B9FAC60)
#define POEJNLPBDJD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1B9FA600)
#define POEJNLPBDJD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1B9FAA20)
#define POEJNLPBDJD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1B9FA180)
#define POEJNLPBDJD_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1B9FAB80)
#define POEJNLPBDJD_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1B9FA010)
#define POEJNLPBDJD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1B9FA490)
#define POEJNLPBDJD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1B9FA690)
#define POEJNLPBDJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9FAA10)

inline static constexpr unsigned int POEJNLPBDJD_TypeDefinitionIndex = 42962;

class POEJNLPBDJD : public ::LNODBDPJGFL
{
public:
	::System::String* KIHGNGKBADE; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* NHKPCPINNAP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEJNLPBDJD__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + POEJNLPBDJD_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + POEJNLPBDJD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + POEJNLPBDJD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + POEJNLPBDJD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POEJNLPBDJD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + POEJNLPBDJD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::POEJNLPBDJD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::POEJNLPBDJD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + POEJNLPBDJD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + POEJNLPBDJD_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::POEJNLPBDJD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::POEJNLPBDJD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + POEJNLPBDJD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + POEJNLPBDJD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + POEJNLPBDJD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
