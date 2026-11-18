#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COOBEELPPME.h"
#include "unitysdk/NNKCMCGFGIB.h"
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

#define OKDIOFIMOKK_DCMEIPMELGP_OFFSET UNITYSDK_OFFSET(0xFB92A40)
#define OKDIOFIMOKK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xFB92450)
#define OKDIOFIMOKK_ECFODLPONPG_OFFSET UNITYSDK_OFFSET(0xFB91ED0)
#define OKDIOFIMOKK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFB92080)
#define OKDIOFIMOKK_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFB92560)
#define OKDIOFIMOKK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xFB92C80)
#define OKDIOFIMOKK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xFB92550)
#define OKDIOFIMOKK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xFB92B20)
#define OKDIOFIMOKK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFB920E0)
#define OKDIOFIMOKK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xFB92400)
#define OKDIOFIMOKK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFB925E0)
#define OKDIOFIMOKK__CTOR_OFFSET UNITYSDK_OFFSET(0xFB91EC0)

inline static constexpr unsigned int OKDIOFIMOKK_TypeDefinitionIndex = 66088;

class OKDIOFIMOKK : public ::NNKCMCGFGIB
{
public:
	::System::String* ACDCKJKDPGI; // 0x18
	::System::Int32 EGIJNMMGKNI; // 0x20
	::COOBEELPPME OFCALDBHHLN; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDIOFIMOKK__CTOR_OFFSET))(this);
	}

	::System::String* ECFODLPONPG(::KFHNCJALFJK* GBELIHABEDH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::String*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OKDIOFIMOKK_ECFODLPONPG_OFFSET))(this, GBELIHABEDH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OKDIOFIMOKK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OKDIOFIMOKK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::NNKCMCGFGIB* DGNAAPGKIPL()
	{
		return ((::NNKCMCGFGIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDIOFIMOKK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDIOFIMOKK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OKDIOFIMOKK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::String* DCMEIPMELGP(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::String*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OKDIOFIMOKK_DCMEIPMELGP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OKDIOFIMOKK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::OKDIOFIMOKK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OKDIOFIMOKK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OKDIOFIMOKK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::OKDIOFIMOKK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OKDIOFIMOKK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OKDIOFIMOKK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OKDIOFIMOKK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
