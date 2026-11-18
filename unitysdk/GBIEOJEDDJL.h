#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
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

#define GBIEOJEDDJL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x116DD1A0)
#define GBIEOJEDDJL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x116DCEC0)
#define GBIEOJEDDJL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x116DD2B0)
#define GBIEOJEDDJL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x116DD7C0)
#define GBIEOJEDDJL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x116DD2A0)
#define GBIEOJEDDJL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x116DD660)
#define GBIEOJEDDJL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x116DCF20)
#define GBIEOJEDDJL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x116DD970)
#define GBIEOJEDDJL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x116DCC50)
#define GBIEOJEDDJL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x116DD140)
#define GBIEOJEDDJL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x116DD330)
#define GBIEOJEDDJL__CTOR_OFFSET UNITYSDK_OFFSET(0x116DD650)

inline static constexpr unsigned int GBIEOJEDDJL_TypeDefinitionIndex = 72058;

class GBIEOJEDDJL : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* MMNNLOMMNGL; // 0x50
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIEOJEDDJL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GBIEOJEDDJL_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GBIEOJEDDJL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GBIEOJEDDJL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIEOJEDDJL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIEOJEDDJL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GBIEOJEDDJL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GBIEOJEDDJL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GBIEOJEDDJL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GBIEOJEDDJL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::GBIEOJEDDJL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GBIEOJEDDJL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GBIEOJEDDJL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GBIEOJEDDJL_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GBIEOJEDDJL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GBIEOJEDDJL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
