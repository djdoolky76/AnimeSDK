#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AEDAMOLHMAJ;
class EEFPHECAIEK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }

#define EEFPHECAIEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD47B70)
#define EEFPHECAIEK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD47B80)
#define EEFPHECAIEK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD47B40)

inline static constexpr unsigned int EEFPHECAIEK_TypeDefinitionIndex = 24124;

	class EEFPHECAIEK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CABHEAGLNDD; // 0x18
		::Il2CppArray<::AEDAMOLHMAJ*>* GBNDBGJLDKC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFPHECAIEK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EEFPHECAIEK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EEFPHECAIEK*))((::PBYTE)hIl2Cpp + EEFPHECAIEK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EEFPHECAIEK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EEFPHECAIEK*))((::PBYTE)hIl2Cpp + EEFPHECAIEK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
