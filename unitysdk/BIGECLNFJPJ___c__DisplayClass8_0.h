#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIGECLNFJPJ;
namespace System { class String; }

#define BIGECLNFJPJ___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A5B50)
#define BIGECLNFJPJ___C__DISPLAYCLASS8_0__SETTIMEOUT_B__0_OFFSET UNITYSDK_OFFSET(0xB4A71C0)

inline static constexpr unsigned int BIGECLNFJPJ___c__DisplayClass8_0_TypeDefinitionIndex = 49201;

	class BIGECLNFJPJ___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::String* info; // 0x10
		::BIGECLNFJPJ* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGECLNFJPJ___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetTimeout_b__0(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BIGECLNFJPJ___C__DISPLAYCLASS8_0__SETTIMEOUT_B__0_OFFSET))(this, a1);
		}

	};
