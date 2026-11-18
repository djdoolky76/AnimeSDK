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
class LNODBDPJGFL;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKOINLACCOF_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x15578FA0)
#define PKOINLACCOF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15577DF0)
#define PKOINLACCOF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x155775B0)
#define PKOINLACCOF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15577F00)
#define PKOINLACCOF_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x15577510)
#define PKOINLACCOF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15579040)
#define PKOINLACCOF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15577EF0)
#define PKOINLACCOF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15578E40)
#define PKOINLACCOF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15577610)
#define PKOINLACCOF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15577D50)
#define PKOINLACCOF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15577F80)
#define PKOINLACCOF__CTOR_OFFSET UNITYSDK_OFFSET(0x15578E30)

inline static constexpr unsigned int PKOINLACCOF_TypeDefinitionIndex = 39146;

class PKOINLACCOF : public ::OOHOOAFNBNF
{
public:
	::System::Collections::Generic::List_1<::System::String*>* AKAMBJDHJII; // 0x20
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* GKAOFEIFPHN; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::Config::TeamRelationship>* CEOLDPMBINO; // 0x30
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* DPHCCIAEGGB; // 0x38
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* OLCPOBFFHKN; // 0x40
	::System::Boolean BGGGJIIEPKJ; // 0x48
	::System::Boolean DBAPJFCMOGD; // 0x49
	::System::Boolean ABKAAAGELHP; // 0x4A
	::System::Boolean EIPKPDPPPAI; // 0x4B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOINLACCOF__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + PKOINLACCOF_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PKOINLACCOF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PKOINLACCOF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOINLACCOF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOINLACCOF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PKOINLACCOF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PKOINLACCOF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PKOINLACCOF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PKOINLACCOF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PKOINLACCOF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PKOINLACCOF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + PKOINLACCOF_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::PKOINLACCOF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PKOINLACCOF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PKOINLACCOF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
