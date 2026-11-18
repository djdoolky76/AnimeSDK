#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
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

#define FCEKJPMMPKA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x169C48F0)
#define FCEKJPMMPKA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x169C4450)
#define FCEKJPMMPKA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x169C4A00)
#define FCEKJPMMPKA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x169C5390)
#define FCEKJPMMPKA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x169C49F0)
#define FCEKJPMMPKA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x169C5230)
#define FCEKJPMMPKA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x169C44B0)
#define FCEKJPMMPKA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x169C5540)
#define FCEKJPMMPKA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x169C42F0)
#define FCEKJPMMPKA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x169C4870)
#define FCEKJPMMPKA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x169C4A80)
#define FCEKJPMMPKA__CTOR_OFFSET UNITYSDK_OFFSET(0x169C5220)

inline static constexpr unsigned int FCEKJPMMPKA_TypeDefinitionIndex = 76719;

class FCEKJPMMPKA : public ::LNODBDPJGFL
{
public:
	::System::String* KDEFPBLCEHB; // 0x50
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x58
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x60
	::System::Boolean BJHJJDDIFMK; // 0x68
	::System::Byte _padding0[0x3];
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEKJPMMPKA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FCEKJPMMPKA_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FCEKJPMMPKA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FCEKJPMMPKA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEKJPMMPKA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEKJPMMPKA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FCEKJPMMPKA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FCEKJPMMPKA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FCEKJPMMPKA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FCEKJPMMPKA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FCEKJPMMPKA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FCEKJPMMPKA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FCEKJPMMPKA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FCEKJPMMPKA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FCEKJPMMPKA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FCEKJPMMPKA_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
