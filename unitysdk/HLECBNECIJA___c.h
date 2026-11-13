#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLECBNECIJA;
namespace System { class Object; }

#define HLECBNECIJA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20178C30)
#define HLECBNECIJA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20178C70)
#define HLECBNECIJA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x20178C80)

inline static constexpr unsigned int HLECBNECIJA___c_TypeDefinitionIndex = 29017;

	class HLECBNECIJA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x348B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLECBNECIJA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLECBNECIJA___C_CTOR_OFFSET))(this);
		}

		::HLECBNECIJA* __cctor_b__33_0()
		{
			return ((::HLECBNECIJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLECBNECIJA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
