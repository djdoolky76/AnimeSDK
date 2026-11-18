#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLPJECICNDE.h"
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

#define EKJLNDPKFCC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16159D40)
#define EKJLNDPKFCC_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x1615A740)
#define EKJLNDPKFCC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x161599B0)
#define EKJLNDPKFCC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16159E50)
#define EKJLNDPKFCC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1615A430)
#define EKJLNDPKFCC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16159E40)
#define EKJLNDPKFCC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1615A5E0)
#define EKJLNDPKFCC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16159A10)
#define EKJLNDPKFCC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16159CA0)
#define EKJLNDPKFCC_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x161598B0)
#define EKJLNDPKFCC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16159ED0)
#define EKJLNDPKFCC__CTOR_OFFSET UNITYSDK_OFFSET(0x1615A420)

inline static constexpr unsigned int EKJLNDPKFCC_TypeDefinitionIndex = 91122;

class EKJLNDPKFCC : public ::LHHNKBDEMGO
{
public:
	::System::Object* KLBGAHPJAJO; // 0x40
	::System::String* KDEFPBLCEHB; // 0x48
	::BLPJECICNDE JEJABEHHBIJ; // 0x50
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJLNDPKFCC__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EKJLNDPKFCC_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EKJLNDPKFCC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EKJLNDPKFCC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJLNDPKFCC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJLNDPKFCC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EKJLNDPKFCC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EKJLNDPKFCC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EKJLNDPKFCC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EKJLNDPKFCC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EKJLNDPKFCC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EKJLNDPKFCC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::EKJLNDPKFCC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EKJLNDPKFCC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EKJLNDPKFCC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + EKJLNDPKFCC_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};
