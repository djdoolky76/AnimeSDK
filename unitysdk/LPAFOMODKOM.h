#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CakeRaceBanDragCamera; }
namespace RPG::GameCore { class TaskContext; }

#define LPAFOMODKOM_CTOR_OFFSET UNITYSDK_OFFSET(0xB80F760)
#define LPAFOMODKOM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB80F790)

inline static constexpr unsigned int LPAFOMODKOM_TypeDefinitionIndex = 52620;

	class LPAFOMODKOM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CakeRaceBanDragCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CakeRaceBanDragCamera*))((::PBYTE)hIl2Cpp + LPAFOMODKOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAFOMODKOM_ONTASKBEGIN_OFFSET))(this);
		}

	};
