#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CCCOIPHHAPN;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define CCCOIPHHAPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DBBE0)
#define CCCOIPHHAPN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9DBBF0)
#define CCCOIPHHAPN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9DBBB0)

inline static constexpr unsigned int CCCOIPHHAPN_TypeDefinitionIndex = 24166;

	class CCCOIPHHAPN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GELAMLPPBKE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCOIPHHAPN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CCCOIPHHAPN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CCCOIPHHAPN*))((::PBYTE)hIl2Cpp + CCCOIPHHAPN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CCCOIPHHAPN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CCCOIPHHAPN*))((::PBYTE)hIl2Cpp + CCCOIPHHAPN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
