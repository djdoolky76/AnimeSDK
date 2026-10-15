#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABNBDDCDBCA;
namespace System { class Object; }

#define ABNBDDCDBCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD0870)
#define ABNBDDCDBCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD08B0)
#define ABNBDDCDBCA___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1DDD08C0)

inline static constexpr unsigned int ABNBDDCDBCA___c_TypeDefinitionIndex = 25906;

	class ABNBDDCDBCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABNBDDCDBCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBDDCDBCA___C_CTOR_OFFSET))(this);
		}

		::ABNBDDCDBCA* __cctor_b__37_0()
		{
			return ((::ABNBDDCDBCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBDDCDBCA___C___CCTOR_B__37_0_OFFSET))(this);
		}

	};
