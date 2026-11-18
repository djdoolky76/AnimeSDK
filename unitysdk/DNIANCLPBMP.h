#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { template <typename T> class Action_1; }

#define DNIANCLPBMP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16979AF0)
#define DNIANCLPBMP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16979E20)
#define DNIANCLPBMP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16979C00)
#define DNIANCLPBMP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1697A190)
#define DNIANCLPBMP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16979BF0)
#define DNIANCLPBMP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1697A0C0)
#define DNIANCLPBMP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16979E80)
#define DNIANCLPBMP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16979AE0)
#define DNIANCLPBMP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16979C80)
#define DNIANCLPBMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1697A0B0)

inline static constexpr unsigned int DNIANCLPBMP_TypeDefinitionIndex = 64366;

class DNIANCLPBMP : public ::System::Object
{
public:
	::System::Int32 APKIKLPPHEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIANCLPBMP__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DNIANCLPBMP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::DNIANCLPBMP* DGNAAPGKIPL()
	{
		return ((::DNIANCLPBMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIANCLPBMP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIANCLPBMP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DNIANCLPBMP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DNIANCLPBMP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DNIANCLPBMP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DNIANCLPBMP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DNIANCLPBMP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DNIANCLPBMP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DNIANCLPBMP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DNIANCLPBMP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DNIANCLPBMP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DNIANCLPBMP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
