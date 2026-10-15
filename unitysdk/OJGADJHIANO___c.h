#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJGADJHIANO;
namespace System { class Object; }

#define OJGADJHIANO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE54A20)
#define OJGADJHIANO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE54A50)
#define OJGADJHIANO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE54A60)

inline static constexpr unsigned int OJGADJHIANO___c_TypeDefinitionIndex = 30528;

	class OJGADJHIANO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C1B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJGADJHIANO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGADJHIANO___C_CTOR_OFFSET))(this);
		}

		::OJGADJHIANO* __cctor_b__28_0()
		{
			return ((::OJGADJHIANO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGADJHIANO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
