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

#define PBFKAGGKCFL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1845CF10)
#define PBFKAGGKCFL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1845D440)
#define PBFKAGGKCFL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1845D020)
#define PBFKAGGKCFL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1845D820)
#define PBFKAGGKCFL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1845D010)
#define PBFKAGGKCFL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1845D9D0)
#define PBFKAGGKCFL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1845D4A0)
#define PBFKAGGKCFL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1845D790)
#define PBFKAGGKCFL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1845CBB0)
#define PBFKAGGKCFL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1845CE70)
#define PBFKAGGKCFL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1845D0A0)
#define PBFKAGGKCFL__CTOR_OFFSET UNITYSDK_OFFSET(0x1845D700)

inline static constexpr unsigned int PBFKAGGKCFL_TypeDefinitionIndex = 55575;

class PBFKAGGKCFL : public ::HDJJJGCHLEE
{
public:
	::GPIOLGMOBLJ* MJNEHHCPPIJ; // 0x30
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFKAGGKCFL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFKAGGKCFL_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PBFKAGGKCFL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFKAGGKCFL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFKAGGKCFL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PBFKAGGKCFL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PBFKAGGKCFL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFKAGGKCFL_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PBFKAGGKCFL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PBFKAGGKCFL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PBFKAGGKCFL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PBFKAGGKCFL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PBFKAGGKCFL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PBFKAGGKCFL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PBFKAGGKCFL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PBFKAGGKCFL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
