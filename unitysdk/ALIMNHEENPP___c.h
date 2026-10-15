#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALIMNHEENPP;
namespace System { class Object; }

#define ALIMNHEENPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E50EA10)
#define ALIMNHEENPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E50EA50)
#define ALIMNHEENPP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E50EA60)

inline static constexpr unsigned int ALIMNHEENPP___c_TypeDefinitionIndex = 25403;

	class ALIMNHEENPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x391F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALIMNHEENPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP___C_CTOR_OFFSET))(this);
		}

		::ALIMNHEENPP* __cctor_b__33_0()
		{
			return ((::ALIMNHEENPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
