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

#define NIGICBFPGFB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11F7FD70)
#define NIGICBFPGFB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11F7FA00)
#define NIGICBFPGFB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11F7FE80)
#define NIGICBFPGFB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11F80590)
#define NIGICBFPGFB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11F7FE70)
#define NIGICBFPGFB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11F80430)
#define NIGICBFPGFB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11F7FA60)
#define NIGICBFPGFB_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x11F80740)
#define NIGICBFPGFB_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x11F7F900)
#define NIGICBFPGFB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11F7FCF0)
#define NIGICBFPGFB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11F7FF00)
#define NIGICBFPGFB__CTOR_OFFSET UNITYSDK_OFFSET(0x11F803C0)

inline static constexpr unsigned int NIGICBFPGFB_TypeDefinitionIndex = 91060;

class NIGICBFPGFB : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicString* KIHGNGKBADE; // 0x50
	::MoleMole::Config::DynamicString* BCCHDJBGFEF; // 0x58
	::MoleMole::Config::DynamicInt* HLBKHEFJAPH; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGICBFPGFB__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NIGICBFPGFB_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NIGICBFPGFB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NIGICBFPGFB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGICBFPGFB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIGICBFPGFB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NIGICBFPGFB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NIGICBFPGFB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NIGICBFPGFB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NIGICBFPGFB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::NIGICBFPGFB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NIGICBFPGFB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NIGICBFPGFB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NIGICBFPGFB_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NIGICBFPGFB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NIGICBFPGFB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
