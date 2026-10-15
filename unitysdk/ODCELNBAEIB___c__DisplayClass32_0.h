#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNLKNLJBHDD;
class OFKKOGBKOFI;

#define ODCELNBAEIB___C__DISPLAYCLASS32_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBD788D0)
#define ODCELNBAEIB___C__DISPLAYCLASS32_0___ONSPAWNBRICKENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xBD7F820)

inline static constexpr unsigned int ODCELNBAEIB___c__DisplayClass32_0_TypeDefinitionIndex = 79101;

	class ODCELNBAEIB___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::HNLKNLJBHDD* teamTowersEntity; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB___C__DISPLAYCLASS32_0_CTOR_OFFSET))(this);
		}

		::System::Int32 __OnSpawnBrickEntity_b__0(::OFKKOGBKOFI* a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::OFKKOGBKOFI*, ::System::Single))((::PBYTE)hIl2Cpp + ODCELNBAEIB___C__DISPLAYCLASS32_0___ONSPAWNBRICKENTITY_B__0_OFFSET))(this, a1, a2);
		}

	};
