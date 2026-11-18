#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HGAJKHIMKJP;
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELABYSSS2ARTIFACTPURITYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7F3E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelAbyssS2ArtifactPurityContext_TypeDefinitionIndex = 66967;

	class UIInLevelAbyssS2ArtifactPurityContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::HGAJKHIMKJP* TargetItemData; // 0x28
		::System::Action* OnFinish; // 0x30
		::HGAJKHIMKJP* SourceItemData; // 0x38
		::System::Boolean IsNew; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELABYSSS2ARTIFACTPURITYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
