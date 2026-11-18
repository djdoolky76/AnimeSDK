#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JAMHBBGHFAF.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LHHNKBDEMGO;
class LNFCIBHFJHI;
class LNODBDPJGFL;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DICBEJEJOMD_BECBIBJCMNL_OFFSET UNITYSDK_OFFSET(0x19D61640)
#define DICBEJEJOMD_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x19D62610)
#define DICBEJEJOMD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19D61AC0)
#define DICBEJEJOMD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19D61650)
#define DICBEJEJOMD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19D61BD0)
#define DICBEJEJOMD_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x19D615A0)
#define DICBEJEJOMD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19D62300)
#define DICBEJEJOMD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19D61BC0)
#define DICBEJEJOMD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19D624B0)
#define DICBEJEJOMD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19D616B0)
#define DICBEJEJOMD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19D61A30)
#define DICBEJEJOMD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19D61C50)
#define DICBEJEJOMD__CTOR_OFFSET UNITYSDK_OFFSET(0x19D62290)

inline static constexpr unsigned int DICBEJEJOMD_TypeDefinitionIndex = 86945;

class DICBEJEJOMD : public ::OOHOOAFNBNF
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DynamicFloat*>* JFMLELFDPDD; // 0x20
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* KLBJOFKFIHI; // 0x28
	::MoleMole::Config::DynamicFloat* FHCLOBOJOND; // 0x30
	::Il2CppArray<::LHHNKBDEMGO*>* PIDOLKBBHFN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICBEJEJOMD__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + DICBEJEJOMD_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::JAMHBBGHFAF BECBIBJCMNL()
	{
		return ((::JAMHBBGHFAF(*)(::PVOID))((::PBYTE)hIl2Cpp + DICBEJEJOMD_BECBIBJCMNL_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DICBEJEJOMD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DICBEJEJOMD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICBEJEJOMD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DICBEJEJOMD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DICBEJEJOMD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DICBEJEJOMD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DICBEJEJOMD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DICBEJEJOMD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DICBEJEJOMD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DICBEJEJOMD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DICBEJEJOMD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DICBEJEJOMD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + DICBEJEJOMD_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DICBEJEJOMD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
