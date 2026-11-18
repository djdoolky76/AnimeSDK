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
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BAGCJEFNBMP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x170106B0)
#define BAGCJEFNBMP_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x17010ED0)
#define BAGCJEFNBMP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17010220)
#define BAGCJEFNBMP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x170107C0)
#define BAGCJEFNBMP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17010BC0)
#define BAGCJEFNBMP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x170107B0)
#define BAGCJEFNBMP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17010D70)
#define BAGCJEFNBMP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17010280)
#define BAGCJEFNBMP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17010610)
#define BAGCJEFNBMP_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x17010120)
#define BAGCJEFNBMP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17010840)
#define BAGCJEFNBMP__CTOR_OFFSET UNITYSDK_OFFSET(0x17010BB0)

inline static constexpr unsigned int BAGCJEFNBMP_TypeDefinitionIndex = 56155;

class BAGCJEFNBMP : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* DNOMKNHEKJC; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* EAEAOMLJHDO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCJEFNBMP__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BAGCJEFNBMP_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BAGCJEFNBMP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BAGCJEFNBMP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCJEFNBMP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCJEFNBMP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BAGCJEFNBMP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BAGCJEFNBMP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BAGCJEFNBMP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BAGCJEFNBMP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BAGCJEFNBMP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BAGCJEFNBMP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BAGCJEFNBMP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BAGCJEFNBMP_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BAGCJEFNBMP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BAGCJEFNBMP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
