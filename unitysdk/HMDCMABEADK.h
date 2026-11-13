#pragma once
#include "unitysdk/unitysdk.h"
class LLFEHBKEFDM;
namespace RPG::GameCore { class TaskContext; }

#define HMDCMABEADK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A34BDB0)
#define HMDCMABEADK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A34BDE0)
#define HMDCMABEADK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A34BE20)

inline static constexpr unsigned int HMDCMABEADK_TypeDefinitionIndex = 54761;

	class HMDCMABEADK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LLFEHBKEFDM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LLFEHBKEFDM*))((::PBYTE)hIl2Cpp + HMDCMABEADK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDCMABEADK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDCMABEADK_ONTASKBEGIN_OFFSET))(this);
		}

	};
