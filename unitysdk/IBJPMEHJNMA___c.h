#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define IBJPMEHJNMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E3C9F0)
#define IBJPMEHJNMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15E3CA20)
#define IBJPMEHJNMA___C__ONTASKBEGIN_B__3_1_OFFSET UNITYSDK_OFFSET(0x15E3CA30)

	class IBJPMEHJNMA___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__3_1()
		{
			return (::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48FA0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48FA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBJPMEHJNMA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJPMEHJNMA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _OnTaskBegin_b__3_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + IBJPMEHJNMA___C__ONTASKBEGIN_B__3_1_OFFSET))(this, a1);
		}

	};
