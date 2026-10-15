#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class PlayNPCSingleBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define GEELJHLDJOE_CTOR_OFFSET UNITYSDK_OFFSET(0x159C5E30)
#define GEELJHLDJOE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159C5E40)
#define GEELJHLDJOE_JHMJNGHAKBF_OFFSET UNITYSDK_OFFSET(0x159C6290)
#define GEELJHLDJOE_LLDKMAMCNIA_OFFSET UNITYSDK_OFFSET(0x159C6560)
#define GEELJHLDJOE_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x159C6440)
#define GEELJHLDJOE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159C5EE0)
#define GEELJHLDJOE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159C6390)
#define GEELJHLDJOE_PFEODCIJKPH_OFFSET UNITYSDK_OFFSET(0x159C64A0)
#define GEELJHLDJOE_TICK_OFFSET UNITYSDK_OFFSET(0x159C63E0)

inline static constexpr unsigned int GEELJHLDJOE_TypeDefinitionIndex = 58274;

	class GEELJHLDJOE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PlayNPCSingleBubbleTalk* OFKGLJOAMLD; // 0x20
		::System::String* IJMGEMMNNPI; // 0x28
		// static const ::System::String* JPJAMENFBKD; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayNPCSingleBubbleTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayNPCSingleBubbleTalk*))((::PBYTE)hIl2Cpp + GEELJHLDJOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEELJHLDJOE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEELJHLDJOE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEELJHLDJOE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEELJHLDJOE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEELJHLDJOE_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void PFEODCIJKPH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEELJHLDJOE_PFEODCIJKPH_OFFSET))(this, a1);
		}

		::System::Void LLDKMAMCNIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEELJHLDJOE_LLDKMAMCNIA_OFFSET))(this);
		}

		::System::Void JHMJNGHAKBF(::RPG::GameCore::BubbleTalkInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BubbleTalkInfo*))((::PBYTE)hIl2Cpp + GEELJHLDJOE_JHMJNGHAKBF_OFFSET))(this, a1);
		}

	};
