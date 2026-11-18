#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/POOKDOMDEGK.h"
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

#define KICAKIFFIII_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14FDF2F0)
#define KICAKIFFIII_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14FDEDA0)
#define KICAKIFFIII_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14FDF400)
#define KICAKIFFIII_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14FE0020)
#define KICAKIFFIII_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14FDF3F0)
#define KICAKIFFIII_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14FE01D0)
#define KICAKIFFIII_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14FDEE00)
#define KICAKIFFIII_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x14FDFF40)
#define KICAKIFFIII_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x14FDECB0)
#define KICAKIFFIII_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14FDF260)
#define KICAKIFFIII_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14FDF480)
#define KICAKIFFIII__CTOR_OFFSET UNITYSDK_OFFSET(0x14FDFF30)

inline static constexpr unsigned int KICAKIFFIII_TypeDefinitionIndex = 49797;

class KICAKIFFIII : public ::LNODBDPJGFL
{
public:
	::System::String* KDEFPBLCEHB; // 0x50
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x58
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x60
	::System::String* KJIJPMFDCIL; // 0x68
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x70
	::System::Boolean BJHJJDDIFMK; // 0x74
	::System::Byte _padding0[0x3];
	::POOKDOMDEGK BIFGGGKJEIO; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICAKIFFIII__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KICAKIFFIII_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KICAKIFFIII_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KICAKIFFIII_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KICAKIFFIII_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KICAKIFFIII_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KICAKIFFIII_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KICAKIFFIII_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::KICAKIFFIII* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KICAKIFFIII*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KICAKIFFIII_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KICAKIFFIII_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KICAKIFFIII_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::KICAKIFFIII* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KICAKIFFIII*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KICAKIFFIII_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
