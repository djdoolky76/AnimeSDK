#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOIGBKBEGOB;
namespace System { class Object; }

#define JOIGBKBEGOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E776BF0)
#define JOIGBKBEGOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E776C20)
#define JOIGBKBEGOB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E776C30)

inline static constexpr unsigned int JOIGBKBEGOB___c_TypeDefinitionIndex = 30894;

	class JOIGBKBEGOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68B30);
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
