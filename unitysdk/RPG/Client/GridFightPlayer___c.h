#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GridFightVictoryBonusConfigRow; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTPLAYER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC2F3A0)
#define RPG_CLIENT_GRIDFIGHTPLAYER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDC2F3E0)
#define RPG_CLIENT_GRIDFIGHTPLAYER___C__GETVICTORYRULES_B__50_0_OFFSET UNITYSDK_OFFSET(0xDC2F3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlayer___c_TypeDefinitionIndex = 66740;

	class GridFightPlayer___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x73070);
		}

		static ::System::Comparison_1<::RPG::GameCore::GridFightVictoryBonusConfigRow*>** StaticGet___9__50_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::GridFightVictoryBonusConfigRow*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x73078);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetVictoryRules_b__50_0(::RPG::GameCore::GridFightVictoryBonusConfigRow* a1, ::RPG::GameCore::GridFightVictoryBonusConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightVictoryBonusConfigRow*, ::RPG::GameCore::GridFightVictoryBonusConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER___C__GETVICTORYRULES_B__50_0_OFFSET))(this, a1, a2);
		}

	};
}
