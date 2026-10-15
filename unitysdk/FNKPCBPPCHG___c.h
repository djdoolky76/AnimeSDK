#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define FNKPCBPPCHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1587A660)
#define FNKPCBPPCHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1587A690)
#define FNKPCBPPCHG___C___SETUPMONSTERINFO_B__6_0_OFFSET UNITYSDK_OFFSET(0x1587A6A0)

	class FNKPCBPPCHG___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet___9__6_0()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58460);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58468);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNKPCBPPCHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKPCBPPCHG___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __SetupMonsterInfo_b__6_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FNKPCBPPCHG___C___SETUPMONSTERINFO_B__6_0_OFFSET))(this, a1);
		}

	};
