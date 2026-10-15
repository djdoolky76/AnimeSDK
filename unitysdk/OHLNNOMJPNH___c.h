#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHLNNOMJPNH;
namespace System { class Object; }

#define OHLNNOMJPNH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE663D0)
#define OHLNNOMJPNH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE66410)
#define OHLNNOMJPNH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE66420)

inline static constexpr unsigned int OHLNNOMJPNH___c_TypeDefinitionIndex = 25149;

	class OHLNNOMJPNH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B6A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHLNNOMJPNH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLNNOMJPNH___C_CTOR_OFFSET))(this);
		}

		::OHLNNOMJPNH* __cctor_b__23_0()
		{
			return ((::OHLNNOMJPNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLNNOMJPNH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
