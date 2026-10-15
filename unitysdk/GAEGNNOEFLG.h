#pragma once
#include "unitysdk/unitysdk.h"
class NOENANIGIIK;
namespace RPG::GameCore { class TaskContext; }

#define GAEGNNOEFLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1592E950)
#define GAEGNNOEFLG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1592E980)

inline static constexpr unsigned int GAEGNNOEFLG_TypeDefinitionIndex = 52472;

	class GAEGNNOEFLG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NOENANIGIIK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NOENANIGIIK*))((::PBYTE)hIl2Cpp + GAEGNNOEFLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEGNNOEFLG_ONTASKBEGIN_OFFSET))(this);
		}

	};
