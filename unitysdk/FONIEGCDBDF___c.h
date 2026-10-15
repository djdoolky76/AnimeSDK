#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FONIEGCDBDF;
namespace System { class Object; }

#define FONIEGCDBDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D3040)
#define FONIEGCDBDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D3070)
#define FONIEGCDBDF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3D3080)

inline static constexpr unsigned int FONIEGCDBDF___c_TypeDefinitionIndex = 26675;

	class FONIEGCDBDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5ED10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FONIEGCDBDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FONIEGCDBDF___C_CTOR_OFFSET))(this);
		}

		::FONIEGCDBDF* __cctor_b__23_0()
		{
			return ((::FONIEGCDBDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FONIEGCDBDF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
