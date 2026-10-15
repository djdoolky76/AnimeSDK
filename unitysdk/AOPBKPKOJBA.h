#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define AOPBKPKOJBA_CTOR_OFFSET UNITYSDK_OFFSET(0x158BB6E0)
#define AOPBKPKOJBA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158BB6F0)
#define AOPBKPKOJBA_JHMJNGHAKBF_OFFSET UNITYSDK_OFFSET(0x158BBE50)
#define AOPBKPKOJBA_LLDKMAMCNIA_OFFSET UNITYSDK_OFFSET(0x158BC090)
#define AOPBKPKOJBA_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x158BBF60)
#define AOPBKPKOJBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158BB790)
#define AOPBKPKOJBA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158BBEB0)
#define AOPBKPKOJBA_PFEODCIJKPH_OFFSET UNITYSDK_OFFSET(0x158BBFC0)
#define AOPBKPKOJBA_TICK_OFFSET UNITYSDK_OFFSET(0x158BBF00)

inline static constexpr unsigned int AOPBKPKOJBA_TypeDefinitionIndex = 58273;

	class AOPBKPKOJBA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PlayNPCBubbleTalk* OFKGLJOAMLD; // 0x20
		// static const ::System::String* JPJAMENFBKD; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayNPCBubbleTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayNPCBubbleTalk*))((::PBYTE)hIl2Cpp + AOPBKPKOJBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPBKPKOJBA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPBKPKOJBA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPBKPKOJBA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AOPBKPKOJBA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AOPBKPKOJBA_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void PFEODCIJKPH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AOPBKPKOJBA_PFEODCIJKPH_OFFSET))(this, a1);
		}

		::System::Void LLDKMAMCNIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPBKPKOJBA_LLDKMAMCNIA_OFFSET))(this);
		}

		::System::Void JHMJNGHAKBF(::RPG::GameCore::BubbleTalkInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BubbleTalkInfo*))((::PBYTE)hIl2Cpp + AOPBKPKOJBA_JHMJNGHAKBF_OFFSET))(this, a1);
		}

	};
