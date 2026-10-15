#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffect; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define LDLCIEJKBNH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB6359E0)
#define LDLCIEJKBNH___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB635A20)
#define LDLCIEJKBNH___C___COMPACTORDEREDSTATEFORKEY_B__27_0_OFFSET UNITYSDK_OFFSET(0xB635A30)

inline static constexpr unsigned int LDLCIEJKBNH___c_TypeDefinitionIndex = 77812;

	class LDLCIEJKBNH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59340);
		}

		static ::System::Predicate_1<::RPG::Client::MonoEffect*>** StaticGet___9__27_0()
		{
			return (::System::Predicate_1<::RPG::Client::MonoEffect*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59348);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDLCIEJKBNH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLCIEJKBNH___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __CompactOrderedStateForKey_b__27_0(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH___C___COMPACTORDEREDSTATEFORKEY_B__27_0_OFFSET))(this, a1);
		}

	};
