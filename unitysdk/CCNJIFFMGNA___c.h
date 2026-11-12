#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCNJIFFMGNA;
namespace System { class Object; }

#define CCNJIFFMGNA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F341C60)
#define CCNJIFFMGNA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F341C90)
#define CCNJIFFMGNA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F341CA0)

inline static constexpr unsigned int CCNJIFFMGNA___c_TypeDefinitionIndex = 31453;

	class CCNJIFFMGNA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BBF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCNJIFFMGNA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNJIFFMGNA___C_CTOR_OFFSET))(this);
		}

		::CCNJIFFMGNA* __cctor_b__43_0()
		{
			return ((::CCNJIFFMGNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNJIFFMGNA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
