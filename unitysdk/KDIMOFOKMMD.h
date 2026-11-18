#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/MoleMole/Config/TeamProperty.h"
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
namespace System { template <typename T> class Action_1; }

#define KDIMOFOKMMD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x176F9C10)
#define KDIMOFOKMMD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x176F9870)
#define KDIMOFOKMMD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x176F9D20)
#define KDIMOFOKMMD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x176FA4D0)
#define KDIMOFOKMMD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x176F9D10)
#define KDIMOFOKMMD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x176FA370)
#define KDIMOFOKMMD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x176F98D0)
#define KDIMOFOKMMD_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x176FA680)
#define KDIMOFOKMMD_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x176F97D0)
#define KDIMOFOKMMD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x176F9BA0)
#define KDIMOFOKMMD_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x176F9860)
#define KDIMOFOKMMD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x176F9DA0)
#define KDIMOFOKMMD__CTOR_OFFSET UNITYSDK_OFFSET(0x176FA360)

inline static constexpr unsigned int KDIMOFOKMMD_TypeDefinitionIndex = 60997;

class KDIMOFOKMMD : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x50
	::MoleMole::Config::DynamicFloat* HBOJLFKAOOH; // 0x58
	::MoleMole::Config::TeamProperty EHAKJBAKGDL; // 0x60
	::MoleMole::Config::PropertyModifyFunction HDCIHCKELCC; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIMOFOKMMD__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KDIMOFOKMMD_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIMOFOKMMD_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KDIMOFOKMMD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KDIMOFOKMMD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIMOFOKMMD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIMOFOKMMD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KDIMOFOKMMD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::KDIMOFOKMMD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KDIMOFOKMMD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KDIMOFOKMMD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::KDIMOFOKMMD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KDIMOFOKMMD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KDIMOFOKMMD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KDIMOFOKMMD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KDIMOFOKMMD_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KDIMOFOKMMD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
