#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCBHBJEOCHL;
namespace System { class Object; }

#define HCBHBJEOCHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E506C80)
#define HCBHBJEOCHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E506CB0)
#define HCBHBJEOCHL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E506CC0)

inline static constexpr unsigned int HCBHBJEOCHL___c_TypeDefinitionIndex = 28902;

	class HCBHBJEOCHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A0C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCBHBJEOCHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBHBJEOCHL___C_CTOR_OFFSET))(this);
		}

		::HCBHBJEOCHL* __cctor_b__28_0()
		{
			return ((::HCBHBJEOCHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBHBJEOCHL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
