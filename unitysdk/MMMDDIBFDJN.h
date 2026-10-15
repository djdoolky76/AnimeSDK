#pragma once
#include "unitysdk/unitysdk.h"
class MMBPCMGMMIH;
namespace RPG::GameCore { class TaskContext; }

#define MMMDDIBFDJN_CTOR_OFFSET UNITYSDK_OFFSET(0xB9D31A0)
#define MMMDDIBFDJN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9D31D0)
#define MMMDDIBFDJN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9D3210)

inline static constexpr unsigned int MMMDDIBFDJN_TypeDefinitionIndex = 55504;

	class MMMDDIBFDJN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MMBPCMGMMIH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MMBPCMGMMIH*))((::PBYTE)hIl2Cpp + MMMDDIBFDJN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMDDIBFDJN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMDDIBFDJN_ONTASKBEGIN_OFFSET))(this);
		}

	};
