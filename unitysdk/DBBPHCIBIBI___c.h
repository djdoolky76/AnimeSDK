#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIGLHBEPNOG;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define DBBPHCIBIBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5DB250)
#define DBBPHCIBIBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5DB290)
#define DBBPHCIBIBI___C__UPDATEABILITIES_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C5DB2A0)

	class DBBPHCIBIBI___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::KIGLHBEPNOG*>** StaticGet___9__8_0()
		{
			return (::System::Predicate_1<::KIGLHBEPNOG*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58B40);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58B48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBBPHCIBIBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBPHCIBIBI___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateAbilities_b__8_0(::KIGLHBEPNOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIGLHBEPNOG*))((::PBYTE)hIl2Cpp + DBBPHCIBIBI___C__UPDATEABILITIES_B__8_0_OFFSET))(this, a1);
		}

	};
