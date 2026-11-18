#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CDCKOKOEDGK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16A10830)
#define CDCKOKOEDGK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16A10DF0)
#define CDCKOKOEDGK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16A10940)
#define CDCKOKOEDGK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16A11380)
#define CDCKOKOEDGK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16A10930)
#define CDCKOKOEDGK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16A11190)
#define CDCKOKOEDGK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16A10E50)
#define CDCKOKOEDGK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16A112F0)
#define CDCKOKOEDGK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16A10530)
#define CDCKOKOEDGK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16A10790)
#define CDCKOKOEDGK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16A109C0)
#define CDCKOKOEDGK__CTOR_OFFSET UNITYSDK_OFFSET(0x16A11100)

inline static constexpr unsigned int CDCKOKOEDGK_TypeDefinitionIndex = 42857;

class CDCKOKOEDGK : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* PBANCBCAMOI; // 0x30
	::HBIBNDIOKPG* IFEFGIHOKOC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCKOKOEDGK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCKOKOEDGK_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CDCKOKOEDGK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCKOKOEDGK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCKOKOEDGK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CDCKOKOEDGK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CDCKOKOEDGK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::CDCKOKOEDGK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CDCKOKOEDGK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CDCKOKOEDGK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCKOKOEDGK_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::CDCKOKOEDGK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CDCKOKOEDGK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CDCKOKOEDGK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CDCKOKOEDGK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CDCKOKOEDGK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
