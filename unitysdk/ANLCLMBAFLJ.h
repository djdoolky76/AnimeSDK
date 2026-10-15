#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AttachEntityUnselectable; }
namespace RPG::GameCore { class TaskContext; }

#define ANLCLMBAFLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1588D460)
#define ANLCLMBAFLJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1588D490)

inline static constexpr unsigned int ANLCLMBAFLJ_TypeDefinitionIndex = 54858;

	class ANLCLMBAFLJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AttachEntityUnselectable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttachEntityUnselectable*))((::PBYTE)hIl2Cpp + ANLCLMBAFLJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLCLMBAFLJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
