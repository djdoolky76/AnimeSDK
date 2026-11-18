#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGKLNAAJING.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CFBBAKNMLCO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1478CE50)
#define CFBBAKNMLCO_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1478D880)
#define CFBBAKNMLCO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1478C850)
#define CFBBAKNMLCO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1478CF60)
#define CFBBAKNMLCO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1478D6D0)
#define CFBBAKNMLCO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1478CF50)
#define CFBBAKNMLCO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1478D950)
#define CFBBAKNMLCO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1478C8B0)
#define CFBBAKNMLCO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1478CD90)
#define CFBBAKNMLCO_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1478C750)
#define CFBBAKNMLCO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1478CFE0)
#define CFBBAKNMLCO__CTOR_OFFSET UNITYSDK_OFFSET(0x1478D6C0)

inline static constexpr unsigned int CFBBAKNMLCO_TypeDefinitionIndex = 77218;

class CFBBAKNMLCO : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::String*>* NOIOFFONINO; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* IEACKOKKJCD; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* CGDCGAFKPLF; // 0x50
	::LGKLNAAJING JBCNINFBMJN; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFBBAKNMLCO__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + CFBBAKNMLCO_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CFBBAKNMLCO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CFBBAKNMLCO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFBBAKNMLCO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFBBAKNMLCO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CFBBAKNMLCO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::CFBBAKNMLCO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CFBBAKNMLCO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CFBBAKNMLCO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CFBBAKNMLCO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + CFBBAKNMLCO_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CFBBAKNMLCO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::CFBBAKNMLCO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CFBBAKNMLCO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CFBBAKNMLCO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
