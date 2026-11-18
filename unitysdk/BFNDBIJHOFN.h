#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFNDBIJHOFN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18231A40)
#define BFNDBIJHOFN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18231130)
#define BFNDBIJHOFN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18231B50)
#define BFNDBIJHOFN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x18232B00)
#define BFNDBIJHOFN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x18231B40)
#define BFNDBIJHOFN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x18232CB0)
#define BFNDBIJHOFN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18231190)
#define BFNDBIJHOFN_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x18232E10)
#define BFNDBIJHOFN_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x18231030)
#define BFNDBIJHOFN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x18231960)
#define BFNDBIJHOFN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18231BD0)
#define BFNDBIJHOFN__CTOR_OFFSET UNITYSDK_OFFSET(0x18232AF0)

inline static constexpr unsigned int BFNDBIJHOFN_TypeDefinitionIndex = 64105;

class BFNDBIJHOFN : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicInt* BNKHCNKJKFO; // 0x50
	::MoleMole::Config::DynamicString* KIHGNGKBADE; // 0x58
	::MoleMole::Config::ConfigPosRot* KPAPPDGCNPE; // 0x60
	::MoleMole::Config::ConfigPosRot* AEGJIEMBDLC; // 0x68
	::System::Collections::Generic::List_1<::System::String*>* ALEOJPJGBAG; // 0x70
	::MoleMole::Config::DynamicString* EBLKBABPBEB; // 0x78
	::MoleMole::Config::ConfigPosRot* BANODIDMKOA; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNDBIJHOFN__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BFNDBIJHOFN_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BFNDBIJHOFN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BFNDBIJHOFN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNDBIJHOFN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNDBIJHOFN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BFNDBIJHOFN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BFNDBIJHOFN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BFNDBIJHOFN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BFNDBIJHOFN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BFNDBIJHOFN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BFNDBIJHOFN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BFNDBIJHOFN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BFNDBIJHOFN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BFNDBIJHOFN_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BFNDBIJHOFN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
