#pragma once
#include "unitysdk/unitysdk.h"
class LDMOAIJBDBP;
namespace RPG::GameCore { class TaskContext; }

#define MMGBCFIDLGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B934890)
#define MMGBCFIDLGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B9348C0)

inline static constexpr unsigned int MMGBCFIDLGL_TypeDefinitionIndex = 54033;

	class MMGBCFIDLGL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LDMOAIJBDBP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LDMOAIJBDBP*))((::PBYTE)hIl2Cpp + MMGBCFIDLGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMGBCFIDLGL_ONTASKBEGIN_OFFSET))(this);
		}

	};
