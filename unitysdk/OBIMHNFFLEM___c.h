#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBIMHNFFLEM;
namespace System { class Object; }

#define OBIMHNFFLEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD9FF00)
#define OBIMHNFFLEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD9FF40)
#define OBIMHNFFLEM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FD9FF50)

inline static constexpr unsigned int OBIMHNFFLEM___c_TypeDefinitionIndex = 26129;

	class OBIMHNFFLEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xBA80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBIMHNFFLEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIMHNFFLEM___C_CTOR_OFFSET))(this);
		}

		::OBIMHNFFLEM* __cctor_b__33_0()
		{
			return ((::OBIMHNFFLEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIMHNFFLEM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
