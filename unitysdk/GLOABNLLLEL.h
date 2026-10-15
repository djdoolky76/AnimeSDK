#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Retarget.h"
class FCOEMCEDLNL;
class GLOABNLLLEL;
namespace RPG::GameCore { class DynamicFloat; }

#define GLOABNLLLEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE38890)
#define GLOABNLLLEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE38940)
#define GLOABNLLLEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE387B0)

inline static constexpr unsigned int GLOABNLLLEL_TypeDefinitionIndex = 22908;

	class GLOABNLLLEL : public ::RPG::GameCore::Retarget
	{
	public:
		::RPG::GameCore::DynamicFloat* JKDFIMCIKFJ; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOABNLLLEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GLOABNLLLEL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GLOABNLLLEL*))((::PBYTE)hIl2Cpp + GLOABNLLLEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GLOABNLLLEL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GLOABNLLLEL*))((::PBYTE)hIl2Cpp + GLOABNLLLEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
