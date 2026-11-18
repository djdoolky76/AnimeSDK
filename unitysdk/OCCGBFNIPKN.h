#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OCCGBFNIPKN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xB307F40)
#define OCCGBFNIPKN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xB307BF0)
#define OCCGBFNIPKN_FROMFLX_OFFSET UNITYSDK_OFFSET(0xB308050)
#define OCCGBFNIPKN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xB308580)
#define OCCGBFNIPKN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xB308040)
#define OCCGBFNIPKN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xB308730)
#define OCCGBFNIPKN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xB307C50)
#define OCCGBFNIPKN_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xB308890)
#define OCCGBFNIPKN_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xB307980)
#define OCCGBFNIPKN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xB307ED0)
#define OCCGBFNIPKN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xB3080D0)
#define OCCGBFNIPKN__CTOR_OFFSET UNITYSDK_OFFSET(0xB308570)

inline static constexpr unsigned int OCCGBFNIPKN_TypeDefinitionIndex = 82775;

class OCCGBFNIPKN : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* CJLKFOGFONE; // 0x50
	::System::String* BODGHKHEOJF; // 0x58
	::UnityEngine::Vector3 GPIOJBLKFAJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCGBFNIPKN__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OCCGBFNIPKN_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OCCGBFNIPKN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OCCGBFNIPKN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCGBFNIPKN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCGBFNIPKN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OCCGBFNIPKN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::OCCGBFNIPKN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OCCGBFNIPKN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OCCGBFNIPKN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::OCCGBFNIPKN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OCCGBFNIPKN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OCCGBFNIPKN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OCCGBFNIPKN_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OCCGBFNIPKN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OCCGBFNIPKN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
