#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FFMJOLFJNAN_ADJEGCOBCLI_OFFSET UNITYSDK_OFFSET(0x140EF3B0)
#define FFMJOLFJNAN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x140EF920)
#define FFMJOLFJNAN_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x140F01F0)
#define FFMJOLFJNAN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x140EF480)
#define FFMJOLFJNAN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x140EFA30)
#define FFMJOLFJNAN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x140F0390)
#define FFMJOLFJNAN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x140EFA20)
#define FFMJOLFJNAN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x140F0540)
#define FFMJOLFJNAN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x140EF4E0)
#define FFMJOLFJNAN_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x140F02B0)
#define FFMJOLFJNAN_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x140EF2B0)
#define FFMJOLFJNAN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x140EF8B0)
#define FFMJOLFJNAN_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x140EF3A0)
#define FFMJOLFJNAN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x140EFAB0)
#define FFMJOLFJNAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x140EF3C0)
#define FFMJOLFJNAN__CTOR_OFFSET UNITYSDK_OFFSET(0x140F01E0)

inline static constexpr unsigned int FFMJOLFJNAN_TypeDefinitionIndex = 58584;

class FFMJOLFJNAN : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicInt* OJFAKMLOBOB; // 0x50
	::System::String* DBNOMPKOADK; // 0x58
	::MoleMole::Config::AbilityTargetting ENDKPBEFBME; // 0x60
	::MoleMole::Config::BuffGroupName INHOBHGNEAC; // 0x64
	::System::Int32 DGIAGIMPCEA; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMJOLFJNAN__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FFMJOLFJNAN_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMJOLFJNAN_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean ADJEGCOBCLI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMJOLFJNAN_ADJEGCOBCLI_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMJOLFJNAN_TOSTRING_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FFMJOLFJNAN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FFMJOLFJNAN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMJOLFJNAN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMJOLFJNAN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FFMJOLFJNAN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMJOLFJNAN_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FFMJOLFJNAN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FFMJOLFJNAN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FFMJOLFJNAN_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::FFMJOLFJNAN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FFMJOLFJNAN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FFMJOLFJNAN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FFMJOLFJNAN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FFMJOLFJNAN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FFMJOLFJNAN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
