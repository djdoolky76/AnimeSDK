#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CreateAvatarAssistant; }
namespace RPG::GameCore { class TaskContext; }

#define CBFDMGJCCHA_CTOR_OFFSET UNITYSDK_OFFSET(0x18FD7DF0)
#define CBFDMGJCCHA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18FD7E00)
#define CBFDMGJCCHA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18FD7E40)
#define CBFDMGJCCHA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18FD7E90)
#define CBFDMGJCCHA_TICK_OFFSET UNITYSDK_OFFSET(0x18FD7EE0)

inline static constexpr unsigned int CBFDMGJCCHA_TypeDefinitionIndex = 59277;

	class CBFDMGJCCHA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::CreateAvatarAssistant* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateAvatarAssistant* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateAvatarAssistant*))((::PBYTE)hIl2Cpp + CBFDMGJCCHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFDMGJCCHA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFDMGJCCHA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFDMGJCCHA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBFDMGJCCHA_TICK_OFFSET))(this, a1);
		}

	};
