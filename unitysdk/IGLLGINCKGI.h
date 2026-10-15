#pragma once
#include "unitysdk/unitysdk.h"
class LDNFONFKMFJ;
namespace RPG::GameCore { class TaskContext; }

#define IGLLGINCKGI_CTOR_OFFSET UNITYSDK_OFFSET(0x164032D0)
#define IGLLGINCKGI_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16403300)

inline static constexpr unsigned int IGLLGINCKGI_TypeDefinitionIndex = 53644;

	class IGLLGINCKGI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LDNFONFKMFJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LDNFONFKMFJ*))((::PBYTE)hIl2Cpp + IGLLGINCKGI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLGINCKGI_EVALUATE_OFFSET))(this);
		}

	};
