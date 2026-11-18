#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueType.h"

class BBPCINJAMAF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUNTIMEDATA_GET_CACHEINFO_OFFSET UNITYSDK_OFFSET(0x3CED50)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUNTIMEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x819570)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUNTIMEDATA_SET_CACHEINFO_OFFSET UNITYSDK_OFFSET(0x4254B0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowNpcMultiBodyNewAction_RuntimeData_TypeDefinitionIndex = 60107;

	struct alignas(8) ShowNpcMultiBodyNewAction_RuntimeData
	{
		::System::Int32 npcid; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* animHandle; // 0x18
		::BBPCINJAMAF* _Cacheinfo_k__BackingField; // 0x20

		::BBPCINJAMAF* get_Cacheinfo()
		{
			return ((::BBPCINJAMAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUNTIMEDATA_GET_CACHEINFO_OFFSET))(this);
		}

		::System::Void set_Cacheinfo(::BBPCINJAMAF* value)
		{
			return ((::System::Void(*)(::PVOID, ::BBPCINJAMAF*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUNTIMEDATA_SET_CACHEINFO_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUNTIMEDATA_RESET_OFFSET))(this);
		}
	};
}
