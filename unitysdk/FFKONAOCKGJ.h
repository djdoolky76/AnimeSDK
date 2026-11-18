#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class HACAMEGIBJA;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class RenderMaterial; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FFKONAOCKGJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xBB3E4E0)
#define FFKONAOCKGJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xBB3DEB0)
#define FFKONAOCKGJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0xBB3E5F0)
#define FFKONAOCKGJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xBB3EFF0)
#define FFKONAOCKGJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xBB3E5E0)
#define FFKONAOCKGJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xBB3F1A0)
#define FFKONAOCKGJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xBB3DF10)
#define FFKONAOCKGJ_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xBB3F300)
#define FFKONAOCKGJ_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xBB3DDB0)
#define FFKONAOCKGJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xBB3E450)
#define FFKONAOCKGJ_NHAADOCOPBN_OFFSET UNITYSDK_OFFSET(0xBB3DEA0)
#define FFKONAOCKGJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xBB3E670)
#define FFKONAOCKGJ__CTOR_OFFSET UNITYSDK_OFFSET(0xBB3EFE0)

inline static constexpr unsigned int FFKONAOCKGJ_TypeDefinitionIndex = 92728;

class FFKONAOCKGJ : public ::LNODBDPJGFL
{
public:
	::System::String* MCOHLHMKLIP; // 0x50
	::HACAMEGIBJA* NALDAHMJFHL; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* OAIHPMLLJJO; // 0x60
	::System::String* KIHGNGKBADE; // 0x68
	::System::Boolean JNMPJONKHCA; // 0x70
	::System::Byte _padding0[0x3];
	::System::Int32 HLBKHEFJAPH; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKONAOCKGJ__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FFKONAOCKGJ_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::NDDGJMFPAKF NHAADOCOPBN()
	{
		return ((::NDDGJMFPAKF(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKONAOCKGJ_NHAADOCOPBN_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FFKONAOCKGJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FFKONAOCKGJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKONAOCKGJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKONAOCKGJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FFKONAOCKGJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FFKONAOCKGJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FFKONAOCKGJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FFKONAOCKGJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FFKONAOCKGJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FFKONAOCKGJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FFKONAOCKGJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FFKONAOCKGJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FFKONAOCKGJ_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FFKONAOCKGJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
