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

#define OGPMEHPCGJK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15F70520)
#define OGPMEHPCGJK_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x15F708B0)
#define OGPMEHPCGJK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15F70190)
#define OGPMEHPCGJK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15F70630)
#define OGPMEHPCGJK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15F70980)
#define OGPMEHPCGJK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15F70620)
#define OGPMEHPCGJK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15F70B30)
#define OGPMEHPCGJK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15F701F0)
#define OGPMEHPCGJK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15F70490)
#define OGPMEHPCGJK_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x15F70090)
#define OGPMEHPCGJK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15F706B0)
#define OGPMEHPCGJK__CTOR_OFFSET UNITYSDK_OFFSET(0x15F708A0)

inline static constexpr unsigned int OGPMEHPCGJK_TypeDefinitionIndex = 60732;

class OGPMEHPCGJK : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::String*>* PNEGKPNJDLL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPMEHPCGJK__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OGPMEHPCGJK_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OGPMEHPCGJK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OGPMEHPCGJK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPMEHPCGJK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGPMEHPCGJK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OGPMEHPCGJK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OGPMEHPCGJK_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::OGPMEHPCGJK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OGPMEHPCGJK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OGPMEHPCGJK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OGPMEHPCGJK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OGPMEHPCGJK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::OGPMEHPCGJK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OGPMEHPCGJK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OGPMEHPCGJK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
