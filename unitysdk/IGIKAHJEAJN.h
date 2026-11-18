#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDMAEEOPNHM.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABLPDAPPABA;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class LNODBDPJGFL;
class NFCIDHJGOIB;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IGIKAHJEAJN_BMDOEGFHNLD_OFFSET UNITYSDK_OFFSET(0x141D6AD0)
#define IGIKAHJEAJN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x141D4EC0)
#define IGIKAHJEAJN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x141D43E0)
#define IGIKAHJEAJN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x141D4FD0)
#define IGIKAHJEAJN_GAKHPCMMPGA_OFFSET UNITYSDK_OFFSET(0x141D4340)
#define IGIKAHJEAJN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x141D6950)
#define IGIKAHJEAJN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x141D4FC0)
#define IGIKAHJEAJN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x141D6860)
#define IGIKAHJEAJN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x141D4440)
#define IGIKAHJEAJN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x141D4D70)
#define IGIKAHJEAJN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x141D5050)
#define IGIKAHJEAJN__CTOR_OFFSET UNITYSDK_OFFSET(0x141D6850)

inline static constexpr unsigned int IGIKAHJEAJN_TypeDefinitionIndex = 42797;

class IGIKAHJEAJN : public ::OOHOOAFNBNF
{
public:
	::NFCIDHJGOIB* OMMFLIHBBIH; // 0x20
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* BJFBGCGCBKF; // 0x28
	::MoleMole::Config::DynamicFloat* IBPEMBKDCJK; // 0x30
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* AOOBKCNLLCP; // 0x38
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* CBCLMGCHIEJ; // 0x40
	::System::String* ACHADHMLCAO; // 0x48
	::MoleMole::Config::DynamicFloat* GDFMHHKNEHH; // 0x50
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* BMDCGPBDJDJ; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* DPABJDNHJHI; // 0x60
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* PMLINKGNMHJ; // 0x68
	::System::String* OJKDACJCKOJ; // 0x70
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* KEPDAMAAPJF; // 0x78
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* LKOKMNAIKOK; // 0x80
	::EDMAEEOPNHM AMLPLMGCEME; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIKAHJEAJN__CTOR_OFFSET))(this);
	}

	::ABLPDAPPABA* GAKHPCMMPGA(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + IGIKAHJEAJN_GAKHPCMMPGA_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IGIKAHJEAJN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IGIKAHJEAJN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIKAHJEAJN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIKAHJEAJN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IGIKAHJEAJN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::IGIKAHJEAJN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IGIKAHJEAJN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IGIKAHJEAJN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IGIKAHJEAJN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IGIKAHJEAJN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::IGIKAHJEAJN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IGIKAHJEAJN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IGIKAHJEAJN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::ABLPDAPPABA* BMDOEGFHNLD(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK)
	{
		return ((::ABLPDAPPABA*(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*))((::PBYTE)hIl2Cpp + IGIKAHJEAJN_BMDOEGFHNLD_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
