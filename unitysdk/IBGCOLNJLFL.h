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
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define IBGCOLNJLFL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15E9B3D0)
#define IBGCOLNJLFL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15E9B0F0)
#define IBGCOLNJLFL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15E9B4E0)
#define IBGCOLNJLFL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15E9B9F0)
#define IBGCOLNJLFL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15E9B4D0)
#define IBGCOLNJLFL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15E9B890)
#define IBGCOLNJLFL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15E9B150)
#define IBGCOLNJLFL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15E9BBA0)
#define IBGCOLNJLFL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15E9B000)
#define IBGCOLNJLFL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15E9B370)
#define IBGCOLNJLFL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15E9B560)
#define IBGCOLNJLFL__CTOR_OFFSET UNITYSDK_OFFSET(0x15E9B880)

inline static constexpr unsigned int IBGCOLNJLFL_TypeDefinitionIndex = 53457;

class IBGCOLNJLFL : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicInt* PMLOGFLOLNJ; // 0x50
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGCOLNJLFL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IBGCOLNJLFL_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IBGCOLNJLFL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IBGCOLNJLFL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGCOLNJLFL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGCOLNJLFL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IBGCOLNJLFL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::IBGCOLNJLFL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IBGCOLNJLFL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IBGCOLNJLFL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IBGCOLNJLFL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IBGCOLNJLFL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::IBGCOLNJLFL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IBGCOLNJLFL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IBGCOLNJLFL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IBGCOLNJLFL_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}
};
