#pragma once
#include "unitysdk/unitysdk.h"
class PBEMMHIOJBO;
namespace RPG::GameCore { class TaskContext; }

#define ONAFNHKGFBE_CTOR_OFFSET UNITYSDK_OFFSET(0xBF42B00)
#define ONAFNHKGFBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF42B30)

inline static constexpr unsigned int ONAFNHKGFBE_TypeDefinitionIndex = 55093;

	class ONAFNHKGFBE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PBEMMHIOJBO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PBEMMHIOJBO*))((::PBYTE)hIl2Cpp + ONAFNHKGFBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAFNHKGFBE_ONTASKBEGIN_OFFSET))(this);
		}

	};
