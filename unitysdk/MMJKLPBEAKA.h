#pragma once
#include "unitysdk/unitysdk.h"
class LLPEOHPKGOM;
namespace RPG::GameCore { class TaskContext; }

#define MMJKLPBEAKA_CTOR_OFFSET UNITYSDK_OFFSET(0xB9CE270)
#define MMJKLPBEAKA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9CE2A0)

inline static constexpr unsigned int MMJKLPBEAKA_TypeDefinitionIndex = 58535;

	class MMJKLPBEAKA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LLPEOHPKGOM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LLPEOHPKGOM*))((::PBYTE)hIl2Cpp + MMJKLPBEAKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMJKLPBEAKA_ONTASKBEGIN_OFFSET))(this);
		}

	};
