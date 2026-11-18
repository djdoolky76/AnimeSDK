#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCBMHJJNCOD.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class DDIKKPFBFJK;
class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IKPCNPELMBB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1657F650)
#define IKPCNPELMBB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1657F9A0)
#define IKPCNPELMBB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1657F760)
#define IKPCNPELMBB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1657FD20)
#define IKPCNPELMBB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1657F750)
#define IKPCNPELMBB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1657FBC0)
#define IKPCNPELMBB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1657FA00)
#define IKPCNPELMBB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1657F600)
#define IKPCNPELMBB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1657F7E0)
#define IKPCNPELMBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1657FBB0)

inline static constexpr unsigned int IKPCNPELMBB_TypeDefinitionIndex = 83878;

class IKPCNPELMBB : public ::HCBMHJJNCOD
{
public:
	::System::Collections::Generic::List_1<::DDIKKPFBFJK*>* DOFKEIDFIIC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPCNPELMBB__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IKPCNPELMBB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HCBMHJJNCOD* DGNAAPGKIPL()
	{
		return ((::HCBMHJJNCOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPCNPELMBB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKPCNPELMBB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IKPCNPELMBB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IKPCNPELMBB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IKPCNPELMBB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IKPCNPELMBB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IKPCNPELMBB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::IKPCNPELMBB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IKPCNPELMBB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IKPCNPELMBB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IKPCNPELMBB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IKPCNPELMBB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
