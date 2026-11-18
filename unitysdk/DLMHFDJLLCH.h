#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DLMHFDJLLCH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xFDC4490)
#define DLMHFDJLLCH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFDC4020)
#define DLMHFDJLLCH_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFDC45A0)
#define DLMHFDJLLCH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xFDC4C10)
#define DLMHFDJLLCH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xFDC4590)
#define DLMHFDJLLCH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xFDC4DC0)
#define DLMHFDJLLCH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFDC4080)
#define DLMHFDJLLCH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xFDC4F20)
#define DLMHFDJLLCH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xFDC3F20)
#define DLMHFDJLLCH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xFDC4410)
#define DLMHFDJLLCH_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0xFDC4010)
#define DLMHFDJLLCH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFDC4620)
#define DLMHFDJLLCH__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC4C00)

inline static constexpr unsigned int DLMHFDJLLCH_TypeDefinitionIndex = 85113;

class DLMHFDJLLCH : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* KEIKBPKBPHE; // 0x50
	::System::String* NHCJPNOKDNL; // 0x58
	::MoleMole::Config::ConfigPosRot* IBADLOGOCDJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLMHFDJLLCH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DLMHFDJLLCH_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + DLMHFDJLLCH_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DLMHFDJLLCH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DLMHFDJLLCH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLMHFDJLLCH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLMHFDJLLCH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DLMHFDJLLCH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DLMHFDJLLCH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DLMHFDJLLCH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DLMHFDJLLCH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DLMHFDJLLCH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DLMHFDJLLCH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DLMHFDJLLCH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DLMHFDJLLCH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DLMHFDJLLCH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DLMHFDJLLCH_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
