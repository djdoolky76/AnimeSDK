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

#define BCMEPLKMFOK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18227520)
#define BCMEPLKMFOK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18226FB0)
#define BCMEPLKMFOK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18227630)
#define BCMEPLKMFOK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x182280E0)
#define BCMEPLKMFOK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x18227620)
#define BCMEPLKMFOK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x18228290)
#define BCMEPLKMFOK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18227010)
#define BCMEPLKMFOK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x18228000)
#define BCMEPLKMFOK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x18226EC0)
#define BCMEPLKMFOK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x182274A0)
#define BCMEPLKMFOK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x182276B0)
#define BCMEPLKMFOK__CTOR_OFFSET UNITYSDK_OFFSET(0x18227FF0)

inline static constexpr unsigned int BCMEPLKMFOK_TypeDefinitionIndex = 71348;

class BCMEPLKMFOK : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x50
	::System::String* KDEFPBLCEHB; // 0x58
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x60
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x68
	::System::Boolean JOOADFHJGDD; // 0x6C
	::System::Boolean BJHJJDDIFMK; // 0x6D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMEPLKMFOK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BCMEPLKMFOK_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BCMEPLKMFOK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BCMEPLKMFOK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMEPLKMFOK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMEPLKMFOK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BCMEPLKMFOK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BCMEPLKMFOK_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::BCMEPLKMFOK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BCMEPLKMFOK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BCMEPLKMFOK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BCMEPLKMFOK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BCMEPLKMFOK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BCMEPLKMFOK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BCMEPLKMFOK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BCMEPLKMFOK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
