#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNOENKFAKEK;
namespace System { class Object; }

#define PNOENKFAKEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF93180)
#define PNOENKFAKEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF931C0)
#define PNOENKFAKEK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF931D0)

inline static constexpr unsigned int PNOENKFAKEK___c_TypeDefinitionIndex = 28033;

	class PNOENKFAKEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNOENKFAKEK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOENKFAKEK___C_CTOR_OFFSET))(this);
		}

		::PNOENKFAKEK* __cctor_b__28_0()
		{
			return ((::PNOENKFAKEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOENKFAKEK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
