#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TeamRelationship.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PALCGECFOCG_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x11B4FD70)
#define PALCGECFOCG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11B4F440)
#define PALCGECFOCG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11B4EE00)
#define PALCGECFOCG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11B4F550)
#define PALCGECFOCG_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x11B4ED60)
#define PALCGECFOCG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11B4FF70)
#define PALCGECFOCG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11B4F540)
#define PALCGECFOCG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11B4FE10)
#define PALCGECFOCG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11B4EE60)
#define PALCGECFOCG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11B4F3D0)
#define PALCGECFOCG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11B4F5D0)
#define PALCGECFOCG__CTOR_OFFSET UNITYSDK_OFFSET(0x11B4FD60)

inline static constexpr unsigned int PALCGECFOCG_TypeDefinitionIndex = 44056;

class PALCGECFOCG : public ::OOHOOAFNBNF
{
public:
	::System::Collections::Generic::List_1<::System::String*>* CPJBPBLIGHG; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* AOMMIFFLIHK; // 0x28
	::System::Boolean ADEAGPILFMH; // 0x30
	::System::Boolean AAEGCDKBAGM; // 0x31
	::System::Byte _padding0[0x2];
	::MoleMole::Config::TeamRelationship DJOBCCBDGHK; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PALCGECFOCG__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + PALCGECFOCG_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PALCGECFOCG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PALCGECFOCG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PALCGECFOCG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PALCGECFOCG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PALCGECFOCG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PALCGECFOCG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + PALCGECFOCG_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PALCGECFOCG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PALCGECFOCG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PALCGECFOCG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PALCGECFOCG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::PALCGECFOCG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PALCGECFOCG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PALCGECFOCG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
