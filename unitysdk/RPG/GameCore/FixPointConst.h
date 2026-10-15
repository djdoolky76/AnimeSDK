#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FixPointConst; }

#define RPG_GAMECORE_FIXPOINTCONST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E3630)
#define RPG_GAMECORE_FIXPOINTCONST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E3500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixPointConst_TypeDefinitionIndex = 17047;

	class FixPointConst : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::Int32>* SinLut; // 0x10
		::Il2CppArray<::System::Int32>* TanLut; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTCONST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FixPointConst* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FixPointConst*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTCONST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
