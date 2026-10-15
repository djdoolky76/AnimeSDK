#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MatchThreeOpponentData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MATCHTHREEROYALELOBBY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD5AD980)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD5AD9C0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY___C__GETPROCESSEDOPPONENTS_B__6_0_OFFSET UNITYSDK_OFFSET(0xD5AD9D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeRoyaleLobby___c_TypeDefinitionIndex = 66067;

	class MatchThreeRoyaleLobby___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x54EC0);
		}

		static ::System::Comparison_1<::RPG::Client::MatchThreeOpponentData*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::RPG::Client::MatchThreeOpponentData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x54EC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetProcessedOpponents_b__6_0(::RPG::Client::MatchThreeOpponentData* a1, ::RPG::Client::MatchThreeOpponentData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeOpponentData*, ::RPG::Client::MatchThreeOpponentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY___C__GETPROCESSEDOPPONENTS_B__6_0_OFFSET))(this, a1, a2);
		}

	};
}
