#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HBCJLHBBDAB;
namespace RPG::GameCore { class DynamicFloat; }

#define HBCJLHBBDAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E05F640)
#define HBCJLHBBDAB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E05F8C0)
#define HBCJLHBBDAB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E05F600)

inline static constexpr unsigned int HBCJLHBBDAB_TypeDefinitionIndex = 24633;

	class HBCJLHBBDAB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* NMMOOCJILEC; // 0x18
		::RPG::GameCore::DynamicFloat* AANFIMJNOKA; // 0x20
		::RPG::GameCore::DynamicFloat* FBIJGGIOLNO; // 0x28
		::RPG::GameCore::DynamicFloat* OCGINFHNEPF; // 0x30
		::RPG::GameCore::DynamicFloat* PINNPLKBABH; // 0x38
		::RPG::GameCore::DynamicFloat* IHLBHMNLJMN; // 0x40
		::RPG::GameCore::DynamicFloat* DIPCHCFIPDB; // 0x48
		::RPG::GameCore::DynamicFloat* NBEEPDPFAHG; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBCJLHBBDAB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HBCJLHBBDAB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HBCJLHBBDAB*))((::PBYTE)hIl2Cpp + HBCJLHBBDAB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HBCJLHBBDAB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HBCJLHBBDAB*))((::PBYTE)hIl2Cpp + HBCJLHBBDAB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
