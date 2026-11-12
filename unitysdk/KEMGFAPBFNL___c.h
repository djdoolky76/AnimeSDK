#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEMGFAPBFNL;
namespace System { class Object; }

#define KEMGFAPBFNL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB26F60)
#define KEMGFAPBFNL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB26FA0)
#define KEMGFAPBFNL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FB26FB0)

inline static constexpr unsigned int KEMGFAPBFNL___c_TypeDefinitionIndex = 28973;

	class KEMGFAPBFNL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xAB00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEMGFAPBFNL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMGFAPBFNL___C_CTOR_OFFSET))(this);
		}

		::KEMGFAPBFNL* __cctor_b__28_0()
		{
			return ((::KEMGFAPBFNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMGFAPBFNL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
