#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PNPBCLAMINI;
namespace RPG::GameCore { class TaskConfig; }

#define PNPBCLAMINI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E7610)
#define PNPBCLAMINI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2E7620)
#define PNPBCLAMINI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2E75E0)

inline static constexpr unsigned int PNPBCLAMINI_TypeDefinitionIndex = 21551;

	class PNPBCLAMINI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DAGEPEOGNDD; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* IMACINJMEJJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPBCLAMINI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PNPBCLAMINI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PNPBCLAMINI*))((::PBYTE)hIl2Cpp + PNPBCLAMINI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PNPBCLAMINI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PNPBCLAMINI*))((::PBYTE)hIl2Cpp + PNPBCLAMINI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
