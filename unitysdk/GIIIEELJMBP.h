#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"
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

#define GIIIEELJMBP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x10FE28E0)
#define GIIIEELJMBP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10FE23F0)
#define GIIIEELJMBP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10FE29F0)
#define GIIIEELJMBP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x10FE3670)
#define GIIIEELJMBP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x10FE29E0)
#define GIIIEELJMBP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x10FE3430)
#define GIIIEELJMBP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10FE2450)
#define GIIIEELJMBP_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x10FE3590)
#define GIIIEELJMBP_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x10FE2300)
#define GIIIEELJMBP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x10FE2850)
#define GIIIEELJMBP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10FE2A70)
#define GIIIEELJMBP__CTOR_OFFSET UNITYSDK_OFFSET(0x10FE33C0)

inline static constexpr unsigned int GIIIEELJMBP_TypeDefinitionIndex = 91274;

class GIIIEELJMBP : public ::LNODBDPJGFL
{
public:
	::System::String* KIHGNGKBADE; // 0x50
	::MoleMole::Config::DynamicFloat* DPGNDHJGGJB; // 0x58
	::System::String* EKFHGLCBEAP; // 0x60
	::System::String* JHLIENEKMOJ; // 0x68
	::MoleMole::Config::InlevelCameraState EGKEHBGEGDK; // 0x70
	::System::Boolean NHMPAAKNMFA; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIIEELJMBP__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GIIIEELJMBP_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GIIIEELJMBP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GIIIEELJMBP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIIEELJMBP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIIEELJMBP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GIIIEELJMBP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GIIIEELJMBP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GIIIEELJMBP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GIIIEELJMBP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GIIIEELJMBP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GIIIEELJMBP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GIIIEELJMBP_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::GIIIEELJMBP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GIIIEELJMBP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GIIIEELJMBP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
