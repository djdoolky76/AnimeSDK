#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfWaveOrder; }

#define RPG_GAMECORE_ELFWAVEORDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60C4B0)
#define RPG_GAMECORE_ELFWAVEORDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60C3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfWaveOrder_TypeDefinitionIndex = 18497;

	class ElfWaveOrder : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* RecipeList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFWAVEORDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfWaveOrder* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfWaveOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFWAVEORDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
