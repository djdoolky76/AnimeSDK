#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE7AAAB0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE7AAAF0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPOSE_B__2_0_OFFSET UNITYSDK_OFFSET(0xE7AAB00)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleBoard___c_TypeDefinitionIndex = 81440;

	class OpticalIllusionPuzzleBoard___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x5BE70);
		}

		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x5BE78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C_CTOR_OFFSET))(this);
		}

		::System::Void _Dispose_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPOSE_B__2_0_OFFSET))(this);
		}

	};
}
