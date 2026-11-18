#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/IEKAMJMDCJG.h"
#include "unitysdk/JPOLPIJCJIJ.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FMOFDPKAGNE.h"

class MFCAMPFHMCP;
namespace Foundation::ViewObject { class ViewObjectManager; }

#define LALKBNBBMGC_JNJBBAHHMHA_OFFSET UNITYSDK_OFFSET(0x1767A220)
#define LALKBNBBMGC_KJHBJKIHILC_OFFSET UNITYSDK_OFFSET(0x1767A420)
#define LALKBNBBMGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1767A170)

inline static constexpr unsigned int LALKBNBBMGC_TypeDefinitionIndex = 47698;

class LALKBNBBMGC : public ::System::Object
{
public:
	::MFCAMPFHMCP* DAMKKHHHNCH; // 0x10
	::MoleMole::EntityHandle LEOKEOFNDLH; // 0x18
	::Foundation::ViewObject::ViewObjectManager* OKFNEDFMBMC; // 0x28
	::Foundation::ViewObject::ViewObjectHandle EJLOPJOMHHN; // 0x30
	::JPOLPIJCJIJ HMKKJKLFCBF; // 0x40
	::Foundation::ViewObject::GroupMemberIdentifier NAPPFMABMDJ; // 0x58

	::System::Void _ctor(::JPOLPIJCJIJ& AEFBPLEGCJJ)
	{
		return ((::System::Void(*)(::PVOID, ::JPOLPIJCJIJ&))((::PBYTE)hIl2Cpp + LALKBNBBMGC__CTOR_OFFSET))(this, AEFBPLEGCJJ);
	}

	::System::Boolean JNJBBAHHMHA(::FMOFDPKAGNE& OAOCGOJLBFJ, ::IEKAMJMDCJG& FBCHENDDHHK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FMOFDPKAGNE&, ::IEKAMJMDCJG&))((::PBYTE)hIl2Cpp + LALKBNBBMGC_JNJBBAHHMHA_OFFSET))(this, OAOCGOJLBFJ, FBCHENDDHHK);
	}

	::System::Boolean KJHBJKIHILC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LALKBNBBMGC_KJHBJKIHILC_OFFSET))(this);
	}
};
