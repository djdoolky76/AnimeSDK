#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GLBAFPOFIKK;
namespace RPG::GameCore { class DynamicFloat; }

#define GLBAFPOFIKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE33B10)
#define GLBAFPOFIKK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE33BB0)
#define GLBAFPOFIKK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE33A50)

inline static constexpr unsigned int GLBAFPOFIKK_TypeDefinitionIndex = 23370;

	class GLBAFPOFIKK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MOHHAFINOHJ; // 0x18
		::RPG::GameCore::DynamicFloat* JLEJBKOKIHD; // 0x20
		::RPG::GameCore::DynamicFloat* KBFAHKBJHBN; // 0x28
		::System::Boolean MOKNCFJICIC; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBAFPOFIKK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GLBAFPOFIKK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GLBAFPOFIKK*))((::PBYTE)hIl2Cpp + GLBAFPOFIKK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GLBAFPOFIKK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GLBAFPOFIKK*))((::PBYTE)hIl2Cpp + GLBAFPOFIKK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
