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

#define OIPGKGJMLKM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1B79E6B0)
#define OIPGKGJMLKM_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1B79ED50)
#define OIPGKGJMLKM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B79E2E0)
#define OIPGKGJMLKM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B79E7C0)
#define OIPGKGJMLKM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1B79EF80)
#define OIPGKGJMLKM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1B79E7B0)
#define OIPGKGJMLKM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1B79EE20)
#define OIPGKGJMLKM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1B79E340)
#define OIPGKGJMLKM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1B79E5F0)
#define OIPGKGJMLKM_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x1B79E1D0)
#define OIPGKGJMLKM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1B79E840)
#define OIPGKGJMLKM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B79ED40)

inline static constexpr unsigned int OIPGKGJMLKM_TypeDefinitionIndex = 62125;

class OIPGKGJMLKM : public ::LHHNKBDEMGO
{
public:
	::System::String* OKOGMKOOOPL; // 0x40
	::MoleMole::Config::DynamicInt* EAHEOHODAOE; // 0x48
	::MoleMole::Config::DynamicFloat* CFGEEIELGJI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPGKGJMLKM__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OIPGKGJMLKM_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OIPGKGJMLKM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OIPGKGJMLKM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPGKGJMLKM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPGKGJMLKM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OIPGKGJMLKM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OIPGKGJMLKM_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OIPGKGJMLKM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OIPGKGJMLKM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::OIPGKGJMLKM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OIPGKGJMLKM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OIPGKGJMLKM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::OIPGKGJMLKM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OIPGKGJMLKM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OIPGKGJMLKM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
