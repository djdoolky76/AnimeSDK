#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class PlayAndWaitLimaoNewsTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define LHEECDNNIBO_CTOR_OFFSET UNITYSDK_OFFSET(0xB6AB610)
#define LHEECDNNIBO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6AB620)
#define LHEECDNNIBO_EPABMBIGIGK_OFFSET UNITYSDK_OFFSET(0xB6AB870)
#define LHEECDNNIBO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6AB6E0)
#define LHEECDNNIBO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6AB7C0)
#define LHEECDNNIBO_TICK_OFFSET UNITYSDK_OFFSET(0xB6AB810)

inline static constexpr unsigned int LHEECDNNIBO_TypeDefinitionIndex = 52949;

	class LHEECDNNIBO : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::PlayAndWaitLimaoNewsTalk* OFKGLJOAMLD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::PlayAndWaitLimaoNewsTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::PlayAndWaitLimaoNewsTalk*))((::PBYTE)hIl2Cpp + LHEECDNNIBO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEECDNNIBO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEECDNNIBO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEECDNNIBO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHEECDNNIBO_TICK_OFFSET))(this, a1);
		}

		::System::Void EPABMBIGIGK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHEECDNNIBO_EPABMBIGIGK_OFFSET))(this, a1);
		}

	};
