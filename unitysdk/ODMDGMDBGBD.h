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

#define ODMDGMDBGBD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15F5E640)
#define ODMDGMDBGBD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15F5E360)
#define ODMDGMDBGBD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15F5E750)
#define ODMDGMDBGBD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15F5EB00)
#define ODMDGMDBGBD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15F5E740)
#define ODMDGMDBGBD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15F5ED90)
#define ODMDGMDBGBD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15F5E3C0)
#define ODMDGMDBGBD_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15F5ECB0)
#define ODMDGMDBGBD_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15F5E240)
#define ODMDGMDBGBD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15F5E5E0)
#define ODMDGMDBGBD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15F5E7D0)
#define ODMDGMDBGBD__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5EAF0)

inline static constexpr unsigned int ODMDGMDBGBD_TypeDefinitionIndex = 50290;

class ODMDGMDBGBD : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* GPIOJBLKFAJ; // 0x50
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMDGMDBGBD__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ODMDGMDBGBD_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ODMDGMDBGBD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ODMDGMDBGBD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMDGMDBGBD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMDGMDBGBD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ODMDGMDBGBD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ODMDGMDBGBD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ODMDGMDBGBD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ODMDGMDBGBD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ODMDGMDBGBD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ODMDGMDBGBD_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ODMDGMDBGBD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ODMDGMDBGBD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ODMDGMDBGBD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ODMDGMDBGBD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
