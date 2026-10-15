#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDOEDOEBFAJ;
namespace System { class Object; }

#define BDOEDOEBFAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F23F0)
#define BDOEDOEBFAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F2420)
#define BDOEDOEBFAJ___C___CCTOR_B__108_0_OFFSET UNITYSDK_OFFSET(0x1E8F2430)

inline static constexpr unsigned int BDOEDOEBFAJ___c_TypeDefinitionIndex = 27075;

	class BDOEDOEBFAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDOEDOEBFAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOEDOEBFAJ___C_CTOR_OFFSET))(this);
		}

		::BDOEDOEBFAJ* __cctor_b__108_0()
		{
			return ((::BDOEDOEBFAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOEDOEBFAJ___C___CCTOR_B__108_0_OFFSET))(this);
		}

	};
