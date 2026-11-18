#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class HIGDCFKIIFC;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEGJMDNIBDE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xFDA8C10)
#define PEGJMDNIBDE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFDA8960)
#define PEGJMDNIBDE_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFDA8D20)
#define PEGJMDNIBDE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xFDA9110)
#define PEGJMDNIBDE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xFDA8D10)
#define PEGJMDNIBDE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xFDA8FA0)
#define PEGJMDNIBDE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFDA89C0)
#define PEGJMDNIBDE_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xFDA92C0)
#define PEGJMDNIBDE_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xFDA86D0)
#define PEGJMDNIBDE_LMNBAMEMKMD_OFFSET UNITYSDK_OFFSET(0xFDA9100)
#define PEGJMDNIBDE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xFDA8BB0)
#define PEGJMDNIBDE_OPNFLKOCBDM_OFFSET UNITYSDK_OFFSET(0xFDA87D0)
#define PEGJMDNIBDE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFDA8DA0)
#define PEGJMDNIBDE__CTOR_OFFSET UNITYSDK_OFFSET(0xFDA8F90)

inline static constexpr unsigned int PEGJMDNIBDE_TypeDefinitionIndex = 43801;

class PEGJMDNIBDE : public ::LNODBDPJGFL
{
public:
	::System::Collections::Generic::List_1<::HIGDCFKIIFC*>* NPGPKCABGPD; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGJMDNIBDE__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PEGJMDNIBDE_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>* OPNFLKOCBDM()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGJMDNIBDE_OPNFLKOCBDM_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PEGJMDNIBDE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PEGJMDNIBDE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGJMDNIBDE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGJMDNIBDE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PEGJMDNIBDE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PEGJMDNIBDE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PEGJMDNIBDE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PEGJMDNIBDE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PEGJMDNIBDE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>* LMNBAMEMKMD()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGJMDNIBDE_LMNBAMEMKMD_OFFSET))(this);
	}

	static ::PEGJMDNIBDE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PEGJMDNIBDE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PEGJMDNIBDE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PEGJMDNIBDE_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PEGJMDNIBDE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
