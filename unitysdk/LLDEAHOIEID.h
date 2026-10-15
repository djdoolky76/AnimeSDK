#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class CollectionPlayBubbleTalk; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define LLDEAHOIEID_CTOR_OFFSET UNITYSDK_OFFSET(0xB762B00)
#define LLDEAHOIEID_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB762B10)
#define LLDEAHOIEID_FEFFLHILBGB_OFFSET UNITYSDK_OFFSET(0xB763680)
#define LLDEAHOIEID_JHMJNGHAKBF_OFFSET UNITYSDK_OFFSET(0xB763900)
#define LLDEAHOIEID_LLDKMAMCNIA_OFFSET UNITYSDK_OFFSET(0xB763B80)
#define LLDEAHOIEID_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB762BB0)
#define LLDEAHOIEID_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB763A00)
#define LLDEAHOIEID_PFEODCIJKPH_OFFSET UNITYSDK_OFFSET(0xB763AB0)
#define LLDEAHOIEID_TICK_OFFSET UNITYSDK_OFFSET(0xB763A50)

inline static constexpr unsigned int LLDEAHOIEID_TypeDefinitionIndex = 58031;

	class LLDEAHOIEID : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CollectionPlayBubbleTalk* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::PlayNPCBubbleTalk* MEEENKPBHJK; // 0x28
		::System::UInt32 LFECLIALKFB; // 0x30
		// static const ::System::String* JPJAMENFBKD; // 0x0
		// static const ::System::String* NOIGFGJJDLB; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CollectionPlayBubbleTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CollectionPlayBubbleTalk*))((::PBYTE)hIl2Cpp + LLDEAHOIEID_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLDEAHOIEID_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLDEAHOIEID_ONTASKBEGIN_OFFSET))(this);
		}

		::System::UInt32 FEFFLHILBGB(::RPG::GameCore::BubbleTalkInfo* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::BubbleTalkInfo*))((::PBYTE)hIl2Cpp + LLDEAHOIEID_FEFFLHILBGB_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLDEAHOIEID_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LLDEAHOIEID_TICK_OFFSET))(this, a1);
		}

		::System::Void PFEODCIJKPH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLDEAHOIEID_PFEODCIJKPH_OFFSET))(this, a1);
		}

		::System::Void LLDKMAMCNIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLDEAHOIEID_LLDKMAMCNIA_OFFSET))(this);
		}

		::System::Void JHMJNGHAKBF(::RPG::GameCore::BubbleTalkInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BubbleTalkInfo*))((::PBYTE)hIl2Cpp + LLDEAHOIEID_JHMJNGHAKBF_OFFSET))(this, a1);
		}

	};
