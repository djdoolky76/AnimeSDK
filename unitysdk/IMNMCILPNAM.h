#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class JMNOLMMPKNL;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define IMNMCILPNAM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x194323E0)
#define IMNMCILPNAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19431CE0)
#define IMNMCILPNAM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x194324F0)
#define IMNMCILPNAM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19433300)
#define IMNMCILPNAM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x194324E0)
#define IMNMCILPNAM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x194334B0)
#define IMNMCILPNAM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19431D40)
#define IMNMCILPNAM_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x19433220)
#define IMNMCILPNAM_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x19431BE0)
#define IMNMCILPNAM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19432350)
#define IMNMCILPNAM_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x19431CD0)
#define IMNMCILPNAM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19432570)
#define IMNMCILPNAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19433210)

inline static constexpr unsigned int IMNMCILPNAM_TypeDefinitionIndex = 46198;

class IMNMCILPNAM : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::ConfigPosRot* HFILKHBIDCG; // 0x50
	::System::String* JBHCOILFGCK; // 0x58
	::JMNOLMMPKNL* NALDAHMJFHL; // 0x60
	::System::String* NKFIDAAPAKL; // 0x68
	::MoleMole::Config::ScreenEffectType MFLCCPAHBKN; // 0x70
	::System::Boolean FELBDDACEAJ; // 0x74
	::System::Boolean LIGICMNNJPM; // 0x75

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNMCILPNAM__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IMNMCILPNAM_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNMCILPNAM_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IMNMCILPNAM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IMNMCILPNAM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNMCILPNAM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNMCILPNAM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IMNMCILPNAM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IMNMCILPNAM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IMNMCILPNAM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IMNMCILPNAM_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::IMNMCILPNAM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IMNMCILPNAM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IMNMCILPNAM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IMNMCILPNAM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IMNMCILPNAM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IMNMCILPNAM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
