#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAHPNAEGACM;
class GJPBCNIIEOB;

#define GJPBCNIIEOB___C__DISPLAYCLASS24_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8BC440)
#define GJPBCNIIEOB___C__DISPLAYCLASS24_0__ONDETAILCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x1A8BD8B0)

inline static constexpr unsigned int GJPBCNIIEOB___c__DisplayClass24_0_TypeDefinitionIndex = 73241;

	class GJPBCNIIEOB___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::GJPBCNIIEOB* __4__this; // 0x10
		::GAHPNAEGACM* detail; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBCNIIEOB___C__DISPLAYCLASS24_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnDetailChange_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPBCNIIEOB___C__DISPLAYCLASS24_0__ONDETAILCHANGE_B__0_OFFSET))(this);
		}

	};
