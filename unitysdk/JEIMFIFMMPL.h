#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define JEIMFIFMMPL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14A5BFC0)
#define JEIMFIFMMPL_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x14A5C660)
#define JEIMFIFMMPL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14A5BBF0)
#define JEIMFIFMMPL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14A5C0D0)
#define JEIMFIFMMPL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14A5C890)
#define JEIMFIFMMPL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14A5C0C0)
#define JEIMFIFMMPL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14A5C730)
#define JEIMFIFMMPL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14A5BC50)
#define JEIMFIFMMPL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14A5BF00)
#define JEIMFIFMMPL_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x14A5BAE0)
#define JEIMFIFMMPL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14A5C150)
#define JEIMFIFMMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x14A5C650)

inline static constexpr unsigned int JEIMFIFMMPL_TypeDefinitionIndex = 84721;

class JEIMFIFMMPL : public ::LHHNKBDEMGO
{
public:
	::System::String* OKOGMKOOOPL; // 0x40
	::MoleMole::Config::DynamicInt* EAHEOHODAOE; // 0x48
	::MoleMole::Config::DynamicFloat* CFGEEIELGJI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIMFIFMMPL__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JEIMFIFMMPL_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JEIMFIFMMPL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JEIMFIFMMPL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIMFIFMMPL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIMFIFMMPL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JEIMFIFMMPL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JEIMFIFMMPL_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JEIMFIFMMPL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::JEIMFIFMMPL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JEIMFIFMMPL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JEIMFIFMMPL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JEIMFIFMMPL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::JEIMFIFMMPL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JEIMFIFMMPL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JEIMFIFMMPL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
