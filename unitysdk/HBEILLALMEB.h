#pragma once
#include "unitysdk/unitysdk.h"
class GJCIOLMFNAK;
namespace RPG::GameCore { class TaskContext; }

#define HBEILLALMEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1590B0)
#define HBEILLALMEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C1590E0)

inline static constexpr unsigned int HBEILLALMEB_TypeDefinitionIndex = 54378;

	class HBEILLALMEB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GJCIOLMFNAK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GJCIOLMFNAK*))((::PBYTE)hIl2Cpp + HBEILLALMEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBEILLALMEB_ONTASKBEGIN_OFFSET))(this);
		}

	};
