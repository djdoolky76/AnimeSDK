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
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define EDHAPDJAABI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x158956F0)
#define EDHAPDJAABI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15895170)
#define EDHAPDJAABI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15895800)
#define EDHAPDJAABI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15896270)
#define EDHAPDJAABI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x158957F0)
#define EDHAPDJAABI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15896420)
#define EDHAPDJAABI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x158951D0)
#define EDHAPDJAABI_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15896190)
#define EDHAPDJAABI_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15895070)
#define EDHAPDJAABI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15895640)
#define EDHAPDJAABI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15895880)
#define EDHAPDJAABI__CTOR_OFFSET UNITYSDK_OFFSET(0x15896180)

inline static constexpr unsigned int EDHAPDJAABI_TypeDefinitionIndex = 60928;

class EDHAPDJAABI : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicString* EBLKBABPBEB; // 0x50
	::MoleMole::Config::DynamicInt* BNKHCNKJKFO; // 0x58
	::MoleMole::Config::ConfigPosRot* GKINLPJPGKO; // 0x60
	::MoleMole::Config::DynamicInt* HLBKHEFJAPH; // 0x68
	::MoleMole::Config::DynamicString* KIHGNGKBADE; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHAPDJAABI__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EDHAPDJAABI_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EDHAPDJAABI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EDHAPDJAABI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHAPDJAABI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHAPDJAABI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EDHAPDJAABI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EDHAPDJAABI_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::EDHAPDJAABI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EDHAPDJAABI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EDHAPDJAABI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EDHAPDJAABI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::EDHAPDJAABI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EDHAPDJAABI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EDHAPDJAABI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EDHAPDJAABI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
