#pragma once
#include "unitysdk/unitysdk.h"
class BFKKNBNIBFB;
namespace RPG::GameCore { class TaskContext; }

#define OIIEDJLACAA_CTOR_OFFSET UNITYSDK_OFFSET(0xBE8E090)
#define OIIEDJLACAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE8E0C0)

inline static constexpr unsigned int OIIEDJLACAA_TypeDefinitionIndex = 55615;

	class OIIEDJLACAA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BFKKNBNIBFB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BFKKNBNIBFB*))((::PBYTE)hIl2Cpp + OIIEDJLACAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIEDJLACAA_ONTASKBEGIN_OFFSET))(this);
		}

	};
