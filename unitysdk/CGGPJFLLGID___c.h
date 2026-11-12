#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGGPJFLLGID;
namespace System { class Object; }

#define CGGPJFLLGID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3773F0)
#define CGGPJFLLGID___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F377430)
#define CGGPJFLLGID___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F377440)

inline static constexpr unsigned int CGGPJFLLGID___c_TypeDefinitionIndex = 30817;

	class CGGPJFLLGID___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xBA10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGGPJFLLGID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGPJFLLGID___C_CTOR_OFFSET))(this);
		}

		::CGGPJFLLGID* __cctor_b__28_0()
		{
			return ((::CGGPJFLLGID*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGPJFLLGID___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
