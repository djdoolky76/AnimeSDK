#pragma once
#include "unitysdk/unitysdk.h"
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
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KHEPELGCEMD_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x14FDBBC0)
#define KHEPELGCEMD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14FDACD0)
#define KHEPELGCEMD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14FDA5D0)
#define KHEPELGCEMD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14FDADE0)
#define KHEPELGCEMD_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x14FDA530)
#define KHEPELGCEMD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14FDBC60)
#define KHEPELGCEMD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14FDADD0)
#define KHEPELGCEMD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14FDBE10)
#define KHEPELGCEMD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14FDA630)
#define KHEPELGCEMD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14FDABF0)
#define KHEPELGCEMD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14FDAE60)
#define KHEPELGCEMD__CTOR_OFFSET UNITYSDK_OFFSET(0x14FDBBB0)

inline static constexpr unsigned int KHEPELGCEMD_TypeDefinitionIndex = 43209;

class KHEPELGCEMD : public ::OOHOOAFNBNF
{
public:
	::MoleMole::Config::DynamicFloat* CJLKFOGFONE; // 0x20
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* NNPIGECAHDB; // 0x28
	::MoleMole::Config::DynamicFloat* BPGIPBDNNEN; // 0x30
	::Il2CppArray<::LHHNKBDEMGO*>* PIDOLKBBHFN; // 0x38
	::MoleMole::Config::DynamicFloat* MDIMJKMBINP; // 0x40
	::MoleMole::Config::DynamicFloat* BKAJIOHKCHJ; // 0x48
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* LAJOMHGHCLO; // 0x50
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* IKMHNDBECFL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEPELGCEMD__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + KHEPELGCEMD_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KHEPELGCEMD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KHEPELGCEMD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEPELGCEMD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEPELGCEMD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KHEPELGCEMD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KHEPELGCEMD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + KHEPELGCEMD_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KHEPELGCEMD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KHEPELGCEMD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KHEPELGCEMD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KHEPELGCEMD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KHEPELGCEMD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KHEPELGCEMD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KHEPELGCEMD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
