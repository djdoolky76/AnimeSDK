#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConstraintConditionStatType.h"
#include "unitysdk/System/Object.h"
class CGEAHGGAADH;
class DAPLFNJDOAA;
class JOOHEPGEHNK;
class KKGMHJNMOID;
class PIPDCBLLPDI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DBKBPMNNGKG_CTOR_OFFSET UNITYSDK_OFFSET(0xE228AD0)
#define DBKBPMNNGKG_HCOIJJKNAJF_OFFSET UNITYSDK_OFFSET(0xE228FC0)
#define DBKBPMNNGKG_IFIDJPHDEHI_OFFSET UNITYSDK_OFFSET(0xE228B80)

inline static constexpr unsigned int DBKBPMNNGKG_TypeDefinitionIndex = 79694;

	class DBKBPMNNGKG : public ::System::Object
	{
	public:
		::CGEAHGGAADH* CKFIMAJPOOA; // 0x10
		::JOOHEPGEHNK* PONKAEHCHGF; // 0x18
		::PIPDCBLLPDI* NEADLJNICHM; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MechCraft::MechCraftConstraintConditionStatType, ::DAPLFNJDOAA*>* JMGKEICPACE; // 0x28
		::System::Void _ctor(::PIPDCBLLPDI* a1, ::JOOHEPGEHNK* a2, ::CGEAHGGAADH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PIPDCBLLPDI*, ::JOOHEPGEHNK*, ::CGEAHGGAADH*))((::PBYTE)hIl2Cpp + DBKBPMNNGKG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* IFIDJPHDEHI(::KKGMHJNMOID* a1)
		{
			return ((::System::String*(*)(::PVOID, ::KKGMHJNMOID*))((::PBYTE)hIl2Cpp + DBKBPMNNGKG_IFIDJPHDEHI_OFFSET))(this, a1);
		}

		::DAPLFNJDOAA* HCOIJJKNAJF(::RPG::Client::MechCraft::MechCraftConstraintConditionStatType a1)
		{
			return ((::DAPLFNJDOAA*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftConstraintConditionStatType))((::PBYTE)hIl2Cpp + DBKBPMNNGKG_HCOIJJKNAJF_OFFSET))(this, a1);
		}

	};
