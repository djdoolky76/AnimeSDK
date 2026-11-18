#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BHEKACANAMA;
class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define FBCAPFHDHLH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x169BDED0)
#define FBCAPFHDHLH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x169BD9A0)
#define FBCAPFHDHLH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x169BDFE0)
#define FBCAPFHDHLH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x169BEA70)
#define FBCAPFHDHLH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x169BDFD0)
#define FBCAPFHDHLH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x169BED00)
#define FBCAPFHDHLH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x169BDA00)
#define FBCAPFHDHLH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x169BEC20)
#define FBCAPFHDHLH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x169BD8B0)
#define FBCAPFHDHLH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x169BDE00)
#define FBCAPFHDHLH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x169BE060)
#define FBCAPFHDHLH__CTOR_OFFSET UNITYSDK_OFFSET(0x169BEA60)

inline static constexpr unsigned int FBCAPFHDHLH_TypeDefinitionIndex = 61574;

class FBCAPFHDHLH : public ::LNODBDPJGFL
{
public:
	::BHEKACANAMA* PGKPGHECONB; // 0x50
	::MoleMole::Config::DynamicFloat* BKMMJBOHAED; // 0x58
	::MoleMole::Config::DynamicString* BODECKIDFGF; // 0x60
	::MoleMole::Config::DynamicFloat* ELPHACIKEIP; // 0x68
	::MoleMole::Config::DynamicFloat* KEKLOPKLAIM; // 0x70
	::BHEKACANAMA* IHCMHGACFFA; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCAPFHDHLH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FBCAPFHDHLH_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FBCAPFHDHLH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FBCAPFHDHLH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCAPFHDHLH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCAPFHDHLH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FBCAPFHDHLH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FBCAPFHDHLH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FBCAPFHDHLH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FBCAPFHDHLH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FBCAPFHDHLH_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FBCAPFHDHLH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FBCAPFHDHLH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FBCAPFHDHLH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FBCAPFHDHLH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FBCAPFHDHLH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
