#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCAOKGHPNLA;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC89FD0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDC8A010)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C___CHECKPUZZLEFINISH_B__31_0_OFFSET UNITYSDK_OFFSET(0xDC8A0A0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C___SETPUZZLEANSWER_B__23_0_OFFSET UNITYSDK_OFFSET(0xDC8A020)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DeployPuzzleBoard___c_TypeDefinitionIndex = 78529;

	class DeployPuzzleBoard___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::HCAOKGHPNLA*>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::HCAOKGHPNLA*>**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x3D460);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x3D468);
		}

		static ::System::Comparison_1<::HCAOKGHPNLA*>** StaticGet___9__31_0()
		{
			return (::System::Comparison_1<::HCAOKGHPNLA*>**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x3D470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SetPuzzleAnswer_b__23_0(::HCAOKGHPNLA* a1, ::HCAOKGHPNLA* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HCAOKGHPNLA*, ::HCAOKGHPNLA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C___SETPUZZLEANSWER_B__23_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __CheckPuzzleFinish_b__31_0(::HCAOKGHPNLA* a1, ::HCAOKGHPNLA* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HCAOKGHPNLA*, ::HCAOKGHPNLA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___C___CHECKPUZZLEFINISH_B__31_0_OFFSET))(this, a1, a2);
		}

	};
}
