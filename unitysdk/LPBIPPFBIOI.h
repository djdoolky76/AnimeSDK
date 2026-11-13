#pragma once
#include "unitysdk/unitysdk.h"
class OHFCLBIKMKD;
namespace RPG::GameCore { class TaskContext; }

#define LPBIPPFBIOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C5AB0)
#define LPBIPPFBIOI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A5C5AE0)

inline static constexpr unsigned int LPBIPPFBIOI_TypeDefinitionIndex = 54503;

	class LPBIPPFBIOI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OHFCLBIKMKD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OHFCLBIKMKD*))((::PBYTE)hIl2Cpp + LPBIPPFBIOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBIPPFBIOI_ONTASKBEGIN_OFFSET))(this);
		}

	};
