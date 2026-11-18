#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CCIKICBGGLP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14537A00)
#define CCIKICBGGLP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x145376B0)
#define CCIKICBGGLP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14537B70)
#define CCIKICBGGLP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x145380A0)
#define CCIKICBGGLP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14537B00)
#define CCIKICBGGLP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x145381F0)
#define CCIKICBGGLP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14537710)
#define CCIKICBGGLP_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x14537B10)
#define CCIKICBGGLP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x145379B0)
#define CCIKICBGGLP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14537BF0)
#define CCIKICBGGLP__CTOR_OFFSET UNITYSDK_OFFSET(0x14538090)

inline static constexpr unsigned int CCIKICBGGLP_TypeDefinitionIndex = 61584;

class CCIKICBGGLP : public ::System::Object
{
public:
	::System::String* MMMHLENHKLN; // 0x10
	::System::Boolean DBCANNPOBIE; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single IOMPEGPDBHB; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIKICBGGLP__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CCIKICBGGLP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CCIKICBGGLP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::CCIKICBGGLP* DGNAAPGKIPL()
	{
		return ((::CCIKICBGGLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIKICBGGLP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIKICBGGLP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIKICBGGLP_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CCIKICBGGLP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CCIKICBGGLP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CCIKICBGGLP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::CCIKICBGGLP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CCIKICBGGLP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CCIKICBGGLP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::CCIKICBGGLP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CCIKICBGGLP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CCIKICBGGLP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
