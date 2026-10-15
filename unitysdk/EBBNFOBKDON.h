#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PlaySimpleTalk; }
namespace RPG::GameCore { class TaskContext; }

#define EBBNFOBKDON_CTOR_OFFSET UNITYSDK_OFFSET(0x12CE89D0)
#define EBBNFOBKDON_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CE8A00)
#define EBBNFOBKDON_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x12CE9190)
#define EBBNFOBKDON_NPHDKJCJDCA_OFFSET UNITYSDK_OFFSET(0x12CE8E40)
#define EBBNFOBKDON_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x12CE9130)
#define EBBNFOBKDON_ONSKIP_OFFSET UNITYSDK_OFFSET(0x12CE90E0)
#define EBBNFOBKDON_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CE8A40)

inline static constexpr unsigned int EBBNFOBKDON_TypeDefinitionIndex = 58285;

	class EBBNFOBKDON
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlaySimpleTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlaySimpleTalk*))((::PBYTE)hIl2Cpp + EBBNFOBKDON_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBNFOBKDON_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBNFOBKDON_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBNFOBKDON_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBBNFOBKDON_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void NPHDKJCJDCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBNFOBKDON_NPHDKJCJDCA_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBNFOBKDON_GET_FORCESKIP_OFFSET))(this);
		}

	};
