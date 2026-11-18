#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigMovement; }
namespace MoleMole::Config { class ConfigRotation; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GGKEKDDCLKD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16CC2370)
#define GGKEKDDCLKD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16CC2000)
#define GGKEKDDCLKD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16CC2480)
#define GGKEKDDCLKD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16CC2B00)
#define GGKEKDDCLKD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16CC2470)
#define GGKEKDDCLKD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16CC2D90)
#define GGKEKDDCLKD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16CC2060)
#define GGKEKDDCLKD_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16CC2CB0)
#define GGKEKDDCLKD_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16CC1F00)
#define GGKEKDDCLKD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16CC22E0)
#define GGKEKDDCLKD_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0x16CC1FF0)
#define GGKEKDDCLKD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16CC2500)
#define GGKEKDDCLKD__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC2AF0)

inline static constexpr unsigned int GGKEKDDCLKD_TypeDefinitionIndex = 50888;

class GGKEKDDCLKD : public ::LNODBDPJGFL
{
public:
	::System::String* JHHDNDNJMCK; // 0x50
	::System::String* KIOFCIADGKG; // 0x58
	::MoleMole::Config::ConfigMovement* HONBMCLJPLM; // 0x60
	::MoleMole::Config::ConfigRotation* LJENBDLOPED; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKEKDDCLKD__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GGKEKDDCLKD_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKEKDDCLKD_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GGKEKDDCLKD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GGKEKDDCLKD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKEKDDCLKD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKEKDDCLKD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GGKEKDDCLKD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GGKEKDDCLKD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GGKEKDDCLKD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GGKEKDDCLKD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GGKEKDDCLKD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GGKEKDDCLKD_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::GGKEKDDCLKD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GGKEKDDCLKD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GGKEKDDCLKD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GGKEKDDCLKD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
