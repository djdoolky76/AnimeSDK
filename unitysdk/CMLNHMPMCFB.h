#pragma once
#include "unitysdk/unitysdk.h"
class HDOCLPDDMKK;
namespace RPG::GameCore { class TaskContext; }

#define CMLNHMPMCFB_CTOR_OFFSET UNITYSDK_OFFSET(0xDA3B6C0)
#define CMLNHMPMCFB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDA3B6F0)

inline static constexpr unsigned int CMLNHMPMCFB_TypeDefinitionIndex = 53715;

	class CMLNHMPMCFB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HDOCLPDDMKK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HDOCLPDDMKK*))((::PBYTE)hIl2Cpp + CMLNHMPMCFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMLNHMPMCFB_EVALUATE_OFFSET))(this);
		}

	};
