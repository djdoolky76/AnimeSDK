#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class HitWallCameraShakeConfig; }
namespace MoleMole::Config { class RaycastHitWallEffectConfig; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define GMIACDCLNNB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13DF10D0)
#define GMIACDCLNNB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13DF0D50)
#define GMIACDCLNNB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13DF11E0)
#define GMIACDCLNNB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13DF16A0)
#define GMIACDCLNNB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13DF11D0)
#define GMIACDCLNNB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13DF1930)
#define GMIACDCLNNB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13DF0DB0)
#define GMIACDCLNNB_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x13DF1850)
#define GMIACDCLNNB_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x13DF0C50)
#define GMIACDCLNNB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13DF1060)
#define GMIACDCLNNB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13DF1260)
#define GMIACDCLNNB__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF1690)

inline static constexpr unsigned int GMIACDCLNNB_TypeDefinitionIndex = 77969;

class GMIACDCLNNB : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::HitWallCameraShakeConfig* GGIBBFMNKKP; // 0x50
	::MoleMole::Config::RaycastHitWallEffectConfig* OAIDHFOBKKO; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIACDCLNNB__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GMIACDCLNNB_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GMIACDCLNNB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GMIACDCLNNB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIACDCLNNB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIACDCLNNB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GMIACDCLNNB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GMIACDCLNNB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GMIACDCLNNB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GMIACDCLNNB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GMIACDCLNNB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GMIACDCLNNB_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GMIACDCLNNB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GMIACDCLNNB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GMIACDCLNNB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GMIACDCLNNB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
