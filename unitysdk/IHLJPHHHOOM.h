#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/NDDGJMFPAKF.h"
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
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define IHLJPHHHOOM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x160A57D0)
#define IHLJPHHHOOM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x160A52B0)
#define IHLJPHHHOOM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x160A58E0)
#define IHLJPHHHOOM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x160A6540)
#define IHLJPHHHOOM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x160A58D0)
#define IHLJPHHHOOM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x160A63E0)
#define IHLJPHHHOOM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x160A5310)
#define IHLJPHHHOOM_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x160A6300)
#define IHLJPHHHOOM_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x160A51B0)
#define IHLJPHHHOOM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x160A5740)
#define IHLJPHHHOOM_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x160A52A0)
#define IHLJPHHHOOM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x160A5960)
#define IHLJPHHHOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x160A62F0)

inline static constexpr unsigned int IHLJPHHHOOM_TypeDefinitionIndex = 70807;

class IHLJPHHHOOM : public ::LNODBDPJGFL
{
public:
	::System::String* KIHGNGKBADE; // 0x50
	::MoleMole::Config::DynamicFloat* CJLKFOGFONE; // 0x58
	::MoleMole::Config::DynamicFloat* AFIKJAIPLNG; // 0x60
	::MoleMole::Config::DynamicFloat* CMAGKICODDF; // 0x68
	::UnityEngine::Vector3 HBHLHBOMFDB; // 0x70
	::System::Boolean AAPLENNPDIF; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLJPHHHOOM__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IHLJPHHHOOM_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLJPHHHOOM_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IHLJPHHHOOM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IHLJPHHHOOM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLJPHHHOOM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLJPHHHOOM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IHLJPHHHOOM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IHLJPHHHOOM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IHLJPHHHOOM_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::IHLJPHHHOOM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IHLJPHHHOOM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IHLJPHHHOOM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::IHLJPHHHOOM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IHLJPHHHOOM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IHLJPHHHOOM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IHLJPHHHOOM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
