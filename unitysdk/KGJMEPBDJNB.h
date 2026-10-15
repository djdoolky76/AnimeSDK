#pragma once
#include "unitysdk/unitysdk.h"
class ELLFLJKDCAE;
namespace RPG::GameCore { class TaskContext; }

#define KGJMEPBDJNB_CTOR_OFFSET UNITYSDK_OFFSET(0xB3E7600)
#define KGJMEPBDJNB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3E7630)

inline static constexpr unsigned int KGJMEPBDJNB_TypeDefinitionIndex = 55662;

	class KGJMEPBDJNB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ELLFLJKDCAE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ELLFLJKDCAE*))((::PBYTE)hIl2Cpp + KGJMEPBDJNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJMEPBDJNB_ONTASKBEGIN_OFFSET))(this);
		}

	};
