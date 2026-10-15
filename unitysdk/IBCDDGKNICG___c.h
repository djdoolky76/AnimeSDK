#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBCDDGKNICG;
namespace System { class Object; }

#define IBCDDGKNICG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E610040)
#define IBCDDGKNICG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E610080)
#define IBCDDGKNICG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E610090)

inline static constexpr unsigned int IBCDDGKNICG___c_TypeDefinitionIndex = 32160;

	class IBCDDGKNICG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBCDDGKNICG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCDDGKNICG___C_CTOR_OFFSET))(this);
		}

		::IBCDDGKNICG* __cctor_b__28_0()
		{
			return ((::IBCDDGKNICG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCDDGKNICG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
