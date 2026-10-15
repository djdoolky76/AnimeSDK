#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFKOAPFOFNL;
namespace System { class Object; }

#define GFKOAPFOFNL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E443E10)
#define GFKOAPFOFNL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E443E50)
#define GFKOAPFOFNL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E443E60)

inline static constexpr unsigned int GFKOAPFOFNL___c_TypeDefinitionIndex = 30187;

	class GFKOAPFOFNL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13EF0);
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
