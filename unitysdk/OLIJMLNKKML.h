#pragma once
#include "unitysdk/unitysdk.h"
class MHJOIIOMENF;
namespace RPG::GameCore { class TaskContext; }

#define OLIJMLNKKML_CTOR_OFFSET UNITYSDK_OFFSET(0xBF05F70)
#define OLIJMLNKKML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF05FA0)

inline static constexpr unsigned int OLIJMLNKKML_TypeDefinitionIndex = 54869;

	class OLIJMLNKKML
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MHJOIIOMENF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MHJOIIOMENF*))((::PBYTE)hIl2Cpp + OLIJMLNKKML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLIJMLNKKML_ONTASKBEGIN_OFFSET))(this);
		}

	};
