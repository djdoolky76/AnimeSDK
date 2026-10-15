#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MDJFAJMPODL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define MDJFAJMPODL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D149540)
#define MDJFAJMPODL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D149550)
#define MDJFAJMPODL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D149500)

inline static constexpr unsigned int MDJFAJMPODL_TypeDefinitionIndex = 19914;

	class MDJFAJMPODL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ODNBACCMKHM; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* DNCFBGANPCD; // 0x20
		::RPG::GameCore::DynamicFloat* HCDEOKNIGKG; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LADICPOACOE; // 0x30
		::System::Boolean HNMFDELHIEK; // 0x38
		::System::Byte _padding0[0x1];
		::RPG::GameCore::FateRinCardPileType JKODDAJDOJO; // 0x3A
		::RPG::GameCore::FateRinCardPileType IANCHJFBKFC; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJFAJMPODL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MDJFAJMPODL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDJFAJMPODL*))((::PBYTE)hIl2Cpp + MDJFAJMPODL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MDJFAJMPODL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDJFAJMPODL*))((::PBYTE)hIl2Cpp + MDJFAJMPODL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
