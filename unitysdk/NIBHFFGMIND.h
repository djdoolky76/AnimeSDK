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
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NIBHFFGMIND_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x12FEC380)
#define NIBHFFGMIND_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12FEBF30)
#define NIBHFFGMIND_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12FEC490)
#define NIBHFFGMIND_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x12FECB80)
#define NIBHFFGMIND_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x12FEC480)
#define NIBHFFGMIND_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12FECA20)
#define NIBHFFGMIND_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12FEBF90)
#define NIBHFFGMIND_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x12FECD30)
#define NIBHFFGMIND_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x12FEBD10)
#define NIBHFFGMIND_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12FEC300)
#define NIBHFFGMIND_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12FEC510)
#define NIBHFFGMIND__CTOR_OFFSET UNITYSDK_OFFSET(0x12FECA10)

inline static constexpr unsigned int NIBHFFGMIND_TypeDefinitionIndex = 43028;

class NIBHFFGMIND : public ::LNODBDPJGFL
{
public:
	::System::Collections::Generic::List_1<::System::String*>* EEONCFADPPF; // 0x50
	::System::String* BODGHKHEOJF; // 0x58
	::System::String* KIHGNGKBADE; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBHFFGMIND__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NIBHFFGMIND_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NIBHFFGMIND_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NIBHFFGMIND_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBHFFGMIND_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBHFFGMIND_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NIBHFFGMIND_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NIBHFFGMIND* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NIBHFFGMIND*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NIBHFFGMIND_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::NIBHFFGMIND* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NIBHFFGMIND*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NIBHFFGMIND_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NIBHFFGMIND_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NIBHFFGMIND_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NIBHFFGMIND_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
