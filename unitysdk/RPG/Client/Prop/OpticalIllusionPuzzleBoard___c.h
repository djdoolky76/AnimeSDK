#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x171F31F0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x171F3230)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPOSE_B__2_0_OFFSET UNITYSDK_OFFSET(0x171F3240)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleBoard___c_TypeDefinitionIndex = 81439;

	class OpticalIllusionPuzzleBoard___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x61E10);
		}

		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x61E18);
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
