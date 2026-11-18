#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
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

#define GPNNHMHDELM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15B35F20)
#define GPNNHMHDELM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15B35C40)
#define GPNNHMHDELM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15B36030)
#define GPNNHMHDELM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15B36620)
#define GPNNHMHDELM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15B36020)
#define GPNNHMHDELM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15B364C0)
#define GPNNHMHDELM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15B35CA0)
#define GPNNHMHDELM_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15B363E0)
#define GPNNHMHDELM_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15B35B40)
#define GPNNHMHDELM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15B35EC0)
#define GPNNHMHDELM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15B360B0)
#define GPNNHMHDELM__CTOR_OFFSET UNITYSDK_OFFSET(0x15B363D0)

inline static constexpr unsigned int GPNNHMHDELM_TypeDefinitionIndex = 84979;

class GPNNHMHDELM : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x50
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNNHMHDELM__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GPNNHMHDELM_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GPNNHMHDELM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GPNNHMHDELM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNNHMHDELM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNNHMHDELM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GPNNHMHDELM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GPNNHMHDELM_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GPNNHMHDELM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GPNNHMHDELM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GPNNHMHDELM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GPNNHMHDELM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::GPNNHMHDELM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GPNNHMHDELM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GPNNHMHDELM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GPNNHMHDELM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
