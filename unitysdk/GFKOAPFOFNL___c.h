#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFKOAPFOFNL;
namespace System { class Object; }

#define GFKOAPFOFNL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20084B60)
#define GFKOAPFOFNL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20084BA0)
#define GFKOAPFOFNL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20084BB0)

inline static constexpr unsigned int GFKOAPFOFNL___c_TypeDefinitionIndex = 31085;

	class GFKOAPFOFNL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFKOAPFOFNL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKOAPFOFNL___C_CTOR_OFFSET))(this);
		}

		::GFKOAPFOFNL* __cctor_b__28_0()
		{
			return ((::GFKOAPFOFNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKOAPFOFNL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
