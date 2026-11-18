#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueType.h"

class BBPCINJAMAF;

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_RUNTIMEDATA_GET_CACHEINFO_OFFSET UNITYSDK_OFFSET(0x379C90)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_RUNTIMEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x6D5500)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_RUNTIMEDATA_SET_CACHEINFO_OFFSET UNITYSDK_OFFSET(0x6D54F0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowNpcBodyNewAction_RuntimeData_TypeDefinitionIndex = 57357;

	struct alignas(8) ShowNpcBodyNewAction_RuntimeData
	{
		// static const ::System::Int32 NPC_PRIORITY = 0x3E8; // 0x0
		::System::Int32 npcid; // 0x10
		::System::Byte _padding0[0x4];
		::MoleMole::HollowChessboard::RenderDataHandle animHandle; // 0x18
		::BBPCINJAMAF* _Cacheinfo_k__BackingField; // 0x28

		::BBPCINJAMAF* get_Cacheinfo()
		{
			return ((::BBPCINJAMAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_RUNTIMEDATA_GET_CACHEINFO_OFFSET))(this);
		}

		::System::Void set_Cacheinfo(::BBPCINJAMAF* value)
		{
			return ((::System::Void(*)(::PVOID, ::BBPCINJAMAF*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_RUNTIMEDATA_SET_CACHEINFO_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_RUNTIMEDATA_RESET_OFFSET))(this);
		}
	};
}
