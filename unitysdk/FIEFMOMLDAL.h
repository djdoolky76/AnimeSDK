#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetCharacterStealthState; }
namespace RPG::GameCore { class TaskContext; }

#define FIEFMOMLDAL_CTOR_OFFSET UNITYSDK_OFFSET(0x157A4C60)
#define FIEFMOMLDAL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157A4C90)

inline static constexpr unsigned int FIEFMOMLDAL_TypeDefinitionIndex = 53225;

	class FIEFMOMLDAL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterStealthState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterStealthState*))((::PBYTE)hIl2Cpp + FIEFMOMLDAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEFMOMLDAL_ONTASKBEGIN_OFFSET))(this);
		}

	};
