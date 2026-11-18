#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
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
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BMPLNBKGJEH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18DAADC0)
#define BMPLNBKGJEH_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x18DAB8D0)
#define BMPLNBKGJEH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18DAA8A0)
#define BMPLNBKGJEH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18DAAED0)
#define BMPLNBKGJEH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x18DAB9A0)
#define BMPLNBKGJEH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x18DAAEC0)
#define BMPLNBKGJEH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x18DABB50)
#define BMPLNBKGJEH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18DAA900)
#define BMPLNBKGJEH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x18DAACD0)
#define BMPLNBKGJEH_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x18DAA7A0)
#define BMPLNBKGJEH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18DAAF50)
#define BMPLNBKGJEH__CTOR_OFFSET UNITYSDK_OFFSET(0x18DAB8C0)

inline static constexpr unsigned int BMPLNBKGJEH_TypeDefinitionIndex = 56521;

class BMPLNBKGJEH : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicInt* AHPPICIDJHG; // 0x40
	::MoleMole::Config::DynamicString* JPHFBCMLFGE; // 0x48
	::BHEKACANAMA* BNLAEBBEKMP; // 0x50
	::System::String* KDEFPBLCEHB; // 0x58
	::MoleMole::Config::DynamicFloat* BIKBGOPABFE; // 0x60
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPLNBKGJEH__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BMPLNBKGJEH_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMPLNBKGJEH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BMPLNBKGJEH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPLNBKGJEH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPLNBKGJEH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BMPLNBKGJEH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BMPLNBKGJEH_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::BMPLNBKGJEH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BMPLNBKGJEH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMPLNBKGJEH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMPLNBKGJEH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BMPLNBKGJEH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BMPLNBKGJEH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BMPLNBKGJEH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BMPLNBKGJEH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
