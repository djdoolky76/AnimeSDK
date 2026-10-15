#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELHLCFBPAMO;
namespace System { class Object; }

#define ELHLCFBPAMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A5190)
#define ELHLCFBPAMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A51C0)
#define ELHLCFBPAMO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2A51D0)

inline static constexpr unsigned int ELHLCFBPAMO___c_TypeDefinitionIndex = 33665;

	class ELHLCFBPAMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELHLCFBPAMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHLCFBPAMO___C_CTOR_OFFSET))(this);
		}

		::ELHLCFBPAMO* __cctor_b__33_0()
		{
			return ((::ELHLCFBPAMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHLCFBPAMO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
