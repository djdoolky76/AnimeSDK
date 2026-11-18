#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BHEKACANAMA;
class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define POKDALFNGJO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1D1F7110)
#define POKDALFNGJO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1F6B00)
#define POKDALFNGJO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1D1F7220)
#define POKDALFNGJO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1D1F7E90)
#define POKDALFNGJO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1D1F7210)
#define POKDALFNGJO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1D1F8040)
#define POKDALFNGJO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1D1F6B60)
#define POKDALFNGJO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1D1F7DB0)
#define POKDALFNGJO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1D1F69F0)
#define POKDALFNGJO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1D1F7040)
#define POKDALFNGJO_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x1D1F6AF0)
#define POKDALFNGJO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1D1F72A0)
#define POKDALFNGJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F7DA0)

inline static constexpr unsigned int POKDALFNGJO_TypeDefinitionIndex = 93082;

class POKDALFNGJO : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicInt* DIELDJMJFIK; // 0x50
	::MoleMole::Config::DynamicFloat* GGPPBGBPPJB; // 0x58
	::MoleMole::Config::ConfigPosRot* GKINLPJPGKO; // 0x60
	::MoleMole::Config::DynamicString* EBLKBABPBEB; // 0x68
	::MoleMole::Config::DynamicInt* BNKHCNKJKFO; // 0x70
	::BHEKACANAMA* KEHLMAJNFBC; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKDALFNGJO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + POKDALFNGJO_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + POKDALFNGJO_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + POKDALFNGJO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + POKDALFNGJO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + POKDALFNGJO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POKDALFNGJO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + POKDALFNGJO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + POKDALFNGJO_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + POKDALFNGJO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + POKDALFNGJO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::POKDALFNGJO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::POKDALFNGJO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + POKDALFNGJO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::POKDALFNGJO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::POKDALFNGJO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + POKDALFNGJO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
