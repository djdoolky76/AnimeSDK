#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define NAIJACEFAIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA9D840)
#define NAIJACEFAIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBA9D880)
#define NAIJACEFAIF___C__ONTASKSUCCESS_B__9_0_OFFSET UNITYSDK_OFFSET(0xBA9D890)

	class NAIJACEFAIF___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet___9__9_0()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A790);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A798);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAIJACEFAIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIJACEFAIF___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _OnTaskSuccess_b__9_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NAIJACEFAIF___C__ONTASKSUCCESS_B__9_0_OFFSET))(this, a1);
		}

	};
