#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
class HNLKNLJBHDD;
class ODCELNBAEIB;

#define ODCELNBAEIB___C__DISPLAYCLASS51_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBD7B230)
#define ODCELNBAEIB___C__DISPLAYCLASS51_0___ONPLAYSPAWNISLANDPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0xBD7FB70)

inline static constexpr unsigned int ODCELNBAEIB___c__DisplayClass51_0_TypeDefinitionIndex = 79102;

	class ODCELNBAEIB___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::HNLKNLJBHDD* curControlEntity; // 0x10
		::ODCELNBAEIB* __4__this; // 0x18
		::RPG::MVector3 brickPosition; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB___C__DISPLAYCLASS51_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnPlaySpawnIslandPerformance_b__0(::ODCELNBAEIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODCELNBAEIB*))((::PBYTE)hIl2Cpp + ODCELNBAEIB___C__DISPLAYCLASS51_0___ONPLAYSPAWNISLANDPERFORMANCE_B__0_OFFSET))(this, a1);
		}

	};
