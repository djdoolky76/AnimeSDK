#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define BABPNPJGDHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15BC62D0)
#define BABPNPJGDHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15BC6300)
#define BABPNPJGDHP___C__SORTDARKTEAMMULTIROWMEMBER_B__11_0_OFFSET UNITYSDK_OFFSET(0x15BC6310)

inline static constexpr unsigned int BABPNPJGDHP___c_TypeDefinitionIndex = 59052;

	class BABPNPJGDHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63E70);
		}

		static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63E78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BABPNPJGDHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABPNPJGDHP___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _SortDarkTeamMultiRowMember_b__11_0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BABPNPJGDHP___C__SORTDARKTEAMMULTIROWMEMBER_B__11_0_OFFSET))(this, a1, a2);
		}

	};
