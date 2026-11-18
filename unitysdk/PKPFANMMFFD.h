#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGBIPHFDMNN.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define PKPFANMMFFD_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x14BAEB40)
#define PKPFANMMFFD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14BAD970)
#define PKPFANMMFFD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14BAD3A0)
#define PKPFANMMFFD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14BADA80)
#define PKPFANMMFFD_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x14BAD300)
#define PKPFANMMFFD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14BAE990)
#define PKPFANMMFFD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14BADA70)
#define PKPFANMMFFD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14BAEBE0)
#define PKPFANMMFFD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14BAD400)
#define PKPFANMMFFD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14BAD890)
#define PKPFANMMFFD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14BADB00)
#define PKPFANMMFFD__CTOR_OFFSET UNITYSDK_OFFSET(0x14BAE980)

inline static constexpr unsigned int PKPFANMMFFD_TypeDefinitionIndex = 83387;

class PKPFANMMFFD : public ::OOHOOAFNBNF
{
public:
	::MoleMole::Config::DynamicString* IEDKALELHCD; // 0x20
	::MoleMole::Config::DynamicString* KNOONFIPONJ; // 0x28
	::MoleMole::Config::DynamicString* DLCPADEPGAM; // 0x30
	::MoleMole::Config::DynamicString* LPGIABOKNHI; // 0x38
	::MoleMole::Config::DynamicFloat* DCINJKOGAEJ; // 0x40
	::MoleMole::Config::DynamicString* CHGLJKKLCCB; // 0x48
	::MoleMole::Config::DynamicString* BDBAMBAOPAJ; // 0x50
	::MoleMole::Config::DynamicString* BBJJOBFNBAJ; // 0x58
	::FGBIPHFDMNN JCDCDFHLDNF; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFANMMFFD__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + PKPFANMMFFD_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PKPFANMMFFD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PKPFANMMFFD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFANMMFFD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFANMMFFD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PKPFANMMFFD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PKPFANMMFFD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PKPFANMMFFD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PKPFANMMFFD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PKPFANMMFFD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + PKPFANMMFFD_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PKPFANMMFFD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PKPFANMMFFD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PKPFANMMFFD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PKPFANMMFFD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
