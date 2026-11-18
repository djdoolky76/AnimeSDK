#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BEMPCGDMGEG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1506FD40)
#define BEMPCGDMGEG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1506F9F0)
#define BEMPCGDMGEG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1506FE50)
#define BEMPCGDMGEG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15070590)
#define BEMPCGDMGEG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1506FE40)
#define BEMPCGDMGEG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15070430)
#define BEMPCGDMGEG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1506FA50)
#define BEMPCGDMGEG_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15070740)
#define BEMPCGDMGEG_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1506F8F0)
#define BEMPCGDMGEG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1506FCE0)
#define BEMPCGDMGEG_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x1506F9E0)
#define BEMPCGDMGEG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1506FED0)
#define BEMPCGDMGEG__CTOR_OFFSET UNITYSDK_OFFSET(0x15070420)

inline static constexpr unsigned int BEMPCGDMGEG_TypeDefinitionIndex = 47587;

class BEMPCGDMGEG : public ::LNODBDPJGFL
{
public:
	::System::String* NDLOILGAOKA; // 0x50
	::MoleMole::Config::DamageElementType JLEKIOBFKMP; // 0x58
	::MoleMole::Config::EVariantElement KNCJBOIAAPF; // 0x5C
	::MoleMole::Config::EVariantElement NIMLGHDAKME; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMPCGDMGEG__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BEMPCGDMGEG_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMPCGDMGEG_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BEMPCGDMGEG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BEMPCGDMGEG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMPCGDMGEG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMPCGDMGEG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BEMPCGDMGEG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BEMPCGDMGEG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BEMPCGDMGEG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BEMPCGDMGEG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BEMPCGDMGEG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BEMPCGDMGEG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::BEMPCGDMGEG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BEMPCGDMGEG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BEMPCGDMGEG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BEMPCGDMGEG_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
