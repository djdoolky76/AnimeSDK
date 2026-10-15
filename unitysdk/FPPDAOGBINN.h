#pragma once
#include "unitysdk/unitysdk.h"
class CBJMIBEHHND;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define FPPDAOGBINN_CTOR_OFFSET UNITYSDK_OFFSET(0x15917B60)
#define FPPDAOGBINN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15917B90)
#define FPPDAOGBINN_JONMGNFBJLE_OFFSET UNITYSDK_OFFSET(0x15917DC0)
#define FPPDAOGBINN_LFGFOBFEJFD_OFFSET UNITYSDK_OFFSET(0x15917D30)

inline static constexpr unsigned int FPPDAOGBINN_TypeDefinitionIndex = 54716;

	class FPPDAOGBINN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CBJMIBEHHND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CBJMIBEHHND*))((::PBYTE)hIl2Cpp + FPPDAOGBINN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPDAOGBINN_EVALUATE_OFFSET))(this);
		}

		static ::System::Boolean LFGFOBFEJFD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FPPDAOGBINN_LFGFOBFEJFD_OFFSET))(a1);
		}

		::System::Boolean JONMGNFBJLE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FPPDAOGBINN_JONMGNFBJLE_OFFSET))(this, a1);
		}

	};
