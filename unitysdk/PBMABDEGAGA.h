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
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define PBMABDEGAGA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16F9BDD0)
#define PBMABDEGAGA_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x16F9C5C0)
#define PBMABDEGAGA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F9BB00)
#define PBMABDEGAGA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16F9BEE0)
#define PBMABDEGAGA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16F9C410)
#define PBMABDEGAGA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16F9BED0)
#define PBMABDEGAGA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16F9C2B0)
#define PBMABDEGAGA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16F9BB60)
#define PBMABDEGAGA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16F9BD40)
#define PBMABDEGAGA_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x16F9C150)
#define PBMABDEGAGA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16F9BF60)
#define PBMABDEGAGA__CTOR_OFFSET UNITYSDK_OFFSET(0x16F9C2A0)

inline static constexpr unsigned int PBMABDEGAGA_TypeDefinitionIndex = 41193;

class PBMABDEGAGA : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicFloat* NDAAJCOJHOI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMABDEGAGA__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PBMABDEGAGA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PBMABDEGAGA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMABDEGAGA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMABDEGAGA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PBMABDEGAGA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PBMABDEGAGA_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	static ::PBMABDEGAGA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PBMABDEGAGA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PBMABDEGAGA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PBMABDEGAGA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PBMABDEGAGA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PBMABDEGAGA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PBMABDEGAGA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PBMABDEGAGA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PBMABDEGAGA_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};
