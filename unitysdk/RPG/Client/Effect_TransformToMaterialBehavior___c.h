#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class Effect_TransformToMaterialBehavior_TransformPropertyMapping; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x189B0D00)
#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0x189B0D40)
#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR___C__ONENABLE_B__7_0_OFFSET UNITYSDK_OFFSET(0x189B0D50)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_TransformToMaterialBehavior___c_TypeDefinitionIndex = 72560;

	class Effect_TransformToMaterialBehavior___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x43A40);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x43A48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _OnEnable_b__7_0(::RPG::Client::Effect_TransformToMaterialBehavior_TransformPropertyMapping* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Effect_TransformToMaterialBehavior_TransformPropertyMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR___C__ONENABLE_B__7_0_OFFSET))(this, a1);
		}

	};
}
