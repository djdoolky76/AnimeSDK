#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMHCMJPNOOP.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class PAMFLCKHJPA;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicString; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DJAHFGLKCIJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19D65F30)
#define DJAHFGLKCIJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19D65890)
#define DJAHFGLKCIJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19D66040)
#define DJAHFGLKCIJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19D672D0)
#define DJAHFGLKCIJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19D66030)
#define DJAHFGLKCIJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19D67170)
#define DJAHFGLKCIJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19D658F0)
#define DJAHFGLKCIJ_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x19D67480)
#define DJAHFGLKCIJ_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x19D65790)
#define DJAHFGLKCIJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19D65E60)
#define DJAHFGLKCIJ_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x19D65880)
#define DJAHFGLKCIJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19D660C0)
#define DJAHFGLKCIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19D67160)

inline static constexpr unsigned int DJAHFGLKCIJ_TypeDefinitionIndex = 56863;

class DJAHFGLKCIJ : public ::LNODBDPJGFL
{
public:
	::System::String* BPOPIDAAKAH; // 0x50
	::MoleMole::Config::DynamicString* EFAIHJCEDKI; // 0x58
	::System::String* KIHGNGKBADE; // 0x60
	::MoleMole::Config::ConfigPosRot* MOBOLGIAGAB; // 0x68
	::PAMFLCKHJPA* FHOJEAEANAL; // 0x70
	::MoleMole::Config::EffectAutoDynamicValue* CAPBKNPEFLG; // 0x78
	::System::Boolean NEEIDLJEOKI; // 0x80
	::System::Boolean HDONNHBBJJG; // 0x81
	::System::Byte _padding0[0x2];
	::DMHCMJPNOOP GOCKMCOJIHG; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAHFGLKCIJ__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DJAHFGLKCIJ_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAHFGLKCIJ_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DJAHFGLKCIJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DJAHFGLKCIJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAHFGLKCIJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAHFGLKCIJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DJAHFGLKCIJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DJAHFGLKCIJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DJAHFGLKCIJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DJAHFGLKCIJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DJAHFGLKCIJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DJAHFGLKCIJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DJAHFGLKCIJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DJAHFGLKCIJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DJAHFGLKCIJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DJAHFGLKCIJ_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
