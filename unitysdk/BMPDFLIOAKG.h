#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCBMHJJNCOD.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BMPDFLIOAKG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1151F6B0)
#define BMPDFLIOAKG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1151FA10)
#define BMPDFLIOAKG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1151F7C0)
#define BMPDFLIOAKG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1151FE40)
#define BMPDFLIOAKG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1151F7B0)
#define BMPDFLIOAKG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1151FCE0)
#define BMPDFLIOAKG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1151FA70)
#define BMPDFLIOAKG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1151F660)
#define BMPDFLIOAKG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1151F840)
#define BMPDFLIOAKG__CTOR_OFFSET UNITYSDK_OFFSET(0x1151FCD0)

inline static constexpr unsigned int BMPDFLIOAKG_TypeDefinitionIndex = 46732;

class BMPDFLIOAKG : public ::HCBMHJJNCOD
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* LFPLEFHOKGB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPDFLIOAKG__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BMPDFLIOAKG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HCBMHJJNCOD* DGNAAPGKIPL()
	{
		return ((::HCBMHJJNCOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPDFLIOAKG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPDFLIOAKG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BMPDFLIOAKG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMPDFLIOAKG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMPDFLIOAKG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BMPDFLIOAKG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BMPDFLIOAKG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BMPDFLIOAKG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::BMPDFLIOAKG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BMPDFLIOAKG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMPDFLIOAKG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BMPDFLIOAKG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
