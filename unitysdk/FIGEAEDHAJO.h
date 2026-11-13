#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdaptEntityPosition; }
namespace RPG::GameCore { class TaskContext; }

#define FIGEAEDHAJO_CTOR_OFFSET UNITYSDK_OFFSET(0x19803410)
#define FIGEAEDHAJO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19803440)

inline static constexpr unsigned int FIGEAEDHAJO_TypeDefinitionIndex = 59093;

	class FIGEAEDHAJO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdaptEntityPosition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdaptEntityPosition*))((::PBYTE)hIl2Cpp + FIGEAEDHAJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIGEAEDHAJO_ONTASKBEGIN_OFFSET))(this);
		}

	};
