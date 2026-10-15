#pragma once
#include "unitysdk/unitysdk.h"
class JGEEAHDFBGN;
namespace RPG::GameCore { class TaskContext; }

#define OABKIDCCLFL_CTOR_OFFSET UNITYSDK_OFFSET(0xBD11D40)
#define OABKIDCCLFL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD11D70)

inline static constexpr unsigned int OABKIDCCLFL_TypeDefinitionIndex = 52787;

	class OABKIDCCLFL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JGEEAHDFBGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JGEEAHDFBGN*))((::PBYTE)hIl2Cpp + OABKIDCCLFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABKIDCCLFL_ONTASKBEGIN_OFFSET))(this);
		}

	};
