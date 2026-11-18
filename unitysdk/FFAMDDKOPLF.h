#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BHEKACANAMA;
class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define FFAMDDKOPLF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15E5CC40)
#define FFAMDDKOPLF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15E5C4A0)
#define FFAMDDKOPLF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15E5CD50)
#define FFAMDDKOPLF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15E5E260)
#define FFAMDDKOPLF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15E5CD40)
#define FFAMDDKOPLF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15E5E020)
#define FFAMDDKOPLF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15E5C500)
#define FFAMDDKOPLF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15E5E180)
#define FFAMDDKOPLF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15E5C3A0)
#define FFAMDDKOPLF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15E5CB20)
#define FFAMDDKOPLF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15E5CDD0)
#define FFAMDDKOPLF__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5E010)

inline static constexpr unsigned int FFAMDDKOPLF_TypeDefinitionIndex = 64675;

class FFAMDDKOPLF : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicInt* NEDLIHJNGMP; // 0x50
	::MoleMole::Config::DynamicInt* NFJGDDPEGHG; // 0x58
	::MoleMole::Config::DynamicInt* BNKHCNKJKFO; // 0x60
	::BHEKACANAMA* GLJNKHNJFCA; // 0x68
	::BHEKACANAMA* IKIHNKMPAKL; // 0x70
	::MoleMole::Config::ConfigPosRot* KPAPPDGCNPE; // 0x78
	::MoleMole::Config::DynamicFloat* CLHBNIDCAEE; // 0x80
	::MoleMole::Config::DynamicFloat* HGLLPLIJCME; // 0x88
	::BHEKACANAMA* PNEEEFHBDHM; // 0x90
	::MoleMole::Config::DynamicString* EBLKBABPBEB; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFAMDDKOPLF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FFAMDDKOPLF_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FFAMDDKOPLF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FFAMDDKOPLF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFAMDDKOPLF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFAMDDKOPLF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FFAMDDKOPLF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FFAMDDKOPLF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FFAMDDKOPLF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FFAMDDKOPLF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FFAMDDKOPLF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FFAMDDKOPLF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FFAMDDKOPLF_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::FFAMDDKOPLF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FFAMDDKOPLF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FFAMDDKOPLF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
