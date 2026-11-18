#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HGAJKHIMKJP;
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELABYSSS2ARTIFACTDISAPPEARCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x183BF420)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelAbyssS2ArtifactDisappearContext_TypeDefinitionIndex = 45804;

	class UIInLevelAbyssS2ArtifactDisappearContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnFinish; // 0x28
		::HGAJKHIMKJP* SourceItemData; // 0x30
		::System::Boolean IsNew; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELABYSSS2ARTIFACTDISAPPEARCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
