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

#define FNCKOFKJDEP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x142AC300)
#define FNCKOFKJDEP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x142ABFA0)
#define FNCKOFKJDEP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x142AC410)
#define FNCKOFKJDEP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x142AC690)
#define FNCKOFKJDEP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x142AC400)
#define FNCKOFKJDEP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x142AC920)
#define FNCKOFKJDEP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x142AC000)
#define FNCKOFKJDEP_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x142AC840)
#define FNCKOFKJDEP_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x142ABEB0)
#define FNCKOFKJDEP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x142AC2A0)
#define FNCKOFKJDEP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x142AC490)
#define FNCKOFKJDEP__CTOR_OFFSET UNITYSDK_OFFSET(0x142AC680)

inline static constexpr unsigned int FNCKOFKJDEP_TypeDefinitionIndex = 64001;

class FNCKOFKJDEP : public ::LNODBDPJGFL
{
public:
	::System::Collections::Generic::List_1<::System::String*>* JCDKKGFDJPN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCKOFKJDEP__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FNCKOFKJDEP_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FNCKOFKJDEP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FNCKOFKJDEP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCKOFKJDEP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCKOFKJDEP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FNCKOFKJDEP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FNCKOFKJDEP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FNCKOFKJDEP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FNCKOFKJDEP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FNCKOFKJDEP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FNCKOFKJDEP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FNCKOFKJDEP_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::FNCKOFKJDEP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FNCKOFKJDEP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FNCKOFKJDEP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
