#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCABIGNMAPL;
namespace System { class Object; }

#define FCABIGNMAPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E33D510)
#define FCABIGNMAPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E33D550)
#define FCABIGNMAPL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E33D560)

inline static constexpr unsigned int FCABIGNMAPL___c_TypeDefinitionIndex = 29311;

	class FCABIGNMAPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59F30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCABIGNMAPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCABIGNMAPL___C_CTOR_OFFSET))(this);
		}

		::FCABIGNMAPL* __cctor_b__23_0()
		{
			return ((::FCABIGNMAPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCABIGNMAPL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
