#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToastLockFunction; }

#define CDIOECPGBIN_CTOR_OFFSET UNITYSDK_OFFSET(0xC767C80)
#define CDIOECPGBIN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC767CB0)

inline static constexpr unsigned int CDIOECPGBIN_TypeDefinitionIndex = 53406;

	class CDIOECPGBIN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToastLockFunction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToastLockFunction*))((::PBYTE)hIl2Cpp + CDIOECPGBIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIOECPGBIN_ONTASKBEGIN_OFFSET))(this);
		}

	};
