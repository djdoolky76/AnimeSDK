#pragma once
#include "unitysdk/unitysdk.h"
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
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define EHGMKDMMNEH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17231240)
#define EHGMKDMMNEH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17230D90)
#define EHGMKDMMNEH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17231350)
#define EHGMKDMMNEH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17231AD0)
#define EHGMKDMMNEH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17231340)
#define EHGMKDMMNEH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17231C80)
#define EHGMKDMMNEH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17230DF0)
#define EHGMKDMMNEH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x17231DE0)
#define EHGMKDMMNEH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x17230C90)
#define EHGMKDMMNEH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x172311C0)
#define EHGMKDMMNEH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x172313D0)
#define EHGMKDMMNEH__CTOR_OFFSET UNITYSDK_OFFSET(0x17231AC0)

inline static constexpr unsigned int EHGMKDMMNEH_TypeDefinitionIndex = 55398;

class EHGMKDMMNEH : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* AFIKJAIPLNG; // 0x50
	::MoleMole::Config::DynamicFloat* CMAGKICODDF; // 0x58
	::MoleMole::Config::ConfigPosRot* FHKGPGCAOCA; // 0x60
	::UnityEngine::Vector3 HLPMNGJMHJO; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGMKDMMNEH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EHGMKDMMNEH_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EHGMKDMMNEH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EHGMKDMMNEH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGMKDMMNEH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGMKDMMNEH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EHGMKDMMNEH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::EHGMKDMMNEH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EHGMKDMMNEH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EHGMKDMMNEH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EHGMKDMMNEH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EHGMKDMMNEH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EHGMKDMMNEH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EHGMKDMMNEH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EHGMKDMMNEH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EHGMKDMMNEH_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
