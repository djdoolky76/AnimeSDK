#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/R3/Result.h"
namespace System { class Object; }

#define HAGLEMEGDCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC6F390)
#define HAGLEMEGDCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC6F3D0)
#define HAGLEMEGDCB___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1EC6F3E0)

inline static constexpr unsigned int HAGLEMEGDCB___c_TypeDefinitionIndex = 44258;

	class HAGLEMEGDCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAGLEMEGDCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGLEMEGDCB___C_CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__2_0(::R3::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::R3::Result))((::PBYTE)hIl2Cpp + HAGLEMEGDCB___C___CCTOR_B__2_0_OFFSET))(this, a1);
		}

	};
