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

#define ILCIHMKAKJF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13817880)
#define ILCIHMKAKJF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13817530)
#define ILCIHMKAKJF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13817990)
#define ILCIHMKAKJF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13817EC0)
#define ILCIHMKAKJF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13817980)
#define ILCIHMKAKJF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13818070)
#define ILCIHMKAKJF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13817590)
#define ILCIHMKAKJF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x138181D0)
#define ILCIHMKAKJF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x138172D0)
#define ILCIHMKAKJF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13817810)
#define ILCIHMKAKJF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13817A10)
#define ILCIHMKAKJF__CTOR_OFFSET UNITYSDK_OFFSET(0x13817EB0)

inline static constexpr unsigned int ILCIHMKAKJF_TypeDefinitionIndex = 73378;

class ILCIHMKAKJF : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* CJLKFOGFONE; // 0x50
	::System::String* BODGHKHEOJF; // 0x58
	::UnityEngine::Vector3 MKCOINJLFJJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCIHMKAKJF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ILCIHMKAKJF_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ILCIHMKAKJF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ILCIHMKAKJF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCIHMKAKJF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCIHMKAKJF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ILCIHMKAKJF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ILCIHMKAKJF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ILCIHMKAKJF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ILCIHMKAKJF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ILCIHMKAKJF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ILCIHMKAKJF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ILCIHMKAKJF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ILCIHMKAKJF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ILCIHMKAKJF_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ILCIHMKAKJF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
