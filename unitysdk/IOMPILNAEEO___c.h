#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOMPILNAEEO;
namespace System { class Object; }

#define IOMPILNAEEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6ACD20)
#define IOMPILNAEEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6ACD60)
#define IOMPILNAEEO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6ACD70)

inline static constexpr unsigned int IOMPILNAEEO___c_TypeDefinitionIndex = 25674;

	class IOMPILNAEEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOMPILNAEEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMPILNAEEO___C_CTOR_OFFSET))(this);
		}

		::IOMPILNAEEO* __cctor_b__28_0()
		{
			return ((::IOMPILNAEEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOMPILNAEEO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
