#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE7A5620)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE7A5660)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__REFRESHFORMATIONINCAMERASPACE_B__186_0_OFFSET UNITYSDK_OFFSET(0xE7A5670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamFormationComponent___c_TypeDefinitionIndex = 57710;

	class TeamFormationComponent___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6E0E0);
		}

		static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair*>** StaticGet___9__186_0()
		{
			return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair*>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6E0E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshFormationInCameraSpace_b__186_0(::System::Collections::Generic::KeyValuePair* a1, ::System::Collections::Generic::KeyValuePair* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__REFRESHFORMATIONINCAMERASPACE_B__186_0_OFFSET))(this, a1, a2);
		}

	};
}
