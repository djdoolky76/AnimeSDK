#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFFDAGAIBJD.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/UnityEngine/Vector3.h"
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

#define KAOFJLANAND_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16328130)
#define KAOFJLANAND_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16327CA0)
#define KAOFJLANAND_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16328240)
#define KAOFJLANAND_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16328E00)
#define KAOFJLANAND_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16328230)
#define KAOFJLANAND_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16328BC0)
#define KAOFJLANAND_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16327D00)
#define KAOFJLANAND_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16328D20)
#define KAOFJLANAND_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16327B90)
#define KAOFJLANAND_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x163280A0)
#define KAOFJLANAND_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x163282C0)
#define KAOFJLANAND__CTOR_OFFSET UNITYSDK_OFFSET(0x16328BB0)

inline static constexpr unsigned int KAOFJLANAND_TypeDefinitionIndex = 60986;

class KAOFJLANAND : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* MNNMMCPFCKL; // 0x50
	::MoleMole::Config::DynamicFloat* BOPEFCOMEGN; // 0x58
	::MoleMole::Config::DynamicFloat* KFPMEAKBDIB; // 0x60
	::MoleMole::Config::DynamicFloat* KGJCFEGHKHB; // 0x68
	::DFFDAGAIBJD CAFBNIOANLL; // 0x70
	::UnityEngine::Vector3 EOJAGAIMAIG; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOFJLANAND__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KAOFJLANAND_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KAOFJLANAND_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KAOFJLANAND_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOFJLANAND_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOFJLANAND_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KAOFJLANAND_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::KAOFJLANAND* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KAOFJLANAND*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KAOFJLANAND_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KAOFJLANAND_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KAOFJLANAND_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KAOFJLANAND_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::KAOFJLANAND* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KAOFJLANAND*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KAOFJLANAND_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
