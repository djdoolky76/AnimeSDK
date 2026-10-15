#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKPOLIPHPIK;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define BONINBGAHOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC199BC0)
#define BONINBGAHOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC199BF0)
#define BONINBGAHOL___C__UPDATECAPSULEDATAS_B__7_0_OFFSET UNITYSDK_OFFSET(0xC199C00)

inline static constexpr unsigned int BONINBGAHOL___c_TypeDefinitionIndex = 51888;

	class BONINBGAHOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C50);
		}

		static ::System::Predicate_1<::EKPOLIPHPIK*>** StaticGet___9__7_0()
		{
			return (::System::Predicate_1<::EKPOLIPHPIK*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BONINBGAHOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONINBGAHOL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateCapsuleDatas_b__7_0(::EKPOLIPHPIK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKPOLIPHPIK*))((::PBYTE)hIl2Cpp + BONINBGAHOL___C__UPDATECAPSULEDATAS_B__7_0_OFFSET))(this, a1);
		}

	};
