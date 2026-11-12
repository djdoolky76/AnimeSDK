#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD34640)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD34680)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER___C__GET_ISINITONLY_B__14_0_OFFSET UNITYSDK_OFFSET(0x1CD34690)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo_EmittableMember___c_TypeDefinitionIndex = 7346;

	class ObjectSerializationInfo_EmittableMember___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x4AC00);
		}

		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Internal", "<>c")->GetStaticField(0x4AC08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsInitOnly_b__14_0(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBER___C__GET_ISINITONLY_B__14_0_OFFSET))(this, a1);
		}

	};
}
