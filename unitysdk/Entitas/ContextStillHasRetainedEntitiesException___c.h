#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16759780)
#define ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION___C_CTOR_OFFSET UNITYSDK_OFFSET(0x167597C0)
#define ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x167597D0)
#define ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION___C___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x16759A90)

namespace Entitas
{
	inline static constexpr unsigned int ContextStillHasRetainedEntitiesException___c_TypeDefinitionIndex = 9994;

	class ContextStillHasRetainedEntitiesException___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Entitas", "<>c")->GetStaticField(0x33B70);
		}

		static ::System::Func_2<::System::Object*, ::System::String*>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::System::Object*, ::System::String*>**)UnitySDK::FromName("Entitas", "<>c")->GetStaticField(0x33B78);
		}

		static ::System::Func_2<::Entitas::IEntity*, ::System::String*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::Entitas::IEntity*, ::System::String*>**)UnitySDK::FromName("Entitas", "<>c")->GetStaticField(0x33B80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION___C_CTOR_OFFSET))(this);
		}

		::System::String* __ctor_b__0_0(::Entitas::IEntity* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION___C___CTOR_B__0_0_OFFSET))(this, a1);
		}

		::System::String* __ctor_b__0_1(::System::Object* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTSTILLHASRETAINEDENTITIESEXCEPTION___C___CTOR_B__0_1_OFFSET))(this, a1);
		}

	};
}
