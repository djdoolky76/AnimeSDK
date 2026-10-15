#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToastPile; }

#define DFLLNEPOCAH_CTOR_OFFSET UNITYSDK_OFFSET(0xE832510)
#define DFLLNEPOCAH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE832540)

inline static constexpr unsigned int DFLLNEPOCAH_TypeDefinitionIndex = 53409;

	class DFLLNEPOCAH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToastPile* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToastPile*))((::PBYTE)hIl2Cpp + DFLLNEPOCAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLLNEPOCAH_ONTASKBEGIN_OFFSET))(this);
		}

	};
