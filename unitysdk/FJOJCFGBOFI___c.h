#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJOJCFGBOFI;
namespace System { class Object; }

#define FJOJCFGBOFI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A8B60)
#define FJOJCFGBOFI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A8BA0)
#define FJOJCFGBOFI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3A8BB0)

inline static constexpr unsigned int FJOJCFGBOFI___c_TypeDefinitionIndex = 26461;

	class FJOJCFGBOFI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJOJCFGBOFI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOJCFGBOFI___C_CTOR_OFFSET))(this);
		}

		::FJOJCFGBOFI* __cctor_b__23_0()
		{
			return ((::FJOJCFGBOFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOJCFGBOFI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
