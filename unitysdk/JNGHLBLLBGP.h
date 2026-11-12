#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_CommitCD; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define JNGHLBLLBGP_CDKBDAHPJPM_OFFSET UNITYSDK_OFFSET(0xBAA9AA0)
#define JNGHLBLLBGP_CTOR_OFFSET UNITYSDK_OFFSET(0xBAA9A00)
#define JNGHLBLLBGP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAA9A30)
#define JNGHLBLLBGP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBAA9CD0)

inline static constexpr unsigned int JNGHLBLLBGP_TypeDefinitionIndex = 53333;

	class JNGHLBLLBGP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_CommitCD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_CommitCD*))((::PBYTE)hIl2Cpp + JNGHLBLLBGP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNGHLBLLBGP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNGHLBLLBGP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void CDKBDAHPJPM(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + JNGHLBLLBGP_CDKBDAHPJPM_OFFSET))(this, a1, a2);
		}

	};
