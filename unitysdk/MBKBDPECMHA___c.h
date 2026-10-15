#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBKBDPECMHA;
namespace System { class Object; }

#define MBKBDPECMHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B8FF0)
#define MBKBDPECMHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B9030)
#define MBKBDPECMHA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9B9040)

inline static constexpr unsigned int MBKBDPECMHA___c_TypeDefinitionIndex = 31090;

	class MBKBDPECMHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47AA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBKBDPECMHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBKBDPECMHA___C_CTOR_OFFSET))(this);
		}

		::MBKBDPECMHA* __cctor_b__23_0()
		{
			return ((::MBKBDPECMHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBKBDPECMHA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
