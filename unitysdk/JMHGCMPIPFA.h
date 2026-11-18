#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JMHGCMPIPFA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13CCE9C0)
#define JMHGCMPIPFA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13CCDBD0)
#define JMHGCMPIPFA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13CCEA20)
#define JMHGCMPIPFA_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x13CCDB10)
#define JMHGCMPIPFA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13CCDA30)
#define JMHGCMPIPFA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13CCDC50)
#define JMHGCMPIPFA__CTOR_OFFSET UNITYSDK_OFFSET(0x13CCF390)

inline static constexpr unsigned int JMHGCMPIPFA_TypeDefinitionIndex = 40432;

class JMHGCMPIPFA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* JJJCPIBBCOM; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* JMDOANHOEJG; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* AMMHPEJODKK; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* HPDOHLHODPP; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* PLHACDIGCBB; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* PPNIDEIHEEJ; // 0x38
	::System::Collections::Generic::List_1<::System::UInt32>* PLMHCDNHMAA; // 0x40
	::System::Collections::Generic::List_1<::System::UInt32>* DMAAILPLHGG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHGCMPIPFA__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JMHGCMPIPFA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHGCMPIPFA_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JMHGCMPIPFA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JMHGCMPIPFA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JMHGCMPIPFA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JMHGCMPIPFA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
