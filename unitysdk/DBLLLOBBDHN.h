#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DBLLLOBBDHN;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }

#define DBLLLOBBDHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCCFCE0)
#define DBLLLOBBDHN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCCFCF0)
#define DBLLLOBBDHN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCCFCB0)

inline static constexpr unsigned int DBLLLOBBDHN_TypeDefinitionIndex = 21474;

	class DBLLLOBBDHN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* EOGNJOACCJJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLLLOBBDHN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DBLLLOBBDHN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DBLLLOBBDHN*))((::PBYTE)hIl2Cpp + DBLLLOBBDHN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DBLLLOBBDHN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DBLLLOBBDHN*))((::PBYTE)hIl2Cpp + DBLLLOBBDHN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
