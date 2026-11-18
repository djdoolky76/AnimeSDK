#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MECBMLBAJBA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17D1C2B0)
#define MECBMLBAJBA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D1BED0)
#define MECBMLBAJBA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D1C3C0)
#define MECBMLBAJBA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17D1C8B0)
#define MECBMLBAJBA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17D1C3B0)
#define MECBMLBAJBA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17D1CA60)
#define MECBMLBAJBA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17D1BF30)
#define MECBMLBAJBA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x17D1C7D0)
#define MECBMLBAJBA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x17D1BDD0)
#define MECBMLBAJBA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17D1C240)
#define MECBMLBAJBA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17D1C440)
#define MECBMLBAJBA__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1C7C0)

inline static constexpr unsigned int MECBMLBAJBA_TypeDefinitionIndex = 59560;

class MECBMLBAJBA : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* BNMKCDCMJLF; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::Config::AidAttackType>* LKNFKOILFDH; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECBMLBAJBA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MECBMLBAJBA_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MECBMLBAJBA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MECBMLBAJBA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MECBMLBAJBA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MECBMLBAJBA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MECBMLBAJBA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MECBMLBAJBA_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::MECBMLBAJBA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MECBMLBAJBA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MECBMLBAJBA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::MECBMLBAJBA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MECBMLBAJBA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MECBMLBAJBA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MECBMLBAJBA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MECBMLBAJBA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
