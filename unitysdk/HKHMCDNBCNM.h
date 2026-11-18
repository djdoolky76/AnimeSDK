#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class BHEKACANAMA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class LNODBDPJGFL;
class MBFGHGLPIHA;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HKHMCDNBCNM_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x15BD8180)
#define HKHMCDNBCNM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15BD7970)
#define HKHMCDNBCNM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15BD7640)
#define HKHMCDNBCNM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15BD7A80)
#define HKHMCDNBCNM_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x15BD6F30)
#define HKHMCDNBCNM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15BD7FC0)
#define HKHMCDNBCNM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15BD7A70)
#define HKHMCDNBCNM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15BD7E60)
#define HKHMCDNBCNM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15BD76A0)
#define HKHMCDNBCNM_LMNBAMEMKMD_OFFSET UNITYSDK_OFFSET(0x15BD8170)
#define HKHMCDNBCNM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15BD7900)
#define HKHMCDNBCNM_OPNFLKOCBDM_OFFSET UNITYSDK_OFFSET(0x15BD6FD0)
#define HKHMCDNBCNM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15BD7B00)
#define HKHMCDNBCNM__CTOR_OFFSET UNITYSDK_OFFSET(0x15BD7E50)

inline static constexpr unsigned int HKHMCDNBCNM_TypeDefinitionIndex = 79581;

class HKHMCDNBCNM : public ::OOHOOAFNBNF
{
public:
	::BHEKACANAMA* MPJFHGPIFGB; // 0x20
	::System::Collections::Generic::List_1<::MBFGHGLPIHA*>* HHMLBHFNGCP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHMCDNBCNM__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + HKHMCDNBCNM_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>* OPNFLKOCBDM()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHMCDNBCNM_OPNFLKOCBDM_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HKHMCDNBCNM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HKHMCDNBCNM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHMCDNBCNM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHMCDNBCNM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HKHMCDNBCNM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HKHMCDNBCNM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HKHMCDNBCNM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HKHMCDNBCNM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::HKHMCDNBCNM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HKHMCDNBCNM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HKHMCDNBCNM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>* LMNBAMEMKMD()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LNODBDPJGFL*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHMCDNBCNM_LMNBAMEMKMD_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HKHMCDNBCNM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HKHMCDNBCNM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + HKHMCDNBCNM_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
