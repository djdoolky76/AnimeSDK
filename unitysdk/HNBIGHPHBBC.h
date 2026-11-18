#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLPJECICNDE.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BHEKACANAMA;
class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HNBIGHPHBBC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17A5F110)
#define HNBIGHPHBBC_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x17A5FEF0)
#define HNBIGHPHBBC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17A5EAE0)
#define HNBIGHPHBBC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17A5F220)
#define HNBIGHPHBBC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17A60120)
#define HNBIGHPHBBC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17A5F210)
#define HNBIGHPHBBC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17A5FFC0)
#define HNBIGHPHBBC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17A5EB40)
#define HNBIGHPHBBC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17A5F020)
#define HNBIGHPHBBC_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x17A5E9E0)
#define HNBIGHPHBBC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17A5F2A0)
#define HNBIGHPHBBC__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5FEE0)

inline static constexpr unsigned int HNBIGHPHBBC_TypeDefinitionIndex = 70259;

class HNBIGHPHBBC : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicFloat* MPLPDPMCKEJ; // 0x40
	::BHEKACANAMA* BOGFFFBPKHC; // 0x48
	::MoleMole::Config::DynamicInt* IKMCEIAFPFA; // 0x50
	::MoleMole::Config::DynamicString* HBPBBNAHLEF; // 0x58
	::System::String* OAHLNFFKPGC; // 0x60
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x68
	::System::Boolean JDAMLAEEKOD; // 0x6C
	::System::Byte _padding0[0x3];
	::BLPJECICNDE KGJGBAJEAPJ; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBIGHPHBBC__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HNBIGHPHBBC_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HNBIGHPHBBC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HNBIGHPHBBC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBIGHPHBBC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBIGHPHBBC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HNBIGHPHBBC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HNBIGHPHBBC_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::HNBIGHPHBBC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HNBIGHPHBBC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HNBIGHPHBBC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HNBIGHPHBBC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HNBIGHPHBBC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HNBIGHPHBBC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HNBIGHPHBBC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HNBIGHPHBBC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
