#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class LNODBDPJGFL;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BMINOHAHMLG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1151D210)
#define BMINOHAHMLG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1151D5B0)
#define BMINOHAHMLG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1151D320)
#define BMINOHAHMLG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1151D8B0)
#define BMINOHAHMLG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1151D310)
#define BMINOHAHMLG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1151DA60)
#define BMINOHAHMLG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1151D610)
#define BMINOHAHMLG_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1151DBC0)
#define BMINOHAHMLG_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1151CFB0)
#define BMINOHAHMLG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1151D180)
#define BMINOHAHMLG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1151D3A0)
#define BMINOHAHMLG__CTOR_OFFSET UNITYSDK_OFFSET(0x1151D820)

inline static constexpr unsigned int BMINOHAHMLG_TypeDefinitionIndex = 87786;

class BMINOHAHMLG : public ::HDJJJGCHLEE
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* PNCBKGGEPEM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMINOHAHMLG__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMINOHAHMLG_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BMINOHAHMLG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMINOHAHMLG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMINOHAHMLG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BMINOHAHMLG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMINOHAHMLG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BMINOHAHMLG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BMINOHAHMLG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMINOHAHMLG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BMINOHAHMLG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BMINOHAHMLG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BMINOHAHMLG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BMINOHAHMLG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMINOHAHMLG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMINOHAHMLG_JFLMLBMNFFK_OFFSET))(this);
	}
};
