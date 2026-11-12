#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define BABPNPJGDHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16CDE420)
#define BABPNPJGDHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16CDE450)
#define BABPNPJGDHP___C__SORTDARKTEAMMULTIROWMEMBER_B__12_0_OFFSET UNITYSDK_OFFSET(0x16CDE460)

inline static constexpr unsigned int BABPNPJGDHP___c_TypeDefinitionIndex = 60327;

	class BABPNPJGDHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62610);
		}

		static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62618);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BABPNPJGDHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABPNPJGDHP___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _SortDarkTeamMultiRowMember_b__12_0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BABPNPJGDHP___C__SORTDARKTEAMMULTIROWMEMBER_B__12_0_OFFSET))(this, a1, a2);
		}

	};
