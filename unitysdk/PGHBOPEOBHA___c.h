#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGHBOPEOBHA;
namespace System { class Object; }

#define PGHBOPEOBHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2024EC60)
#define PGHBOPEOBHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2024ECA0)
#define PGHBOPEOBHA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2024ECB0)

inline static constexpr unsigned int PGHBOPEOBHA___c_TypeDefinitionIndex = 28299;

	class PGHBOPEOBHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x383C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGHBOPEOBHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGHBOPEOBHA___C_CTOR_OFFSET))(this);
		}

		::PGHBOPEOBHA* __cctor_b__33_0()
		{
			return ((::PGHBOPEOBHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGHBOPEOBHA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
