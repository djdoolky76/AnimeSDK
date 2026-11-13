#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLCPJJMHAGO;
namespace System { class Object; }

#define FLCPJJMHAGO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE3B840)
#define FLCPJJMHAGO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE3B880)
#define FLCPJJMHAGO___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FE3B890)

inline static constexpr unsigned int FLCPJJMHAGO___c_TypeDefinitionIndex = 33606;

	class FLCPJJMHAGO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLCPJJMHAGO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPJJMHAGO___C_CTOR_OFFSET))(this);
		}

		::FLCPJJMHAGO* __cctor_b__38_0()
		{
			return ((::FLCPJJMHAGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCPJJMHAGO___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
