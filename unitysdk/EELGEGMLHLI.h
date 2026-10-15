#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowRogueTalkUI; }
namespace RPG::GameCore { class TaskContext; }

#define EELGEGMLHLI_CTOR_OFFSET UNITYSDK_OFFSET(0x13A36AA0)
#define EELGEGMLHLI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A36AB0)
#define EELGEGMLHLI_JBKBBNFJAKN_OFFSET UNITYSDK_OFFSET(0x13A36BD0)
#define EELGEGMLHLI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A36AF0)
#define EELGEGMLHLI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A36B80)
#define EELGEGMLHLI_TICK_OFFSET UNITYSDK_OFFSET(0x13A36C40)

inline static constexpr unsigned int EELGEGMLHLI_TypeDefinitionIndex = 58689;

	class EELGEGMLHLI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowRogueTalkUI* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowRogueTalkUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowRogueTalkUI*))((::PBYTE)hIl2Cpp + EELGEGMLHLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGEGMLHLI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGEGMLHLI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGEGMLHLI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void JBKBBNFJAKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGEGMLHLI_JBKBBNFJAKN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EELGEGMLHLI_TICK_OFFSET))(this, a1);
		}

	};
