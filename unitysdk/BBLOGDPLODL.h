#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
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
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BBLOGDPLODL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x143C8C70)
#define BBLOGDPLODL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x143C8780)
#define BBLOGDPLODL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x143C8D80)
#define BBLOGDPLODL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x143C9630)
#define BBLOGDPLODL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x143C8D70)
#define BBLOGDPLODL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x143C98C0)
#define BBLOGDPLODL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x143C87E0)
#define BBLOGDPLODL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x143C97E0)
#define BBLOGDPLODL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x143C8690)
#define BBLOGDPLODL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x143C8BE0)
#define BBLOGDPLODL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x143C8E00)
#define BBLOGDPLODL__CTOR_OFFSET UNITYSDK_OFFSET(0x143C9620)

inline static constexpr unsigned int BBLOGDPLODL_TypeDefinitionIndex = 91062;

class BBLOGDPLODL : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicString* DCJCHGOGLMF; // 0x50
	::System::String* KDEFPBLCEHB; // 0x58
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x60
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x68
	::System::Boolean BJHJJDDIFMK; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLOGDPLODL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BBLOGDPLODL_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BBLOGDPLODL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BBLOGDPLODL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLOGDPLODL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLOGDPLODL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BBLOGDPLODL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BBLOGDPLODL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BBLOGDPLODL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BBLOGDPLODL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BBLOGDPLODL_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BBLOGDPLODL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BBLOGDPLODL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BBLOGDPLODL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BBLOGDPLODL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BBLOGDPLODL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
