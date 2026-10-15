#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T> class Predicate_1; }

#define SYSTEM_DEFAULTBINDER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1CD180)
#define SYSTEM_DEFAULTBINDER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1CD1C0)
#define SYSTEM_DEFAULTBINDER___C__SELECTPROPERTY_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C1CD1D0)

namespace System
{
	class DefaultBinder___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("System", "<>c")->GetStaticField(0x11B90);
		}

		static ::System::Predicate_1<::System::Type*>** StaticGet___9__3_0()
		{
			return (::System::Predicate_1<::System::Type*>**)UnitySDK::FromName("System", "<>c")->GetStaticField(0x11B98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _SelectProperty_b__3_0(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER___C__SELECTPROPERTY_B__3_0_OFFSET))(this, a1);
		}

	};
}
