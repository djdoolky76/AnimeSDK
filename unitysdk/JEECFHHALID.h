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
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define JEECFHHALID_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18A0B630)
#define JEECFHHALID_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A0AFF0)
#define JEECFHHALID_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18A0B740)
#define JEECFHHALID_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x18A0C520)
#define JEECFHHALID_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x18A0B730)
#define JEECFHHALID_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x18A0C7B0)
#define JEECFHHALID_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18A0B050)
#define JEECFHHALID_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x18A0C6D0)
#define JEECFHHALID_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x18A0AF00)
#define JEECFHHALID_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x18A0B540)
#define JEECFHHALID_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18A0B7C0)
#define JEECFHHALID__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0C510)

inline static constexpr unsigned int JEECFHHALID_TypeDefinitionIndex = 80694;

class JEECFHHALID : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicString* CEKOFFBIPNM; // 0x50
	::MoleMole::Config::DynamicString* GEGDEBBCFJK; // 0x58
	::MoleMole::Config::DynamicString* NCHFGMHCDJP; // 0x60
	::MoleMole::Config::DynamicString* EIOCCBNCEEP; // 0x68
	::MoleMole::Config::DynamicString* MHBEHJHKGGA; // 0x70
	::MoleMole::Config::DynamicString* BPJHJCJKBCN; // 0x78
	::MoleMole::Config::DynamicString* FJPLJNADLNG; // 0x80
	::MoleMole::Config::DynamicString* KIHADHDDHIF; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEECFHHALID__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JEECFHHALID_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JEECFHHALID_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JEECFHHALID_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEECFHHALID_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEECFHHALID_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JEECFHHALID_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::JEECFHHALID* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JEECFHHALID*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JEECFHHALID_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JEECFHHALID_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JEECFHHALID_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JEECFHHALID_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::JEECFHHALID* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JEECFHHALID*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JEECFHHALID_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
