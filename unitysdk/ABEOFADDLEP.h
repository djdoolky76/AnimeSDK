#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define ABEOFADDLEP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x135D01E0)
#define ABEOFADDLEP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x135D0710)
#define ABEOFADDLEP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x135D02F0)
#define ABEOFADDLEP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x135D0BC0)
#define ABEOFADDLEP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x135D02E0)
#define ABEOFADDLEP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x135D0A60)
#define ABEOFADDLEP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x135D0770)
#define ABEOFADDLEP_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x135D0D70)
#define ABEOFADDLEP_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x135CFCF0)
#define ABEOFADDLEP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x135D0140)
#define ABEOFADDLEP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x135D0370)
#define ABEOFADDLEP__CTOR_OFFSET UNITYSDK_OFFSET(0x135D09D0)

inline static constexpr unsigned int ABEOFADDLEP_TypeDefinitionIndex = 93048;

class ABEOFADDLEP : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* MFKJLJJGHJF; // 0x30
	::GPIOLGMOBLJ* JOFGIJDODCD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEOFADDLEP__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEOFADDLEP_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ABEOFADDLEP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEOFADDLEP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEOFADDLEP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ABEOFADDLEP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABEOFADDLEP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ABEOFADDLEP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ABEOFADDLEP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ABEOFADDLEP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABEOFADDLEP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ABEOFADDLEP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ABEOFADDLEP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ABEOFADDLEP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABEOFADDLEP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEOFADDLEP_JFLMLBMNFFK_OFFSET))(this);
	}
};
