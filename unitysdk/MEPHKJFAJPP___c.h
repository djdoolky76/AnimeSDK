#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEPHKJFAJPP;
namespace System { class Object; }

#define MEPHKJFAJPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD5EA50)
#define MEPHKJFAJPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD5EA90)
#define MEPHKJFAJPP___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1FD5EAA0)

inline static constexpr unsigned int MEPHKJFAJPP___c_TypeDefinitionIndex = 25802;

	class MEPHKJFAJPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x528E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEPHKJFAJPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPHKJFAJPP___C_CTOR_OFFSET))(this);
		}

		::MEPHKJFAJPP* __cctor_b__53_0()
		{
			return ((::MEPHKJFAJPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPHKJFAJPP___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
