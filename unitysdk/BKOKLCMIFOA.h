#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
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

#define BKOKLCMIFOA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x115180F0)
#define BKOKLCMIFOA_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x11518760)
#define BKOKLCMIFOA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11517DE0)
#define BKOKLCMIFOA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11518200)
#define BKOKLCMIFOA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x115185B0)
#define BKOKLCMIFOA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x115181F0)
#define BKOKLCMIFOA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11518830)
#define BKOKLCMIFOA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11517E40)
#define BKOKLCMIFOA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11518060)
#define BKOKLCMIFOA_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x11517B00)
#define BKOKLCMIFOA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11518280)
#define BKOKLCMIFOA__CTOR_OFFSET UNITYSDK_OFFSET(0x115185A0)

inline static constexpr unsigned int BKOKLCMIFOA_TypeDefinitionIndex = 53158;

class BKOKLCMIFOA : public ::LHHNKBDEMGO
{
public:
	::System::String* LOMIADAPGLF; // 0x40
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOKLCMIFOA__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BKOKLCMIFOA_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BKOKLCMIFOA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BKOKLCMIFOA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOKLCMIFOA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKOKLCMIFOA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BKOKLCMIFOA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BKOKLCMIFOA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BKOKLCMIFOA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BKOKLCMIFOA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BKOKLCMIFOA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BKOKLCMIFOA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + BKOKLCMIFOA_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::BKOKLCMIFOA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BKOKLCMIFOA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BKOKLCMIFOA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
