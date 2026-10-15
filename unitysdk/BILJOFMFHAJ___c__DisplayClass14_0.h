#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BILJOFMFHAJ;
class CHGHIALKMFM;
class PIIOAKOEACN;
class PJPPGJEDCOG;

#define BILJOFMFHAJ___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C515920)
#define BILJOFMFHAJ___C__DISPLAYCLASS14_0___CREATECHIPMOLDS_B__0_OFFSET UNITYSDK_OFFSET(0x1C516C70)

inline static constexpr unsigned int BILJOFMFHAJ___c__DisplayClass14_0_TypeDefinitionIndex = 41818;

	class BILJOFMFHAJ___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::BILJOFMFHAJ* __4__this; // 0x10
		::PJPPGJEDCOG* requirement; // 0x18
		::UnityEngine::Vector2Int boardSize; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILJOFMFHAJ___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::CHGHIALKMFM* __CreateChipMolds_b__0(::PIIOAKOEACN* a1)
		{
			return ((::CHGHIALKMFM*(*)(::PVOID, ::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + BILJOFMFHAJ___C__DISPLAYCLASS14_0___CREATECHIPMOLDS_B__0_OFFSET))(this, a1);
		}

	};
