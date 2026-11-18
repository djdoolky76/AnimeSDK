#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define HBJDGEJIPNA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16F218F0)
#define HBJDGEJIPNA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F21FC0)
#define HBJDGEJIPNA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16F21A00)
#define HBJDGEJIPNA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16F223F0)
#define HBJDGEJIPNA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16F219F0)
#define HBJDGEJIPNA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16F225A0)
#define HBJDGEJIPNA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16F22020)
#define HBJDGEJIPNA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16F22360)
#define HBJDGEJIPNA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16F21530)
#define HBJDGEJIPNA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16F21850)
#define HBJDGEJIPNA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16F21A80)
#define HBJDGEJIPNA__CTOR_OFFSET UNITYSDK_OFFSET(0x16F222D0)

inline static constexpr unsigned int HBJDGEJIPNA_TypeDefinitionIndex = 87451;

class HBJDGEJIPNA : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::Int32> BELNJJKMMJP; // 0x30
	::System::Byte _padding0[0x18];
	::HBIBNDIOKPG* MOOHFHCPOIE; // 0x50
	::GPIOLGMOBLJ* HACHJLCBGJP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJDGEJIPNA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJDGEJIPNA_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HBJDGEJIPNA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJDGEJIPNA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJDGEJIPNA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HBJDGEJIPNA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HBJDGEJIPNA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJDGEJIPNA_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HBJDGEJIPNA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HBJDGEJIPNA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HBJDGEJIPNA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HBJDGEJIPNA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HBJDGEJIPNA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HBJDGEJIPNA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HBJDGEJIPNA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HBJDGEJIPNA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
