#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
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
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define IFKKLHIFCHC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15EB44E0)
#define IFKKLHIFCHC_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x15EB5390)
#define IFKKLHIFCHC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15EB3F00)
#define IFKKLHIFCHC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15EB45F0)
#define IFKKLHIFCHC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15EB5460)
#define IFKKLHIFCHC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15EB45E0)
#define IFKKLHIFCHC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15EB5230)
#define IFKKLHIFCHC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15EB3F60)
#define IFKKLHIFCHC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15EB4410)
#define IFKKLHIFCHC_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x15EB3E00)
#define IFKKLHIFCHC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15EB4670)
#define IFKKLHIFCHC__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB5220)

inline static constexpr unsigned int IFKKLHIFCHC_TypeDefinitionIndex = 55642;

class IFKKLHIFCHC : public ::LHHNKBDEMGO
{
public:
	::System::String* ODHHLGIJLMK; // 0x40
	::MoleMole::Config::DynamicFloat* OAMKJJIGJKF; // 0x48
	::System::String* EPFMCDHJNIH; // 0x50
	::MoleMole::Config::DynamicFloat* INCLIKFKPEG; // 0x58
	::System::Boolean LNBHFBFHIPD; // 0x60
	::System::Byte _padding0[0x3];
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x64
	::MoleMole::Config::BaseProperty NHCMEBCHOIG; // 0x68
	::MoleMole::Config::BaseProperty FBFMJDJBFOP; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKKLHIFCHC__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IFKKLHIFCHC_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IFKKLHIFCHC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IFKKLHIFCHC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKKLHIFCHC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKKLHIFCHC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IFKKLHIFCHC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IFKKLHIFCHC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IFKKLHIFCHC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IFKKLHIFCHC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IFKKLHIFCHC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IFKKLHIFCHC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + IFKKLHIFCHC_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::IFKKLHIFCHC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IFKKLHIFCHC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IFKKLHIFCHC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
