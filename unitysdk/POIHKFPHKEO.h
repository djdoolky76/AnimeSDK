#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class POIHKFPHKEO;
namespace RPG::GameCore { class TaskConfig; }

#define POIHKFPHKEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D316E80)
#define POIHKFPHKEO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D316E90)
#define POIHKFPHKEO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D316E50)

inline static constexpr unsigned int POIHKFPHKEO_TypeDefinitionIndex = 10227;

	class POIHKFPHKEO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* GACJDECHDMM; // 0x18
		::System::UInt32 IHALCLABNOJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIHKFPHKEO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::POIHKFPHKEO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::POIHKFPHKEO*))((::PBYTE)hIl2Cpp + POIHKFPHKEO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::POIHKFPHKEO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::POIHKFPHKEO*))((::PBYTE)hIl2Cpp + POIHKFPHKEO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
