#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPPOINFLEPJ;
namespace System { class Object; }

#define HPPOINFLEPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D4150)
#define HPPOINFLEPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D4190)
#define HPPOINFLEPJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E5D41A0)

inline static constexpr unsigned int HPPOINFLEPJ___c_TypeDefinitionIndex = 32566;

	class HPPOINFLEPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPPOINFLEPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPOINFLEPJ___C_CTOR_OFFSET))(this);
		}

		::HPPOINFLEPJ* __cctor_b__33_0()
		{
			return ((::HPPOINFLEPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPOINFLEPJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
