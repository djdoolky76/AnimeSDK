#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/NDDGJMFPAKF.h"
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

#define KNHLFNGLMNJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x168216D0)
#define KNHLFNGLMNJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x168211C0)
#define KNHLFNGLMNJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x168217E0)
#define KNHLFNGLMNJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16822340)
#define KNHLFNGLMNJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x168217D0)
#define KNHLFNGLMNJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x168221E0)
#define KNHLFNGLMNJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16821220)
#define KNHLFNGLMNJ_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x168224F0)
#define KNHLFNGLMNJ_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16821050)
#define KNHLFNGLMNJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16821640)
#define KNHLFNGLMNJ_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x168211B0)
#define KNHLFNGLMNJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16821860)
#define KNHLFNGLMNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x168221D0)

inline static constexpr unsigned int KNHLFNGLMNJ_TypeDefinitionIndex = 85371;

class KNHLFNGLMNJ : public ::LNODBDPJGFL
{
public:
	::System::String* KDEFPBLCEHB; // 0x50
	::System::String* JEJABEHHBIJ; // 0x58
	::System::String* KGJGBAJEAPJ; // 0x60
	::System::String* KIHGNGKBADE; // 0x68
	::System::Boolean BJHJJDDIFMK; // 0x70
	::System::Byte _padding0[0x3];
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHLFNGLMNJ__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KNHLFNGLMNJ_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHLFNGLMNJ_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KNHLFNGLMNJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KNHLFNGLMNJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHLFNGLMNJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHLFNGLMNJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KNHLFNGLMNJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KNHLFNGLMNJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KNHLFNGLMNJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KNHLFNGLMNJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KNHLFNGLMNJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::KNHLFNGLMNJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KNHLFNGLMNJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KNHLFNGLMNJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KNHLFNGLMNJ_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KNHLFNGLMNJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
