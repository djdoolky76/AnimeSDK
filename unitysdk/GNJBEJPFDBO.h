#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GNJBEJPFDBO;
namespace RPG::GameCore { class TaskConfig; }

#define GNJBEJPFDBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE3EF60)
#define GNJBEJPFDBO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE3EF70)
#define GNJBEJPFDBO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE3EF30)

inline static constexpr unsigned int GNJBEJPFDBO_TypeDefinitionIndex = 21455;

	class GNJBEJPFDBO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FNACALDOOIF; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CABHEAGLNDD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJBEJPFDBO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GNJBEJPFDBO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GNJBEJPFDBO*))((::PBYTE)hIl2Cpp + GNJBEJPFDBO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GNJBEJPFDBO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GNJBEJPFDBO*))((::PBYTE)hIl2Cpp + GNJBEJPFDBO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
