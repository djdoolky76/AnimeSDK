#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NKCEJINFMPB;
namespace RPG::GameCore { class TaskConfig; }

#define NKCEJINFMPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D22EA20)
#define NKCEJINFMPB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D22EA30)
#define NKCEJINFMPB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D22E9F0)

inline static constexpr unsigned int NKCEJINFMPB_TypeDefinitionIndex = 21457;

	class NKCEJINFMPB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* NBICDNOLJCO; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DAPMIHGAIOF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKCEJINFMPB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NKCEJINFMPB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NKCEJINFMPB*))((::PBYTE)hIl2Cpp + NKCEJINFMPB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NKCEJINFMPB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NKCEJINFMPB*))((::PBYTE)hIl2Cpp + NKCEJINFMPB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
