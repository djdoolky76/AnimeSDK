#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/NDDGJMFPAKF.h"
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
namespace System { template <typename T> class Action_1; }

#define DDNONKPHEIA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1328FA30)
#define DDNONKPHEIA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1328F600)
#define DDNONKPHEIA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1328FB40)
#define DDNONKPHEIA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x132901B0)
#define DDNONKPHEIA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1328FB30)
#define DDNONKPHEIA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13290360)
#define DDNONKPHEIA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1328F660)
#define DDNONKPHEIA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x132904C0)
#define DDNONKPHEIA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1328F500)
#define DDNONKPHEIA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1328F9C0)
#define DDNONKPHEIA_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x1328F5F0)
#define DDNONKPHEIA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1328FBC0)
#define DDNONKPHEIA__CTOR_OFFSET UNITYSDK_OFFSET(0x132901A0)

inline static constexpr unsigned int DDNONKPHEIA_TypeDefinitionIndex = 76376;

class DDNONKPHEIA : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x50
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x58
	::System::Boolean GJIJBENBIIJ; // 0x60
	::System::Byte _padding0[0x3];
	::MoleMole::Config::BaseProperty FOMJCCNGGCP; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNONKPHEIA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DDNONKPHEIA_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNONKPHEIA_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDNONKPHEIA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DDNONKPHEIA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNONKPHEIA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNONKPHEIA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DDNONKPHEIA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DDNONKPHEIA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DDNONKPHEIA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DDNONKPHEIA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDNONKPHEIA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DDNONKPHEIA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DDNONKPHEIA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DDNONKPHEIA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDNONKPHEIA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DDNONKPHEIA_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
