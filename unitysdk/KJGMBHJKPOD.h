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

#define KJGMBHJKPOD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16344FA0)
#define KJGMBHJKPOD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x163454D0)
#define KJGMBHJKPOD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x163450B0)
#define KJGMBHJKPOD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16345A10)
#define KJGMBHJKPOD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x163450A0)
#define KJGMBHJKPOD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16345820)
#define KJGMBHJKPOD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16345530)
#define KJGMBHJKPOD_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16345980)
#define KJGMBHJKPOD_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16344D00)
#define KJGMBHJKPOD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16344F00)
#define KJGMBHJKPOD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16345130)
#define KJGMBHJKPOD__CTOR_OFFSET UNITYSDK_OFFSET(0x16345790)

inline static constexpr unsigned int KJGMBHJKPOD_TypeDefinitionIndex = 68453;

class KJGMBHJKPOD : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* MFKJLJJGHJF; // 0x30
	::GPIOLGMOBLJ* JOFGIJDODCD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGMBHJKPOD__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGMBHJKPOD_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KJGMBHJKPOD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGMBHJKPOD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGMBHJKPOD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KJGMBHJKPOD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KJGMBHJKPOD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KJGMBHJKPOD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KJGMBHJKPOD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KJGMBHJKPOD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KJGMBHJKPOD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGMBHJKPOD_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::KJGMBHJKPOD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KJGMBHJKPOD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KJGMBHJKPOD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KJGMBHJKPOD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
