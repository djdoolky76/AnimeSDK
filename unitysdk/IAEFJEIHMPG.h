#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFPFIPCGPAJ.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IAEFJEIHMPG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1655B6E0)
#define IAEFJEIHMPG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1655BA60)
#define IAEFJEIHMPG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1655B7F0)
#define IAEFJEIHMPG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1655BED0)
#define IAEFJEIHMPG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1655B7E0)
#define IAEFJEIHMPG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1655BD70)
#define IAEFJEIHMPG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1655BAC0)
#define IAEFJEIHMPG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1655B650)
#define IAEFJEIHMPG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1655B870)
#define IAEFJEIHMPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1655BD60)

inline static constexpr unsigned int IAEFJEIHMPG_TypeDefinitionIndex = 61550;

class IAEFJEIHMPG : public ::KFPFIPCGPAJ
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* FLEAAGEALCA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAEFJEIHMPG__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IAEFJEIHMPG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::KFPFIPCGPAJ* DGNAAPGKIPL()
	{
		return ((::KFPFIPCGPAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAEFJEIHMPG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAEFJEIHMPG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IAEFJEIHMPG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IAEFJEIHMPG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IAEFJEIHMPG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::IAEFJEIHMPG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IAEFJEIHMPG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IAEFJEIHMPG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::IAEFJEIHMPG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IAEFJEIHMPG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IAEFJEIHMPG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IAEFJEIHMPG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
