#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class NIKCFGLDOAL;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFPFIPCGPAJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17705BD0)
#define KFPFIPCGPAJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17705F20)
#define KFPFIPCGPAJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17705CE0)
#define KFPFIPCGPAJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17706140)
#define KFPFIPCGPAJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17705CD0)
#define KFPFIPCGPAJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17706290)
#define KFPFIPCGPAJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17705F80)
#define KFPFIPCGPAJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17705B80)
#define KFPFIPCGPAJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17705D60)
#define KFPFIPCGPAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17706130)

inline static constexpr unsigned int KFPFIPCGPAJ_TypeDefinitionIndex = 76646;

class KFPFIPCGPAJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::NIKCFGLDOAL*>* PIDOLKBBHFN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPFIPCGPAJ__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KFPFIPCGPAJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::KFPFIPCGPAJ* DGNAAPGKIPL()
	{
		return ((::KFPFIPCGPAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPFIPCGPAJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPFIPCGPAJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KFPFIPCGPAJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KFPFIPCGPAJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KFPFIPCGPAJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KFPFIPCGPAJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KFPFIPCGPAJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KFPFIPCGPAJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KFPFIPCGPAJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KFPFIPCGPAJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KFPFIPCGPAJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KFPFIPCGPAJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
