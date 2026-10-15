#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsEvolveBuildCountDownItemShow; }
namespace RPG::GameCore { class TaskContext; }

#define DBDLGGJAJNK_CTOR_OFFSET UNITYSDK_OFFSET(0xDFDCDB0)
#define DBDLGGJAJNK_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDFDCDE0)

inline static constexpr unsigned int DBDLGGJAJNK_TypeDefinitionIndex = 54655;

	class DBDLGGJAJNK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*))((::PBYTE)hIl2Cpp + DBDLGGJAJNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDLGGJAJNK_EVALUATE_OFFSET))(this);
		}

	};
