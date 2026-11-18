#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LHKBICIFDBE;
class LNFCIBHFJHI;
class LNODBDPJGFL;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JFDCIFKENCP_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x198A4CE0)
#define JFDCIFKENCP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x198A44F0)
#define JFDCIFKENCP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198A4170)
#define JFDCIFKENCP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x198A4600)
#define JFDCIFKENCP_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x198A3310)
#define JFDCIFKENCP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x198A49C0)
#define JFDCIFKENCP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x198A45F0)
#define JFDCIFKENCP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x198A4B80)
#define JFDCIFKENCP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x198A41D0)
#define JFDCIFKENCP_LMNBAMEMKMD_OFFSET UNITYSDK_OFFSET(0x198A4B70)
#define JFDCIFKENCP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x198A44A0)
#define JFDCIFKENCP_OPNFLKOCBDM_OFFSET UNITYSDK_OFFSET(0x198A33B0)
#define JFDCIFKENCP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x198A4680)
#define JFDCIFKENCP__CTOR_OFFSET UNITYSDK_OFFSET(0x198A49B0)

inline static constexpr unsigned int JFDCIFKENCP_TypeDefinitionIndex = 49658;

class JFDCIFKENCP : public ::OOHOOAFNBNF
{
public:
	::System::Collections::Generic::List_1<::LHKBICIFDBE*>* JOPIOIONCJO; // 0x20
	::System::Boolean FJKIDHKGMAB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDCIFKENCP__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + JFDCIFKENCP_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>* OPNFLKOCBDM()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDCIFKENCP_OPNFLKOCBDM_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JFDCIFKENCP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JFDCIFKENCP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDCIFKENCP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDCIFKENCP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JFDCIFKENCP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::JFDCIFKENCP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JFDCIFKENCP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JFDCIFKENCP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JFDCIFKENCP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>* LMNBAMEMKMD()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDCIFKENCP_LMNBAMEMKMD_OFFSET))(this);
	}

	static ::JFDCIFKENCP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JFDCIFKENCP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JFDCIFKENCP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + JFDCIFKENCP_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JFDCIFKENCP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
