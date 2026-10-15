#pragma once
#include "unitysdk/unitysdk.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class ByCheckTrialCharacterDie; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define AGFHDKLNAAD_AKBHCCCOMAD_OFFSET UNITYSDK_OFFSET(0xCF29C40)
#define AGFHDKLNAAD_CTOR_OFFSET UNITYSDK_OFFSET(0xCF29500)
#define AGFHDKLNAAD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCF296C0)
#define AGFHDKLNAAD_FEJKOHFHHNN_OFFSET UNITYSDK_OFFSET(0xCF29A30)
#define AGFHDKLNAAD_FFAMPICKBJD_OFFSET UNITYSDK_OFFSET(0xCF29850)
#define AGFHDKLNAAD_GGHIDBNAJFA_OFFSET UNITYSDK_OFFSET(0xCF29B90)
#define AGFHDKLNAAD_JCDJLKDDHPC_OFFSET UNITYSDK_OFFSET(0xCF297F0)

	class AGFHDKLNAAD
	{
	public:
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckTrialCharacterDie* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckTrialCharacterDie*))((::PBYTE)hIl2Cpp + AGFHDKLNAAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFHDKLNAAD_EVALUATE_OFFSET))(this);
		}

		::System::Boolean JCDJLKDDHPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFHDKLNAAD_JCDJLKDDHPC_OFFSET))(this);
		}

		::System::Void FFAMPICKBJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFHDKLNAAD_FFAMPICKBJD_OFFSET))(this);
		}

		::System::Void FEJKOHFHHNN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + AGFHDKLNAAD_FEJKOHFHHNN_OFFSET))(this, a1);
		}

		::System::Void GGHIDBNAJFA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + AGFHDKLNAAD_GGHIDBNAJFA_OFFSET))(this, a1);
		}

		::System::Void AKBHCCCOMAD(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + AGFHDKLNAAD_AKBHCCCOMAD_OFFSET))(this, a1);
		}

	};
