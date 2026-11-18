#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJBFACACPPE.h"
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
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define HJLHAMAFEGD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17B05E00)
#define HJLHAMAFEGD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17B05920)
#define HJLHAMAFEGD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17B05F10)
#define HJLHAMAFEGD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17B06A20)
#define HJLHAMAFEGD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17B05F00)
#define HJLHAMAFEGD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17B06BD0)
#define HJLHAMAFEGD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17B05980)
#define HJLHAMAFEGD_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x17B06940)
#define HJLHAMAFEGD_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x17B05820)
#define HJLHAMAFEGD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17B05D80)
#define HJLHAMAFEGD_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x17B05910)
#define HJLHAMAFEGD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17B05F90)
#define HJLHAMAFEGD__CTOR_OFFSET UNITYSDK_OFFSET(0x17B06930)

inline static constexpr unsigned int HJLHAMAFEGD_TypeDefinitionIndex = 53080;

class HJLHAMAFEGD : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x50
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x58
	::MoleMole::Config::DynamicString* KIHGNGKBADE; // 0x60
	::System::Boolean ONJEOGLLHAN; // 0x68
	::System::Byte _padding0[0x3];
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x6C
	::LJBFACACPPE EHAKJBAKGDL; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLHAMAFEGD__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HJLHAMAFEGD_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLHAMAFEGD_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HJLHAMAFEGD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HJLHAMAFEGD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLHAMAFEGD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJLHAMAFEGD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HJLHAMAFEGD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HJLHAMAFEGD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HJLHAMAFEGD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HJLHAMAFEGD_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::HJLHAMAFEGD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HJLHAMAFEGD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HJLHAMAFEGD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HJLHAMAFEGD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HJLHAMAFEGD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HJLHAMAFEGD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
