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
namespace System { template <typename T> class Action_1; }

#define INPDNIJNBJL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19439610)
#define INPDNIJNBJL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19439170)
#define INPDNIJNBJL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19439720)
#define INPDNIJNBJL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1943A160)
#define INPDNIJNBJL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19439710)
#define INPDNIJNBJL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1943A000)
#define INPDNIJNBJL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x194391D0)
#define INPDNIJNBJL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1943A310)
#define INPDNIJNBJL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x19439080)
#define INPDNIJNBJL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x194395A0)
#define INPDNIJNBJL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x194397A0)
#define INPDNIJNBJL__CTOR_OFFSET UNITYSDK_OFFSET(0x19439FF0)

inline static constexpr unsigned int INPDNIJNBJL_TypeDefinitionIndex = 54524;

class INPDNIJNBJL : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x50
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x58
	::System::Boolean IDDACADHPKN; // 0x60
	::System::Byte _padding0[0x3];
	::MoleMole::Config::EVariantElement KNCJBOIAAPF; // 0x64
	::MoleMole::Config::PropertyModifyFunction HDCIHCKELCC; // 0x68
	::MoleMole::Config::DamageElementType JLEKIOBFKMP; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPDNIJNBJL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + INPDNIJNBJL_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + INPDNIJNBJL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + INPDNIJNBJL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPDNIJNBJL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INPDNIJNBJL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + INPDNIJNBJL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::INPDNIJNBJL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::INPDNIJNBJL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + INPDNIJNBJL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::INPDNIJNBJL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::INPDNIJNBJL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + INPDNIJNBJL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + INPDNIJNBJL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + INPDNIJNBJL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + INPDNIJNBJL_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
