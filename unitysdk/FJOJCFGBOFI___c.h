#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJOJCFGBOFI;
namespace System { class Object; }

#define FJOJCFGBOFI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE2C600)
#define FJOJCFGBOFI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE2C640)
#define FJOJCFGBOFI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FE2C650)

inline static constexpr unsigned int FJOJCFGBOFI___c_TypeDefinitionIndex = 26992;

	class FJOJCFGBOFI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46CC0);
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
