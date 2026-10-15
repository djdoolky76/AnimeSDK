#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCBNCBNOAAE;
namespace System { class Object; }

#define PCBNCBNOAAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DED6170)
#define PCBNCBNOAAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DED61B0)
#define PCBNCBNOAAE___C___CCTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0x1DED61C0)

inline static constexpr unsigned int PCBNCBNOAAE___c_TypeDefinitionIndex = 28557;

	class PCBNCBNOAAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DFF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCBNCBNOAAE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBNCBNOAAE___C_CTOR_OFFSET))(this);
		}

		::PCBNCBNOAAE* __cctor_b__83_0()
		{
			return ((::PCBNCBNOAAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBNCBNOAAE___C___CCTOR_B__83_0_OFFSET))(this);
		}

	};
