#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
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

#define FPOKDHNDEJN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15CC8040)
#define FPOKDHNDEJN_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x15CC8810)
#define FPOKDHNDEJN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15CC7D30)
#define FPOKDHNDEJN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15CC8150)
#define FPOKDHNDEJN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15CC8660)
#define FPOKDHNDEJN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15CC8140)
#define FPOKDHNDEJN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15CC8500)
#define FPOKDHNDEJN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15CC7D90)
#define FPOKDHNDEJN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15CC7FB0)
#define FPOKDHNDEJN_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x15CC7B60)
#define FPOKDHNDEJN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15CC81D0)
#define FPOKDHNDEJN__CTOR_OFFSET UNITYSDK_OFFSET(0x15CC84F0)

inline static constexpr unsigned int FPOKDHNDEJN_TypeDefinitionIndex = 55965;

class FPOKDHNDEJN : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicFloat* GPIOJBLKFAJ; // 0x40
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOKDHNDEJN__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FPOKDHNDEJN_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FPOKDHNDEJN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FPOKDHNDEJN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOKDHNDEJN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOKDHNDEJN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FPOKDHNDEJN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FPOKDHNDEJN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FPOKDHNDEJN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FPOKDHNDEJN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FPOKDHNDEJN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FPOKDHNDEJN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FPOKDHNDEJN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FPOKDHNDEJN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FPOKDHNDEJN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FPOKDHNDEJN_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};
