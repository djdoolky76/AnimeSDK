#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByProperty; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GIBFBLMJLLM_COMPARE_OFFSET UNITYSDK_OFFSET(0x15A2FDD0)
#define GIBFBLMJLLM_CTOR_OFFSET UNITYSDK_OFFSET(0x15A2FDB0)
#define GIBFBLMJLLM_JADDDEEOOAE_OFFSET UNITYSDK_OFFSET(0x15A2FF40)
#define GIBFBLMJLLM_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0x15A30100)
#define GIBFBLMJLLM_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x15A30150)

	class GIBFBLMJLLM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetSortByProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByProperty*))((::PBYTE)hIl2Cpp + GIBFBLMJLLM_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GIBFBLMJLLM_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Void JADDDEEOOAE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIBFBLMJLLM_JADDDEEOOAE_OFFSET))(this, a1);
		}

		::System::Void JIGJDOFEJMI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + GIBFBLMJLLM_JIGJDOFEJMI_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GIBFBLMJLLM_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
