#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessEntityType.h"
#include "unitysdk/MoleMole/ConfigChessEntity_StateMachineParamsWrapper.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGCHESSENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A772BA0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigChessEntity_TypeDefinitionIndex = 55142;

	class ConfigChessEntity : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Share::GridDir, ::System::Object*>* exitMoveState; // 0x10
		::System::Collections::Generic::Dictionary_2<::Share::GridDir, ::System::Object*>* enterMoveState; // 0x18
		::MoleMole::ConfigChessEntity_StateMachineParamsWrapper baseStateParams; // 0x20
		::System::Int32 hollowEntityID; // 0x48
		::MoleMole::ChessEntityType entityType; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGCHESSENTITY__CTOR_OFFSET))(this);
		}
	};
}
