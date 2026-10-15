#pragma once
#include "unitysdk/unitysdk.h"
class IHJOIKOLCBG;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define NNKOEFIANIB_CTOR_OFFSET UNITYSDK_OFFSET(0xBCC7EA0)
#define NNKOEFIANIB_DFHENEJLPIB_OFFSET UNITYSDK_OFFSET(0xBCC8110)
#define NNKOEFIANIB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCC7ED0)

inline static constexpr unsigned int NNKOEFIANIB_TypeDefinitionIndex = 55223;

	class NNKOEFIANIB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IHJOIKOLCBG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IHJOIKOLCBG*))((::PBYTE)hIl2Cpp + NNKOEFIANIB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKOEFIANIB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean DFHENEJLPIB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NNKOEFIANIB_DFHENEJLPIB_OFFSET))(this, a1);
		}

	};
