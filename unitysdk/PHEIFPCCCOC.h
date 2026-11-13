#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PHEIFPCCCOC;
namespace RPG::GameCore { class DynamicFloat; }

#define PHEIFPCCCOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E723A80)
#define PHEIFPCCCOC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E723A90)
#define PHEIFPCCCOC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E723A50)

inline static constexpr unsigned int PHEIFPCCCOC_TypeDefinitionIndex = 22949;

	class PHEIFPCCCOC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* EIMIIHEDKFM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEIFPCCCOC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PHEIFPCCCOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PHEIFPCCCOC*))((::PBYTE)hIl2Cpp + PHEIFPCCCOC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PHEIFPCCCOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PHEIFPCCCOC*))((::PBYTE)hIl2Cpp + PHEIFPCCCOC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
