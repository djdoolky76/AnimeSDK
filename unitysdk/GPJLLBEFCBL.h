#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/NDDGJMFPAKF.h"
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

#define GPJLLBEFCBL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1491E040)
#define GPJLLBEFCBL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1491DA90)
#define GPJLLBEFCBL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1491E150)
#define GPJLLBEFCBL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1491ED90)
#define GPJLLBEFCBL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1491E140)
#define GPJLLBEFCBL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1491EC30)
#define GPJLLBEFCBL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1491DAF0)
#define GPJLLBEFCBL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1491EF40)
#define GPJLLBEFCBL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1491D980)
#define GPJLLBEFCBL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1491DFC0)
#define GPJLLBEFCBL_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x1491DA80)
#define GPJLLBEFCBL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1491E1D0)
#define GPJLLBEFCBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1491EC20)

inline static constexpr unsigned int GPJLLBEFCBL_TypeDefinitionIndex = 70803;

class GPJLLBEFCBL : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x50
	::System::String* NLMDCHJBIJD; // 0x58
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x60
	::MoleMole::Config::AbilityTargetting BHMLIFIKCEL; // 0x68
	::MoleMole::Config::PropertyModifyFunction HDCIHCKELCC; // 0x6C
	::System::Boolean DLAKDBFAIOA; // 0x70
	::System::Boolean OKABBHMIOOM; // 0x71

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJLLBEFCBL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GPJLLBEFCBL_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJLLBEFCBL_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GPJLLBEFCBL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GPJLLBEFCBL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJLLBEFCBL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJLLBEFCBL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GPJLLBEFCBL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GPJLLBEFCBL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GPJLLBEFCBL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GPJLLBEFCBL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GPJLLBEFCBL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::GPJLLBEFCBL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GPJLLBEFCBL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GPJLLBEFCBL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GPJLLBEFCBL_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GPJLLBEFCBL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
