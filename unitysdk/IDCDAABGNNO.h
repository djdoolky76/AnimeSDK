#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/JPAGJONBFID_OHLJJOCHIGO.h"

class FKNIEPCILLG;
namespace System { template <typename T> class Action_1; }

#define IDCDAABGNNO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1A455330)
#define IDCDAABGNNO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A4554B0)
#define IDCDAABGNNO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A455440)
#define IDCDAABGNNO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1A455530)
#define IDCDAABGNNO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1A455430)
#define IDCDAABGNNO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1A455680)
#define IDCDAABGNNO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A4554C0)
#define IDCDAABGNNO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1A455320)
#define IDCDAABGNNO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A4554A0)
#define IDCDAABGNNO_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1A4554D0)
#define IDCDAABGNNO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A455520)

inline static constexpr unsigned int IDCDAABGNNO_TypeDefinitionIndex = 42737;

class IDCDAABGNNO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCDAABGNNO__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IDCDAABGNNO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::IDCDAABGNNO* DGNAAPGKIPL()
	{
		return ((::IDCDAABGNNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCDAABGNNO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCDAABGNNO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IDCDAABGNNO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IDCDAABGNNO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void PKOGNPKCHHE(::JPAGJONBFID_OHLJJOCHIGO& HGDMBHDKFPK)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_OHLJJOCHIGO&))((::PBYTE)hIl2Cpp + IDCDAABGNNO_PKOGNPKCHHE_OFFSET))(this, HGDMBHDKFPK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IDCDAABGNNO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::IDCDAABGNNO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IDCDAABGNNO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IDCDAABGNNO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IDCDAABGNNO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IDCDAABGNNO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IDCDAABGNNO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IDCDAABGNNO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
