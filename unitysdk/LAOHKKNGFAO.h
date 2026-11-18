#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LAOHKKNGFAO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19978210)
#define LAOHKKNGFAO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19977D20)
#define LAOHKKNGFAO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19978320)
#define LAOHKKNGFAO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x199789C0)
#define LAOHKKNGFAO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19978310)
#define LAOHKKNGFAO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19978860)
#define LAOHKKNGFAO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19977D80)
#define LAOHKKNGFAO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x199781B0)
#define LAOHKKNGFAO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x199783A0)
#define LAOHKKNGFAO__CTOR_OFFSET UNITYSDK_OFFSET(0x19978850)

inline static constexpr unsigned int LAOHKKNGFAO_TypeDefinitionIndex = 73539;

class LAOHKKNGFAO : public ::LNODBDPJGFL
{
public:
	::System::Collections::Generic::List_1<::System::String*>* NEBMGIPNDNF; // 0x50
	::System::Boolean GOICJLGKPOI; // 0x58
	::System::Boolean AFBNAHOBMNA; // 0x59

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOHKKNGFAO__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LAOHKKNGFAO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LAOHKKNGFAO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOHKKNGFAO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOHKKNGFAO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LAOHKKNGFAO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LAOHKKNGFAO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LAOHKKNGFAO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LAOHKKNGFAO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::LAOHKKNGFAO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LAOHKKNGFAO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LAOHKKNGFAO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LAOHKKNGFAO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LAOHKKNGFAO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
