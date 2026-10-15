#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GridFightVictoryBonusConfigRow; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTPLAYER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD1DBF10)
#define RPG_CLIENT_GRIDFIGHTPLAYER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD1DBF50)
#define RPG_CLIENT_GRIDFIGHTPLAYER___C__GETVICTORYRULES_B__38_0_OFFSET UNITYSDK_OFFSET(0xD1DBF60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlayer___c_TypeDefinitionIndex = 65073;

	class GridFightPlayer___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6DFB0);
		}

		static ::System::Comparison_1<::RPG::GameCore::GridFightVictoryBonusConfigRow*>** StaticGet___9__38_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::GridFightVictoryBonusConfigRow*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6DFB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetVictoryRules_b__38_0(::RPG::GameCore::GridFightVictoryBonusConfigRow* a1, ::RPG::GameCore::GridFightVictoryBonusConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightVictoryBonusConfigRow*, ::RPG::GameCore::GridFightVictoryBonusConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER___C__GETVICTORYRULES_B__38_0_OFFSET))(this, a1, a2);
		}

	};
}
