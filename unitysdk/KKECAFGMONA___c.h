#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKECAFGMONA;
namespace System { class Object; }

#define KKECAFGMONA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFE8870)
#define KKECAFGMONA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFE88A0)
#define KKECAFGMONA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FFE88B0)

inline static constexpr unsigned int KKECAFGMONA___c_TypeDefinitionIndex = 27867;

	class KKECAFGMONA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKECAFGMONA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKECAFGMONA___C_CTOR_OFFSET))(this);
		}

		::KKECAFGMONA* __cctor_b__18_0()
		{
			return ((::KKECAFGMONA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKECAFGMONA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
