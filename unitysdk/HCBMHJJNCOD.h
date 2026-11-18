#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { template <typename T> class Action_1; }

#define HCBMHJJNCOD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x146E2D50)
#define HCBMHJJNCOD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x146E2ED0)
#define HCBMHJJNCOD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x146E2E60)
#define HCBMHJJNCOD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x146E2FD0)
#define HCBMHJJNCOD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x146E2E50)
#define HCBMHJJNCOD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x146E2F00)
#define HCBMHJJNCOD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x146E2EE0)
#define HCBMHJJNCOD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x146E2D40)
#define HCBMHJJNCOD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x146E2EC0)
#define HCBMHJJNCOD__CTOR_OFFSET UNITYSDK_OFFSET(0x146E2EF0)

inline static constexpr unsigned int HCBMHJJNCOD_TypeDefinitionIndex = 44328;

class HCBMHJJNCOD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBMHJJNCOD__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HCBMHJJNCOD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HCBMHJJNCOD* DGNAAPGKIPL()
	{
		return ((::HCBMHJJNCOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBMHJJNCOD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBMHJJNCOD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HCBMHJJNCOD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HCBMHJJNCOD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HCBMHJJNCOD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HCBMHJJNCOD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HCBMHJJNCOD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::HCBMHJJNCOD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HCBMHJJNCOD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HCBMHJJNCOD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HCBMHJJNCOD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HCBMHJJNCOD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
