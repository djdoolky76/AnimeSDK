#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAFFMDBPCGJ;
class INMMPMDELKE;
namespace RPG::GameCore { class FourRotateVoxelRevert2DVoxelConfig; }

#define FAFFMDBPCGJ___C__DISPLAYCLASS25_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15667510)
#define FAFFMDBPCGJ___C__DISPLAYCLASS25_0___ADDREVERTALL2DVOXELINTERACTTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x1566DAF0)

inline static constexpr unsigned int FAFFMDBPCGJ___c__DisplayClass25_0_TypeDefinitionIndex = 76739;

	class FAFFMDBPCGJ___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig* revert2DVoxelConfig; // 0x10
		::FAFFMDBPCGJ* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ___C__DISPLAYCLASS25_0_CTOR_OFFSET))(this);
		}

		::System::Void __AddRevertAll2DVoxelInteractTrigger_b__0(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ___C__DISPLAYCLASS25_0___ADDREVERTALL2DVOXELINTERACTTRIGGER_B__0_OFFSET))(this, a1);
		}

	};
