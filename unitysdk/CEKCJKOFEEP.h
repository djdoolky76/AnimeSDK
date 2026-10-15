#pragma once
#include "unitysdk/unitysdk.h"
class KODNBILFFFG;
namespace RPG::GameCore { class CreateFMChannelReceiver; }
namespace RPG::GameCore { class TaskContext; }

#define CEKCJKOFEEP_CTOR_OFFSET UNITYSDK_OFFSET(0xC9DC180)
#define CEKCJKOFEEP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9DC4E0)
#define CEKCJKOFEEP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC9DC1B0)
#define CEKCJKOFEEP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC9DC3C0)

inline static constexpr unsigned int CEKCJKOFEEP_TypeDefinitionIndex = 52719;

	class CEKCJKOFEEP
	{
	public:
		::KODNBILFFFG* CHGNPFNGPFC; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateFMChannelReceiver* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateFMChannelReceiver*))((::PBYTE)hIl2Cpp + CEKCJKOFEEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKCJKOFEEP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKCJKOFEEP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKCJKOFEEP_DISPOSE_OFFSET))(this);
		}

	};
