#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDJBBILMHLC;
namespace System { class Object; }

#define MDJBBILMHLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD4E9C0)
#define MDJBBILMHLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD4EA00)
#define MDJBBILMHLC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FD4EA10)

inline static constexpr unsigned int MDJBBILMHLC___c_TypeDefinitionIndex = 29862;

	class MDJBBILMHLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x506D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDJBBILMHLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJBBILMHLC___C_CTOR_OFFSET))(this);
		}

		::MDJBBILMHLC* __cctor_b__33_0()
		{
			return ((::MDJBBILMHLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJBBILMHLC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
