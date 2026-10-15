#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BKEOMHKCMKK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define BKEOMHKCMKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81AB20)
#define BKEOMHKCMKK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D81AB30)
#define BKEOMHKCMKK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D81AAF0)

inline static constexpr unsigned int BKEOMHKCMKK_TypeDefinitionIndex = 22857;

	class BKEOMHKCMKK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MDJKJJEJNFG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEOMHKCMKK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BKEOMHKCMKK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BKEOMHKCMKK*))((::PBYTE)hIl2Cpp + BKEOMHKCMKK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BKEOMHKCMKK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BKEOMHKCMKK*))((::PBYTE)hIl2Cpp + BKEOMHKCMKK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
