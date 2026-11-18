#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BBINMPMDFHC;
class FKNIEPCILLG;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LLCFODKNNLB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1402D580)
#define LLCFODKNNLB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1402D1A0)
#define LLCFODKNNLB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1402D5E0)
#define LLCFODKNNLB_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x1402D130)
#define LLCFODKNNLB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1402D0C0)
#define LLCFODKNNLB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1402D220)
#define LLCFODKNNLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1402D810)

inline static constexpr unsigned int LLCFODKNNLB_TypeDefinitionIndex = 77999;

class LLCFODKNNLB : public ::System::Object
{
public:
	::System::String* PIBDDAFBCHN; // 0x10
	::System::Collections::Generic::List_1<::BBINMPMDFHC*>* HLEDCPCPNLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCFODKNNLB__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LLCFODKNNLB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCFODKNNLB_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LLCFODKNNLB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LLCFODKNNLB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LLCFODKNNLB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LLCFODKNNLB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
