#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONPOFJPEBMJ;
namespace System { class Object; }

#define ONPOFJPEBMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DED4310)
#define ONPOFJPEBMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DED4340)
#define ONPOFJPEBMJ___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1DED4350)

inline static constexpr unsigned int ONPOFJPEBMJ___c_TypeDefinitionIndex = 33644;

	class ONPOFJPEBMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONPOFJPEBMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPOFJPEBMJ___C_CTOR_OFFSET))(this);
		}

		::ONPOFJPEBMJ* __cctor_b__58_0()
		{
			return ((::ONPOFJPEBMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPOFJPEBMJ___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
