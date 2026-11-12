#pragma once
#include "unitysdk/unitysdk.h"
class GHNDGHIBKLH;
namespace RPG::GameCore { class TaskContext; }

#define HDHKBOCLBKL_CTOR_OFFSET UNITYSDK_OFFSET(0x16B771A0)
#define HDHKBOCLBKL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B771D0)
#define HDHKBOCLBKL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16B77260)

inline static constexpr unsigned int HDHKBOCLBKL_TypeDefinitionIndex = 54812;

	class HDHKBOCLBKL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GHNDGHIBKLH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GHNDGHIBKLH*))((::PBYTE)hIl2Cpp + HDHKBOCLBKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHKBOCLBKL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHKBOCLBKL_ONTASKRESET_OFFSET))(this);
		}

	};
