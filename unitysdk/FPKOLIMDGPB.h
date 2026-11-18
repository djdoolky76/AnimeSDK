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

#define FPKOLIMDGPB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11D93C70)
#define FPKOLIMDGPB_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x11D94440)
#define FPKOLIMDGPB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11D93960)
#define FPKOLIMDGPB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11D93D80)
#define FPKOLIMDGPB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11D94290)
#define FPKOLIMDGPB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11D93D70)
#define FPKOLIMDGPB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11D94130)
#define FPKOLIMDGPB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11D939C0)
#define FPKOLIMDGPB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11D93BE0)
#define FPKOLIMDGPB_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x11D93810)
#define FPKOLIMDGPB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11D93E00)
#define FPKOLIMDGPB__CTOR_OFFSET UNITYSDK_OFFSET(0x11D94120)

inline static constexpr unsigned int FPKOLIMDGPB_TypeDefinitionIndex = 52251;

class FPKOLIMDGPB : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicFloat* GPIOJBLKFAJ; // 0x40
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKOLIMDGPB__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FPKOLIMDGPB_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FPKOLIMDGPB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FPKOLIMDGPB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKOLIMDGPB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKOLIMDGPB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FPKOLIMDGPB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FPKOLIMDGPB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FPKOLIMDGPB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FPKOLIMDGPB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FPKOLIMDGPB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FPKOLIMDGPB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FPKOLIMDGPB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FPKOLIMDGPB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FPKOLIMDGPB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FPKOLIMDGPB_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};
