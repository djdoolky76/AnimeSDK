#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMCJBMOICJN;
namespace System { class Object; }

#define EMCJBMOICJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B1330)
#define EMCJBMOICJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B1370)
#define EMCJBMOICJN___C___CCTOR_B__78_0_OFFSET UNITYSDK_OFFSET(0x1E2B1380)

inline static constexpr unsigned int EMCJBMOICJN___c_TypeDefinitionIndex = 29957;

	class EMCJBMOICJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMCJBMOICJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMCJBMOICJN___C_CTOR_OFFSET))(this);
		}

		::EMCJBMOICJN* __cctor_b__78_0()
		{
			return ((::EMCJBMOICJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMCJBMOICJN___C___CCTOR_B__78_0_OFFSET))(this);
		}

	};
