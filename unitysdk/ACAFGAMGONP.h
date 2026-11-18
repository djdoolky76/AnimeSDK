#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define ACAFGAMGONP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1420D4D0)
#define ACAFGAMGONP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1420DB90)
#define ACAFGAMGONP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1420D5E0)
#define ACAFGAMGONP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1420E100)
#define ACAFGAMGONP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1420D5D0)
#define ACAFGAMGONP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1420DFA0)
#define ACAFGAMGONP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1420DBF0)
#define ACAFGAMGONP_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1420DF10)
#define ACAFGAMGONP_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1420D2F0)
#define ACAFGAMGONP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1420D440)
#define ACAFGAMGONP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1420D660)
#define ACAFGAMGONP__CTOR_OFFSET UNITYSDK_OFFSET(0x1420DE80)

inline static constexpr unsigned int ACAFGAMGONP_TypeDefinitionIndex = 60057;

class ACAFGAMGONP : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x30
	::FOBNALGHPPD_1<::System::Int32> HFGOOECLHDD; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Int32> LMIBEHAAIIB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAFGAMGONP__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAFGAMGONP_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ACAFGAMGONP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAFGAMGONP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAFGAMGONP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ACAFGAMGONP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ACAFGAMGONP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAFGAMGONP_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ACAFGAMGONP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ACAFGAMGONP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ACAFGAMGONP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ACAFGAMGONP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ACAFGAMGONP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ACAFGAMGONP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ACAFGAMGONP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ACAFGAMGONP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
