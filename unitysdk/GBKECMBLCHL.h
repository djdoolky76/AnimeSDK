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
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GBKECMBLCHL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14126BF0)
#define GBKECMBLCHL_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x14127430)
#define GBKECMBLCHL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14126750)
#define GBKECMBLCHL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14126D00)
#define GBKECMBLCHL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14127280)
#define GBKECMBLCHL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14126CF0)
#define GBKECMBLCHL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14127120)
#define GBKECMBLCHL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x141267B0)
#define GBKECMBLCHL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14126B50)
#define GBKECMBLCHL_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x14126650)
#define GBKECMBLCHL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14126D80)
#define GBKECMBLCHL__CTOR_OFFSET UNITYSDK_OFFSET(0x14127110)

inline static constexpr unsigned int GBKECMBLCHL_TypeDefinitionIndex = 92361;

class GBKECMBLCHL : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::String*>* PGJEEDHIFLK; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* LBJAHHEBFKG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKECMBLCHL__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GBKECMBLCHL_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GBKECMBLCHL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GBKECMBLCHL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKECMBLCHL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKECMBLCHL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GBKECMBLCHL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GBKECMBLCHL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GBKECMBLCHL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GBKECMBLCHL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GBKECMBLCHL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GBKECMBLCHL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GBKECMBLCHL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GBKECMBLCHL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GBKECMBLCHL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GBKECMBLCHL_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};
