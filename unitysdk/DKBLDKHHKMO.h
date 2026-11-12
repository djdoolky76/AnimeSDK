#pragma once
#include "unitysdk/unitysdk.h"
class BIBONMCGDMH;
namespace RPG::GameCore { class TaskContext; }

#define DKBLDKHHKMO_CTOR_OFFSET UNITYSDK_OFFSET(0xFFD8060)
#define DKBLDKHHKMO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFFD8090)

inline static constexpr unsigned int DKBLDKHHKMO_TypeDefinitionIndex = 59760;

	class DKBLDKHHKMO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BIBONMCGDMH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BIBONMCGDMH*))((::PBYTE)hIl2Cpp + DKBLDKHHKMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBLDKHHKMO_ONTASKBEGIN_OFFSET))(this);
		}

	};
