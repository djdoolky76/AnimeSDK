#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GluttonyProgressLeaderType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FJLJAAFGCBN;
namespace RPG::GameCore { class DynamicFloat; }

#define FJLJAAFGCBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E462060)
#define FJLJAAFGCBN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E462110)
#define FJLJAAFGCBN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E461F80)

inline static constexpr unsigned int FJLJAAFGCBN_TypeDefinitionIndex = 23226;

	class FJLJAAFGCBN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* LMJHJGDKOEM; // 0x18
		::RPG::GameCore::DynamicFloat* PKKNIHPAHBD; // 0x20
		::System::Boolean GNDCCBNILML; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::GluttonyProgressLeaderType CDNLLLFPEPG; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLJAAFGCBN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FJLJAAFGCBN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FJLJAAFGCBN*))((::PBYTE)hIl2Cpp + FJLJAAFGCBN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FJLJAAFGCBN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FJLJAAFGCBN*))((::PBYTE)hIl2Cpp + FJLJAAFGCBN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
