#pragma once
#include "unitysdk/unitysdk.h"
class CMAEOIMLFLK;
namespace RPG::GameCore { class TaskContext; }

#define KMNJDOKDFHA_CTOR_OFFSET UNITYSDK_OFFSET(0x18F87640)
#define KMNJDOKDFHA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F87670)

inline static constexpr unsigned int KMNJDOKDFHA_TypeDefinitionIndex = 56702;

	class KMNJDOKDFHA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CMAEOIMLFLK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CMAEOIMLFLK*))((::PBYTE)hIl2Cpp + KMNJDOKDFHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNJDOKDFHA_ONTASKBEGIN_OFFSET))(this);
		}

	};
