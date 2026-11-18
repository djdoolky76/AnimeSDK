#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class PGIKLIIFLEE;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BMAAAGNGJHK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x115FB8E0)
#define BMAAAGNGJHK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x115FB4A0)
#define BMAAAGNGJHK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x115FB9F0)
#define BMAAAGNGJHK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x115FC060)
#define BMAAAGNGJHK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x115FB9E0)
#define BMAAAGNGJHK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x115FC2F0)
#define BMAAAGNGJHK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x115FB500)
#define BMAAAGNGJHK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x115FC210)
#define BMAAAGNGJHK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x115FB3A0)
#define BMAAAGNGJHK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x115FB870)
#define BMAAAGNGJHK_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x115FB490)
#define BMAAAGNGJHK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x115FBA70)
#define BMAAAGNGJHK__CTOR_OFFSET UNITYSDK_OFFSET(0x115FC050)

inline static constexpr unsigned int BMAAAGNGJHK_TypeDefinitionIndex = 91073;

class BMAAAGNGJHK : public ::LNODBDPJGFL
{
public:
	::System::Collections::Generic::List_1<::PGIKLIIFLEE*>* AHECJBACEDB; // 0x50
	::System::String* KDPDLFJPNLE; // 0x58
	::System::Boolean BJHJJDDIFMK; // 0x60
	::System::Byte _padding0[0x3];
	::MoleMole::Config::AbilityTargetting DAONPILMAPI; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMAAAGNGJHK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BMAAAGNGJHK_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + BMAAAGNGJHK_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMAAAGNGJHK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BMAAAGNGJHK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMAAAGNGJHK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMAAAGNGJHK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BMAAAGNGJHK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BMAAAGNGJHK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BMAAAGNGJHK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMAAAGNGJHK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMAAAGNGJHK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BMAAAGNGJHK_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BMAAAGNGJHK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BMAAAGNGJHK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BMAAAGNGJHK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BMAAAGNGJHK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
