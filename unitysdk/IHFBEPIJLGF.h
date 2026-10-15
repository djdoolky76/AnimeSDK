#pragma once
#include "unitysdk/unitysdk.h"
class KCFJEOEKGMH;
namespace RPG::GameCore { class TaskContext; }

#define IHFBEPIJLGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1641AAF0)
#define IHFBEPIJLGF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1641AB20)

inline static constexpr unsigned int IHFBEPIJLGF_TypeDefinitionIndex = 58787;

	class IHFBEPIJLGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KCFJEOEKGMH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KCFJEOEKGMH*))((::PBYTE)hIl2Cpp + IHFBEPIJLGF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHFBEPIJLGF_ONTASKBEGIN_OFFSET))(this);
		}

	};
