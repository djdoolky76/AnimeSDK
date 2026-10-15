#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RemoveAssistAvatar; }
namespace RPG::GameCore { class TaskContext; }

#define IPINAGHLELM_CTOR_OFFSET UNITYSDK_OFFSET(0x16523F40)
#define IPINAGHLELM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16523F50)
#define IPINAGHLELM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16523FA0)
#define IPINAGHLELM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16524040)
#define IPINAGHLELM_TICK_OFFSET UNITYSDK_OFFSET(0x16524090)

inline static constexpr unsigned int IPINAGHLELM_TypeDefinitionIndex = 58385;

	class IPINAGHLELM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RemoveAssistAvatar* OFKGLJOAMLD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveAssistAvatar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveAssistAvatar*))((::PBYTE)hIl2Cpp + IPINAGHLELM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPINAGHLELM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPINAGHLELM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPINAGHLELM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IPINAGHLELM_TICK_OFFSET))(this, a1);
		}

	};
