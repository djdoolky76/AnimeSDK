#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class LNODBDPJGFL;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MHMANKBKGMB_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x1318E620)
#define MHMANKBKGMB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1318D5B0)
#define MHMANKBKGMB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1318CE80)
#define MHMANKBKGMB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1318D6C0)
#define MHMANKBKGMB_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x1318CDE0)
#define MHMANKBKGMB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1318E6C0)
#define MHMANKBKGMB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1318D6B0)
#define MHMANKBKGMB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1318E870)
#define MHMANKBKGMB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1318CEE0)
#define MHMANKBKGMB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1318D4E0)
#define MHMANKBKGMB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1318D740)
#define MHMANKBKGMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1318E610)

inline static constexpr unsigned int MHMANKBKGMB_TypeDefinitionIndex = 78106;

class MHMANKBKGMB : public ::OOHOOAFNBNF
{
public:
	::MoleMole::Config::DynamicFloat* FLFLHOEDKAK; // 0x20
	::MoleMole::Config::DynamicFloat* EAGGMLDNIKP; // 0x28
	::MoleMole::Config::DynamicFloat* FLNNFJDAJHF; // 0x30
	::MoleMole::Config::DynamicFloat* ANHKMOCIDHD; // 0x38
	::MoleMole::Config::DynamicFloat* GOHOCNALAEH; // 0x40
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* GPALIIKFGEH; // 0x48
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* CIDJBAJLJIB; // 0x50
	::System::Boolean OKDBAMKJKGM; // 0x58
	::System::Boolean FGANJDGENBP; // 0x59

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMANKBKGMB__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + MHMANKBKGMB_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MHMANKBKGMB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MHMANKBKGMB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMANKBKGMB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMANKBKGMB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MHMANKBKGMB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + MHMANKBKGMB_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::MHMANKBKGMB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MHMANKBKGMB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MHMANKBKGMB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MHMANKBKGMB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MHMANKBKGMB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::MHMANKBKGMB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MHMANKBKGMB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MHMANKBKGMB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
