#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLBDFEOBKIJ;
namespace System { class Object; }

#define MLBDFEOBKIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA7EDC0)
#define MLBDFEOBKIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7EE00)
#define MLBDFEOBKIJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA7EE10)

inline static constexpr unsigned int MLBDFEOBKIJ___c_TypeDefinitionIndex = 31166;

	class MLBDFEOBKIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLBDFEOBKIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDFEOBKIJ___C_CTOR_OFFSET))(this);
		}

		::MLBDFEOBKIJ* __cctor_b__23_0()
		{
			return ((::MLBDFEOBKIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDFEOBKIJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
