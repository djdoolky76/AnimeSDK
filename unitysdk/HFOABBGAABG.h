#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class LMLFPLOLDIA;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Action; }

#define HFOABBGAABG_GOPCNJKMHGJ_OFFSET UNITYSDK_OFFSET(0x15C807C0)
#define HFOABBGAABG_JGBDDOKIMAI_OFFSET UNITYSDK_OFFSET(0x15C80720)

inline static constexpr unsigned int HFOABBGAABG_TypeDefinitionIndex = 54131;

	class HFOABBGAABG : public ::System::Object
	{
	public:
		static ::System::Void JGBDDOKIMAI(::RPG::GameCore::GameWorld* a1, ::LMLFPLOLDIA* a2, ::System::Action* a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::LMLFPLOLDIA*, ::System::Action*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HFOABBGAABG_JGBDDOKIMAI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GOPCNJKMHGJ(::RPG::GameCore::GameWorld* a1, ::LMLFPLOLDIA* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::LMLFPLOLDIA*))((::PBYTE)hIl2Cpp + HFOABBGAABG_GOPCNJKMHGJ_OFFSET))(a1, a2);
		}

	};
