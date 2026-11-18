#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/ConfigDataClearPriority.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
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

#define JACIIFGJAGA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15C2FEB0)
#define JACIIFGJAGA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15C2FB90)
#define JACIIFGJAGA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15C2FFC0)
#define JACIIFGJAGA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15C306E0)
#define JACIIFGJAGA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15C2FFB0)
#define JACIIFGJAGA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15C304A0)
#define JACIIFGJAGA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15C2FBF0)
#define JACIIFGJAGA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15C30600)
#define JACIIFGJAGA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15C2FAA0)
#define JACIIFGJAGA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15C2FE50)
#define JACIIFGJAGA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15C30040)
#define JACIIFGJAGA__CTOR_OFFSET UNITYSDK_OFFSET(0x15C30490)

inline static constexpr unsigned int JACIIFGJAGA_TypeDefinitionIndex = 68832;

class JACIIFGJAGA : public ::LNODBDPJGFL
{
public:
	::System::String* NMHJLBEONCM; // 0x50
	::MoleMole::Config::ConfigDataClearPriority GKMOPEEJKBO; // 0x58
	::MoleMole::Config::ConfigDataPriority MPGMDODIFOP; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JACIIFGJAGA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB(::KFHNCJALFJK* GBELIHABEDH, ::LNODBDPJGFL* DPPFJDCEIOO, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JACIIFGJAGA_LBHNEFGNNNB_OFFSET))(this, GBELIHABEDH, DPPFJDCEIOO, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JACIIFGJAGA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JACIIFGJAGA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JACIIFGJAGA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JACIIFGJAGA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JACIIFGJAGA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::JACIIFGJAGA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JACIIFGJAGA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JACIIFGJAGA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JACIIFGJAGA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JACIIFGJAGA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK(::KFHNCJALFJK* MIALFKCCCPI, ::LNODBDPJGFL* KMGKAIDEIBA, ::JCADHFOKIHK* FDHMCIFPNCK, ::LNFCIBHFJHI* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::MoleMole::Battle::Entity* CEIDLKIHMLC, ::ENGKPGFGGLM* MNPNEHDOOMM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::LNODBDPJGFL*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + JACIIFGJAGA_JFLMLBMNFFK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC, MNPNEHDOOMM);
	}

	static ::JACIIFGJAGA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JACIIFGJAGA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JACIIFGJAGA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
