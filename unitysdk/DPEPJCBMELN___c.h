#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define DPEPJCBMELN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x11FF6000)
#define DPEPJCBMELN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x11FF6040)
#define DPEPJCBMELN___C__EVALUATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x11FF6050)

inline static constexpr unsigned int DPEPJCBMELN___c_TypeDefinitionIndex = 59130;

	class DPEPJCBMELN___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet___9__1_0()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F6F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F6F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPEPJCBMELN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPEPJCBMELN___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _Evaluate_b__1_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DPEPJCBMELN___C__EVALUATE_B__1_0_OFFSET))(this, a1);
		}

	};
