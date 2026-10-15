#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGGPJFLLGID;
namespace System { class Object; }

#define CGGPJFLLGID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E081F50)
#define CGGPJFLLGID___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E081F90)
#define CGGPJFLLGID___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E081FA0)

inline static constexpr unsigned int CGGPJFLLGID___c_TypeDefinitionIndex = 29919;

	class CGGPJFLLGID___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13090);
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
