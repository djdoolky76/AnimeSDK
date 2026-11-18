#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPIOLGMOBLJ.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MKJBJJHAENF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x12D90F70)
#define MKJBJJHAENF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12D912F0)
#define MKJBJJHAENF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12D91080)
#define MKJBJJHAENF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x12D91540)
#define MKJBJJHAENF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x12D91070)
#define MKJBJJHAENF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12D916F0)
#define MKJBJJHAENF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12D91350)
#define MKJBJJHAENF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12D90EE0)
#define MKJBJJHAENF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12D91100)
#define MKJBJJHAENF__CTOR_OFFSET UNITYSDK_OFFSET(0x12D91530)

inline static constexpr unsigned int MKJBJJHAENF_TypeDefinitionIndex = 71702;

class MKJBJJHAENF : public ::GPIOLGMOBLJ
{
public:
	::System::String* CJIJKHHCCNO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJBJJHAENF__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MKJBJJHAENF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::GPIOLGMOBLJ* DGNAAPGKIPL()
	{
		return ((::GPIOLGMOBLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJBJJHAENF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJBJJHAENF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MKJBJJHAENF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MKJBJJHAENF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MKJBJJHAENF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::MKJBJJHAENF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MKJBJJHAENF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MKJBJJHAENF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::MKJBJJHAENF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MKJBJJHAENF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MKJBJJHAENF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MKJBJJHAENF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
