#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class EvolveBuildCard; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xF118F20)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xF118F60)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA___C__SETPRESELECTCARDID_B__6_1_OFFSET UNITYSDK_OFFSET(0xF118F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildSelectCardData___c_TypeDefinitionIndex = 54737;

	class EvolveBuildSelectCardData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6CE40);
		}

		static ::System::Predicate_1<::RPG::Client::EvolveBuildCard*>** StaticGet___9__6_1()
		{
			return (::System::Predicate_1<::RPG::Client::EvolveBuildCard*>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6CE48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _SetPreSelectCardID_b__6_1(::RPG::Client::EvolveBuildCard* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA___C__SETPRESELECTCARDID_B__6_1_OFFSET))(this, a1);
		}

	};
}
