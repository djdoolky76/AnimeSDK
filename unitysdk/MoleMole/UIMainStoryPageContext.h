#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FJMFECAAPHD;

#define MOLEMOLE_UIMAINSTORYPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x193A6430)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageContext_TypeDefinitionIndex = 45933;

	class UIMainStoryPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FJMFECAAPHD* PageTaskCompletionSource; // 0x28
		::System::Int32 EndOvaContextID; // 0x30
		::System::Int32 FromEndPerform; // 0x34
		::System::Int32 FromLevelEnd; // 0x38
		::System::Boolean IsAfkOva; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Int32 ArchiveFileID; // 0x40
		::System::Int32 BattleMission; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
