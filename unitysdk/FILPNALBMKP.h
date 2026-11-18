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

#define FILPNALBMKP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xBB486E0)
#define FILPNALBMKP_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0xBB48EE0)
#define FILPNALBMKP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xBB48350)
#define FILPNALBMKP_FROMFLX_OFFSET UNITYSDK_OFFSET(0xBB487F0)
#define FILPNALBMKP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xBB48BD0)
#define FILPNALBMKP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xBB487E0)
#define FILPNALBMKP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xBB48D80)
#define FILPNALBMKP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xBB483B0)
#define FILPNALBMKP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xBB48650)
#define FILPNALBMKP_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0xBB48250)
#define FILPNALBMKP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xBB48870)
#define FILPNALBMKP__CTOR_OFFSET UNITYSDK_OFFSET(0xBB48BC0)

inline static constexpr unsigned int FILPNALBMKP_TypeDefinitionIndex = 72145;

class FILPNALBMKP : public ::LHHNKBDEMGO
{
public:
	::System::String* IOFIOCEPLII; // 0x40
	::System::Boolean AOBDOCPEEIA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILPNALBMKP__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FILPNALBMKP_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FILPNALBMKP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FILPNALBMKP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FILPNALBMKP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FILPNALBMKP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FILPNALBMKP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FILPNALBMKP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FILPNALBMKP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FILPNALBMKP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FILPNALBMKP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FILPNALBMKP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FILPNALBMKP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FILPNALBMKP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + FILPNALBMKP_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FILPNALBMKP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
