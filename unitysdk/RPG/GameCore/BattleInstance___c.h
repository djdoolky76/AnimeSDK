#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKFBNIHNLGG.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_BATTLEINSTANCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE5C63D0)
#define RPG_GAMECORE_BATTLEINSTANCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE5C6400)
#define RPG_GAMECORE_BATTLEINSTANCE___C__GENERATETURNSNAPSHOT_B__8_0_OFFSET UNITYSDK_OFFSET(0xE5C6410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleInstance___c_TypeDefinitionIndex = 56039;

	class BattleInstance___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::PKFBNIHNLGG>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::PKFBNIHNLGG>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x57220);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x57228);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GenerateTurnSnapshot_b__8_0(::PKFBNIHNLGG a1, ::PKFBNIHNLGG a2)
		{
			return ((::System::Int32(*)(::PVOID, ::PKFBNIHNLGG, ::PKFBNIHNLGG))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEINSTANCE___C__GENERATETURNSNAPSHOT_B__8_0_OFFSET))(this, a1, a2);
		}

	};
}
