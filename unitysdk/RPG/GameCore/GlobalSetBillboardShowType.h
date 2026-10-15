#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GlobalSetBillboardShowType; }

#define RPG_GAMECORE_GLOBALSETBILLBOARDSHOWTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71F960)
#define RPG_GAMECORE_GLOBALSETBILLBOARDSHOWTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D71F970)
#define RPG_GAMECORE_GLOBALSETBILLBOARDSHOWTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D71F930)

namespace RPG::GameCore
{
	class GlobalSetBillboardShowType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::Int32>* BoardShowList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALSETBILLBOARDSHOWTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GlobalSetBillboardShowType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GlobalSetBillboardShowType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALSETBILLBOARDSHOWTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GlobalSetBillboardShowType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GlobalSetBillboardShowType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALSETBILLBOARDSHOWTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
