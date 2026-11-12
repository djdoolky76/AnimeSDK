#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOIGBKBEGOB;
namespace System { class Object; }

#define JOIGBKBEGOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAD4520)
#define JOIGBKBEGOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD4550)
#define JOIGBKBEGOB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FAD4560)

inline static constexpr unsigned int JOIGBKBEGOB___c_TypeDefinitionIndex = 31807;

	class JOIGBKBEGOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOIGBKBEGOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIGBKBEGOB___C_CTOR_OFFSET))(this);
		}

		::JOIGBKBEGOB* __cctor_b__18_0()
		{
			return ((::JOIGBKBEGOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIGBKBEGOB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
