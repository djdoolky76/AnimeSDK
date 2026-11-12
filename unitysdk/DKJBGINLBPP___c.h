#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKJBGINLBPP;
namespace System { class Object; }

#define DKJBGINLBPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4B4250)
#define DKJBGINLBPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4B4290)
#define DKJBGINLBPP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F4B42A0)

inline static constexpr unsigned int DKJBGINLBPP___c_TypeDefinitionIndex = 36040;

	class DKJBGINLBPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x362C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKJBGINLBPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJBGINLBPP___C_CTOR_OFFSET))(this);
		}

		::DKJBGINLBPP* __cctor_b__23_0()
		{
			return ((::DKJBGINLBPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJBGINLBPP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
