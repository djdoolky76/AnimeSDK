#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define JNOPLCJDGDL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13AE1EA0)
#define JNOPLCJDGDL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13AE1980)
#define JNOPLCJDGDL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13AE1FB0)
#define JNOPLCJDGDL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13AE2A50)
#define JNOPLCJDGDL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13AE1FA0)
#define JNOPLCJDGDL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13AE2CE0)
#define JNOPLCJDGDL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13AE19E0)
#define JNOPLCJDGDL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x13AE2C00)
#define JNOPLCJDGDL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x13AE1890)
#define JNOPLCJDGDL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13AE1E20)
#define JNOPLCJDGDL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13AE2030)
#define JNOPLCJDGDL__CTOR_OFFSET UNITYSDK_OFFSET(0x13AE2A40)

inline static constexpr unsigned int JNOPLCJDGDL_TypeDefinitionIndex = 73965;

class JNOPLCJDGDL : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x50
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x58
	::System::String* KDEFPBLCEHB; // 0x60
	::System::Boolean BJHJJDDIFMK; // 0x68
	::System::Byte _padding0[0x3];
	::MoleMole::Config::EVariantElement KNCJBOIAAPF; // 0x6C
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x70
	::MoleMole::Config::DamageElementType PGDKBJFNLOG; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOPLCJDGDL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JNOPLCJDGDL_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JNOPLCJDGDL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JNOPLCJDGDL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOPLCJDGDL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOPLCJDGDL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JNOPLCJDGDL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JNOPLCJDGDL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::JNOPLCJDGDL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JNOPLCJDGDL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JNOPLCJDGDL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JNOPLCJDGDL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JNOPLCJDGDL_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::JNOPLCJDGDL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JNOPLCJDGDL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JNOPLCJDGDL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
