#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NCENMPKDKFK;
namespace RPG::GameCore { class TaskConfig; }

#define NCENMPKDKFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F3F80)
#define NCENMPKDKFK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1F3F90)
#define NCENMPKDKFK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1F3F50)

inline static constexpr unsigned int NCENMPKDKFK_TypeDefinitionIndex = 19897;

	class NCENMPKDKFK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PAHHNMLMNLN; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DNCFBGANPCD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCENMPKDKFK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NCENMPKDKFK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NCENMPKDKFK*))((::PBYTE)hIl2Cpp + NCENMPKDKFK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NCENMPKDKFK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NCENMPKDKFK*))((::PBYTE)hIl2Cpp + NCENMPKDKFK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
