#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class FEPMIILHIDF;

#define BILJOFMFHAJ___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5156E0)
#define BILJOFMFHAJ___C__DISPLAYCLASS13_0___DETERMINEBANCELLSCHEME_B__0_OFFSET UNITYSDK_OFFSET(0x1C516A00)

inline static constexpr unsigned int BILJOFMFHAJ___c__DisplayClass13_0_TypeDefinitionIndex = 41817;

	class BILJOFMFHAJ___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector2Int boardSize; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILJOFMFHAJ___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __DetermineBanCellScheme_b__0(::FEPMIILHIDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEPMIILHIDF*))((::PBYTE)hIl2Cpp + BILJOFMFHAJ___C__DISPLAYCLASS13_0___DETERMINEBANCELLSCHEME_B__0_OFFSET))(this, a1);
		}

	};
