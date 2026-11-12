#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KCHLFFKOLBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBBC1E60)
#define KCHLFFKOLBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBBC1E90)
#define KCHLFFKOLBA___C__TRANSFORM_B__1_0_OFFSET UNITYSDK_OFFSET(0xBBC1EA0)

inline static constexpr unsigned int KCHLFFKOLBA___c_TypeDefinitionIndex = 60430;

	class KCHLFFKOLBA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x29A30);
		}

		static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x29A38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCHLFFKOLBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHLFFKOLBA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _Transform_b__1_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KCHLFFKOLBA___C__TRANSFORM_B__1_0_OFFSET))(this, a1);
		}

	};
