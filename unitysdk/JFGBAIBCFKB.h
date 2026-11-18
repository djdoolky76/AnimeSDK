#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCIKICBGGLP.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define JFGBAIBCFKB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x198A8530)
#define JFGBAIBCFKB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198A81A0)
#define JFGBAIBCFKB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x198A8640)
#define JFGBAIBCFKB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x198A8A20)
#define JFGBAIBCFKB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x198A8630)
#define JFGBAIBCFKB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x198A8BD0)
#define JFGBAIBCFKB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x198A8200)
#define JFGBAIBCFKB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x198A84A0)
#define JFGBAIBCFKB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x198A86C0)
#define JFGBAIBCFKB__CTOR_OFFSET UNITYSDK_OFFSET(0x198A8A10)

inline static constexpr unsigned int JFGBAIBCFKB_TypeDefinitionIndex = 78429;

class JFGBAIBCFKB : public ::CCIKICBGGLP
{
public:
	::System::String* KIHGNGKBADE; // 0x20
	::System::Boolean HNFFAABPEBB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGBAIBCFKB__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JFGBAIBCFKB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JFGBAIBCFKB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::CCIKICBGGLP* DGNAAPGKIPL()
	{
		return ((::CCIKICBGGLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGBAIBCFKB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGBAIBCFKB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JFGBAIBCFKB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::JFGBAIBCFKB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JFGBAIBCFKB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JFGBAIBCFKB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::JFGBAIBCFKB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JFGBAIBCFKB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JFGBAIBCFKB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JFGBAIBCFKB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JFGBAIBCFKB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
