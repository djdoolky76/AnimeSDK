#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MonopolyMapCell; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MONOPOLYMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD8A21C0)
#define RPG_CLIENT_MONOPOLYMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD8A2200)
#define RPG_CLIENT_MONOPOLYMODULE___C__GETCELLLISTBYMAP_B__155_0_OFFSET UNITYSDK_OFFSET(0xD8A2210)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyModule___c_TypeDefinitionIndex = 66277;

	class MonopolyModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6AE40);
		}

		static ::System::Comparison_1<::RPG::GameCore::MonopolyMapCell*>** StaticGet___9__155_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::MonopolyMapCell*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6AE48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetCellListByMap_b__155_0(::RPG::GameCore::MonopolyMapCell* a1, ::RPG::GameCore::MonopolyMapCell* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MonopolyMapCell*, ::RPG::GameCore::MonopolyMapCell*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYMODULE___C__GETCELLLISTBYMAP_B__155_0_OFFSET))(this, a1, a2);
		}

	};
}
