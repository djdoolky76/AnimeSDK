#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayScreenCrack; }
namespace RPG::GameCore { class TaskContext; }

#define JLJIOHBIMCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A095200)
#define JLJIOHBIMCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A095580)
#define JLJIOHBIMCE_EDNJAFJEPJF_OFFSET UNITYSDK_OFFSET(0x1A0954D0)
#define JLJIOHBIMCE_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1A095620)
#define JLJIOHBIMCE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A095210)
#define JLJIOHBIMCE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A095530)
#define JLJIOHBIMCE_TICK_OFFSET UNITYSDK_OFFSET(0x1A0955C0)

inline static constexpr unsigned int JLJIOHBIMCE_TypeDefinitionIndex = 59536;

	class JLJIOHBIMCE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PlayScreenCrack* OFKGLJOAMLD; // 0x20
		// static const ::System::String* CAGBCAELNEE; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayScreenCrack* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayScreenCrack*))((::PBYTE)hIl2Cpp + JLJIOHBIMCE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJIOHBIMCE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void EDNJAFJEPJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJIOHBIMCE_EDNJAFJEPJF_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJIOHBIMCE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJIOHBIMCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JLJIOHBIMCE_TICK_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJIOHBIMCE_GET_FORCESKIP_OFFSET))(this);
		}

	};
