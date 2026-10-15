#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDJBBILMHLC;
namespace System { class Object; }

#define MDJBBILMHLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D7420)
#define MDJBBILMHLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D7460)
#define MDJBBILMHLC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9D7470)

inline static constexpr unsigned int MDJBBILMHLC___c_TypeDefinitionIndex = 29214;

	class MDJBBILMHLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C680);
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
