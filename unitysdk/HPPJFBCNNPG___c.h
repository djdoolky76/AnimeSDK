#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPPJFBCNNPG;
namespace System { class Object; }

#define HPPJFBCNNPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E600BF0)
#define HPPJFBCNNPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E600C30)
#define HPPJFBCNNPG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E600C40)

inline static constexpr unsigned int HPPJFBCNNPG___c_TypeDefinitionIndex = 29069;

	class HPPJFBCNNPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPPJFBCNNPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPJFBCNNPG___C_CTOR_OFFSET))(this);
		}

		::HPPJFBCNNPG* __cctor_b__23_0()
		{
			return ((::HPPJFBCNNPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPJFBCNNPG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
