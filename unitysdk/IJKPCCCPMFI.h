#pragma once
#include "unitysdk/unitysdk.h"
class JDACHOEFDLJ;
namespace RPG::GameCore { class TaskContext; }

#define IJKPCCCPMFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1646BD20)
#define IJKPCCCPMFI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1646BD50)

inline static constexpr unsigned int IJKPCCCPMFI_TypeDefinitionIndex = 54880;

	class IJKPCCCPMFI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JDACHOEFDLJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JDACHOEFDLJ*))((::PBYTE)hIl2Cpp + IJKPCCCPMFI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKPCCCPMFI_ONTASKBEGIN_OFFSET))(this);
		}

	};
