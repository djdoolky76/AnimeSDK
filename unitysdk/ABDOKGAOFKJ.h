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
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define ABDOKGAOFKJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17DBB920)
#define ABDOKGAOFKJ_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x17DBBFC0)
#define ABDOKGAOFKJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17DBB650)
#define ABDOKGAOFKJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17DBBA30)
#define ABDOKGAOFKJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17DBBE10)
#define ABDOKGAOFKJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17DBBA20)
#define ABDOKGAOFKJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17DBBCB0)
#define ABDOKGAOFKJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17DBB6B0)
#define ABDOKGAOFKJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17DBB890)
#define ABDOKGAOFKJ_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x17DBB560)
#define ABDOKGAOFKJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17DBBAB0)
#define ABDOKGAOFKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBBCA0)

inline static constexpr unsigned int ABDOKGAOFKJ_TypeDefinitionIndex = 45325;

class ABDOKGAOFKJ : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicString* KIHGNGKBADE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDOKGAOFKJ__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ABDOKGAOFKJ_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABDOKGAOFKJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ABDOKGAOFKJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDOKGAOFKJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDOKGAOFKJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ABDOKGAOFKJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABDOKGAOFKJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ABDOKGAOFKJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ABDOKGAOFKJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ABDOKGAOFKJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ABDOKGAOFKJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::ABDOKGAOFKJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ABDOKGAOFKJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABDOKGAOFKJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ABDOKGAOFKJ_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};
