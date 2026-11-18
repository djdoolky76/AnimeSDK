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
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define PIJFJAAGAFM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13716DB0)
#define PIJFJAAGAFM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13716660)
#define PIJFJAAGAFM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13716EC0)
#define PIJFJAAGAFM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13717A60)
#define PIJFJAAGAFM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13716EB0)
#define PIJFJAAGAFM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13717CF0)
#define PIJFJAAGAFM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x137166C0)
#define PIJFJAAGAFM_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x13717C10)
#define PIJFJAAGAFM_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x13716560)
#define PIJFJAAGAFM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13716D40)
#define PIJFJAAGAFM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13716F40)
#define PIJFJAAGAFM__CTOR_OFFSET UNITYSDK_OFFSET(0x137179F0)

inline static constexpr unsigned int PIJFJAAGAFM_TypeDefinitionIndex = 41263;

class PIJFJAAGAFM : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicInt* CJLKFOGFONE; // 0x50
	::MoleMole::Config::DynamicString* FLFOEOLECPH; // 0x58
	::System::Int32 KOPONDLAANH; // 0x60
	::System::Boolean HFBPONNNLBA; // 0x64
	::System::Boolean BOHGJEPJOFN; // 0x65
	::System::Boolean FHOEKBDBBEO; // 0x66
	::System::Byte _padding0[0x1];
	::System::Int32 BHMFDMBFEKP; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJFJAAGAFM__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PIJFJAAGAFM_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PIJFJAAGAFM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PIJFJAAGAFM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJFJAAGAFM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJFJAAGAFM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PIJFJAAGAFM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PIJFJAAGAFM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PIJFJAAGAFM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PIJFJAAGAFM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PIJFJAAGAFM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PIJFJAAGAFM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PIJFJAAGAFM_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::PIJFJAAGAFM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PIJFJAAGAFM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PIJFJAAGAFM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
