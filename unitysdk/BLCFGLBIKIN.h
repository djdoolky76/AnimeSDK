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

#define BLCFGLBIKIN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x115F7CB0)
#define BLCFGLBIKIN_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x115F81B0)
#define BLCFGLBIKIN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x115F7850)
#define BLCFGLBIKIN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x115F7DC0)
#define BLCFGLBIKIN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x115F83E0)
#define BLCFGLBIKIN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x115F7DB0)
#define BLCFGLBIKIN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x115F8280)
#define BLCFGLBIKIN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x115F78B0)
#define BLCFGLBIKIN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x115F7C20)
#define BLCFGLBIKIN_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x115F7750)
#define BLCFGLBIKIN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x115F7E40)
#define BLCFGLBIKIN__CTOR_OFFSET UNITYSDK_OFFSET(0x115F81A0)

inline static constexpr unsigned int BLCFGLBIKIN_TypeDefinitionIndex = 59880;

class BLCFGLBIKIN : public ::LHHNKBDEMGO
{
public:
	::System::Collections::Generic::List_1<::System::String*>* OGECPPMDOEP; // 0x40
	::System::Boolean GELBDJLOBOO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCFGLBIKIN__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BLCFGLBIKIN_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BLCFGLBIKIN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BLCFGLBIKIN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCFGLBIKIN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCFGLBIKIN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BLCFGLBIKIN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BLCFGLBIKIN_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BLCFGLBIKIN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BLCFGLBIKIN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BLCFGLBIKIN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BLCFGLBIKIN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BLCFGLBIKIN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BLCFGLBIKIN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BLCFGLBIKIN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BLCFGLBIKIN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
