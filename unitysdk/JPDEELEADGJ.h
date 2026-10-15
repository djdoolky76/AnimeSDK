#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JPDEELEADGJ;
namespace RPG::GameCore { class TaskConfig; }

#define JPDEELEADGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D02C9E0)
#define JPDEELEADGJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D02C9F0)
#define JPDEELEADGJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D02C9B0)

inline static constexpr unsigned int JPDEELEADGJ_TypeDefinitionIndex = 20989;

	class JPDEELEADGJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LPGBHJJJKNC; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* EGOILBBICED; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DOLKEDPHINJ; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* GEOFCAEMDON; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OEJBAEINKFK; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FBICKGEMBDK; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDEELEADGJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JPDEELEADGJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JPDEELEADGJ*))((::PBYTE)hIl2Cpp + JPDEELEADGJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JPDEELEADGJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JPDEELEADGJ*))((::PBYTE)hIl2Cpp + JPDEELEADGJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
