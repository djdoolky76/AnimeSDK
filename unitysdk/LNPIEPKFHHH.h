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

#define LNPIEPKFHHH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1A62CB40)
#define LNPIEPKFHHH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A62C6E0)
#define LNPIEPKFHHH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A62CC50)
#define LNPIEPKFHHH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1A62D210)
#define LNPIEPKFHHH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1A62CC40)
#define LNPIEPKFHHH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1A62D020)
#define LNPIEPKFHHH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A62C740)
#define LNPIEPKFHHH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1A62D180)
#define LNPIEPKFHHH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1A62BA30)
#define LNPIEPKFHHH_LJJLPOADMDG_OFFSET UNITYSDK_OFFSET(0x1A62C340)
#define LNPIEPKFHHH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1A62CAE0)
#define LNPIEPKFHHH_MFOGNGGFNML_OFFSET UNITYSDK_OFFSET(0x1A62C280)
#define LNPIEPKFHHH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A62CCD0)
#define LNPIEPKFHHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A62D010)

inline static constexpr unsigned int LNPIEPKFHHH_TypeDefinitionIndex = 57751;

class LNPIEPKFHHH : public ::LNODBDPJGFL
{
public:
	::System::Collections::Generic::List_1<::System::String*>* EOEKPNJGNKF; // 0x50
	::System::Int32 OLMPJNOOEOI; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNPIEPKFHHH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LNPIEPKFHHH_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LNPIEPKFHHH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LNPIEPKFHHH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNPIEPKFHHH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNPIEPKFHHH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LNPIEPKFHHH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LNPIEPKFHHH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LNPIEPKFHHH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LNPIEPKFHHH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::System::Void MFOGNGGFNML(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LNPIEPKFHHH_MFOGNGGFNML_OFFSET))(KECKGDFIALJ);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LNPIEPKFHHH_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LNPIEPKFHHH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void LJJLPOADMDG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LNPIEPKFHHH_LJJLPOADMDG_OFFSET))(this, KECKGDFIALJ);
	}

	static ::LNPIEPKFHHH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LNPIEPKFHHH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LNPIEPKFHHH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LNPIEPKFHHH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
