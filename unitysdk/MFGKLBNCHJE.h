#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MFGKLBNCHJE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x151CC540)
#define MFGKLBNCHJE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x151CC880)
#define MFGKLBNCHJE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x151CC650)
#define MFGKLBNCHJE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x151CCD10)
#define MFGKLBNCHJE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x151CC640)
#define MFGKLBNCHJE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x151CCB20)
#define MFGKLBNCHJE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x151CC8E0)
#define MFGKLBNCHJE_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x151CCC80)
#define MFGKLBNCHJE_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x151CC4B0)
#define MFGKLBNCHJE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x151CC4F0)
#define MFGKLBNCHJE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x151CC6D0)
#define MFGKLBNCHJE__CTOR_OFFSET UNITYSDK_OFFSET(0x151CCA90)

inline static constexpr unsigned int MFGKLBNCHJE_TypeDefinitionIndex = 72391;

class MFGKLBNCHJE : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::String*> GPIOJBLKFAJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGKLBNCHJE__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGKLBNCHJE_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MFGKLBNCHJE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGKLBNCHJE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGKLBNCHJE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MFGKLBNCHJE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MFGKLBNCHJE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::MFGKLBNCHJE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MFGKLBNCHJE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MFGKLBNCHJE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFGKLBNCHJE_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MFGKLBNCHJE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::MFGKLBNCHJE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MFGKLBNCHJE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MFGKLBNCHJE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MFGKLBNCHJE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
