#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CloseRogueNousPages; }
namespace RPG::GameCore { class TaskContext; }

#define FPOBDEHNOKE_CTOR_OFFSET UNITYSDK_OFFSET(0x15922A00)
#define FPOBDEHNOKE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15922A10)
#define FPOBDEHNOKE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15922A50)
#define FPOBDEHNOKE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15922B10)
#define FPOBDEHNOKE_TICK_OFFSET UNITYSDK_OFFSET(0x15922B60)

inline static constexpr unsigned int FPOBDEHNOKE_TypeDefinitionIndex = 58029;

	class FPOBDEHNOKE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::CloseRogueNousPages* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		// static const ::System::String* DNDBFANMBKD; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CloseRogueNousPages* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CloseRogueNousPages*))((::PBYTE)hIl2Cpp + FPOBDEHNOKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOBDEHNOKE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOBDEHNOKE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOBDEHNOKE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FPOBDEHNOKE_TICK_OFFSET))(this, a1);
		}

	};
