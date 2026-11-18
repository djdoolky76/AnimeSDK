#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BHEKACANAMA;
class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define ALLOBGALBNB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16D8FC00)
#define ALLOBGALBNB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16D8F820)
#define ALLOBGALBNB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16D8FD10)
#define ALLOBGALBNB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16D906A0)
#define ALLOBGALBNB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16D8FD00)
#define ALLOBGALBNB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16D90460)
#define ALLOBGALBNB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16D8F880)
#define ALLOBGALBNB_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16D905C0)
#define ALLOBGALBNB_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16D8F720)
#define ALLOBGALBNB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16D8FB70)
#define ALLOBGALBNB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16D8FD90)
#define ALLOBGALBNB__CTOR_OFFSET UNITYSDK_OFFSET(0x16D903F0)

inline static constexpr unsigned int ALLOBGALBNB_TypeDefinitionIndex = 65884;

class ALLOBGALBNB : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* CJLKFOGFONE; // 0x50
	::MoleMole::Config::DynamicString* DCJCHGOGLMF; // 0x58
	::MoleMole::Config::DynamicInt* NOOLOILNGPL; // 0x60
	::BHEKACANAMA* PMOEAFACNLO; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLOBGALBNB__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ALLOBGALBNB_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ALLOBGALBNB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ALLOBGALBNB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLOBGALBNB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLOBGALBNB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ALLOBGALBNB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ALLOBGALBNB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ALLOBGALBNB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ALLOBGALBNB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ALLOBGALBNB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ALLOBGALBNB_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::ALLOBGALBNB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ALLOBGALBNB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ALLOBGALBNB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ALLOBGALBNB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
