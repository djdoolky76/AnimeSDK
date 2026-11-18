#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
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

#define DEKMBHKEDHO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15A388F0)
#define DEKMBHKEDHO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15A38440)
#define DEKMBHKEDHO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15A38A00)
#define DEKMBHKEDHO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15A39480)
#define DEKMBHKEDHO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15A389F0)
#define DEKMBHKEDHO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15A39320)
#define DEKMBHKEDHO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15A384A0)
#define DEKMBHKEDHO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15A39240)
#define DEKMBHKEDHO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15A38340)
#define DEKMBHKEDHO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15A38870)
#define DEKMBHKEDHO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15A38A80)
#define DEKMBHKEDHO__CTOR_OFFSET UNITYSDK_OFFSET(0x15A39230)

inline static constexpr unsigned int DEKMBHKEDHO_TypeDefinitionIndex = 50923;

class DEKMBHKEDHO : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* BNKEEHDFLAG; // 0x50
	::MoleMole::Config::DynamicFloat* ODAMAMPFFOA; // 0x58
	::System::String* JODIOPGJIIC; // 0x60
	::MoleMole::Config::AbilityTargetting ALBCFGOBAEK; // 0x68
	::System::Boolean OKABBHMIOOM; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKMBHKEDHO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DEKMBHKEDHO_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DEKMBHKEDHO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DEKMBHKEDHO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKMBHKEDHO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKMBHKEDHO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DEKMBHKEDHO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DEKMBHKEDHO_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DEKMBHKEDHO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DEKMBHKEDHO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DEKMBHKEDHO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DEKMBHKEDHO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DEKMBHKEDHO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::DEKMBHKEDHO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DEKMBHKEDHO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DEKMBHKEDHO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
