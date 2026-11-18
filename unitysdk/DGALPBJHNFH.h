#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
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
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define DGALPBJHNFH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15A3C2F0)
#define DGALPBJHNFH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15A3BF10)
#define DGALPBJHNFH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15A3C400)
#define DGALPBJHNFH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15A3CAC0)
#define DGALPBJHNFH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15A3C3F0)
#define DGALPBJHNFH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15A3CD50)
#define DGALPBJHNFH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15A3BF70)
#define DGALPBJHNFH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15A3CC70)
#define DGALPBJHNFH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15A3BE20)
#define DGALPBJHNFH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15A3C270)
#define DGALPBJHNFH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15A3C480)
#define DGALPBJHNFH__CTOR_OFFSET UNITYSDK_OFFSET(0x15A3CAB0)

inline static constexpr unsigned int DGALPBJHNFH_TypeDefinitionIndex = 92924;

class DGALPBJHNFH : public ::LNODBDPJGFL
{
public:
	::BHEKACANAMA* NFLFMPKBDGG; // 0x50
	::MoleMole::Config::DynamicFloat* LGICAGMJCIO; // 0x58
	::MoleMole::Config::DynamicInt* FDOGGANACAP; // 0x60
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGALPBJHNFH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DGALPBJHNFH_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DGALPBJHNFH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DGALPBJHNFH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGALPBJHNFH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGALPBJHNFH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DGALPBJHNFH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DGALPBJHNFH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DGALPBJHNFH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DGALPBJHNFH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DGALPBJHNFH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DGALPBJHNFH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DGALPBJHNFH_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::DGALPBJHNFH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DGALPBJHNFH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DGALPBJHNFH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
