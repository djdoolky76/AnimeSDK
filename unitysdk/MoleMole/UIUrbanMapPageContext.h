#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIFOBKBCCMA.h"
#include "unitysdk/JDOLCBBOINH.h"
#include "unitysdk/KBFEGIGFHMD.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIUrbanMapPageContext_SDefaultFocusInfo.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIURBANMAPPAGECONTEXT_COPYTO_OFFSET UNITYSDK_OFFSET(0x1055DC80)
#define MOLEMOLE_UIURBANMAPPAGECONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1055DD50)
#define MOLEMOLE_UIURBANMAPPAGECONTEXT_GET_ISXKOV_OFFSET UNITYSDK_OFFSET(0x1055DB80)
#define MOLEMOLE_UIURBANMAPPAGECONTEXT_GET_ZENKOVSELECTQUESTID_OFFSET UNITYSDK_OFFSET(0x1055DBE0)
#define MOLEMOLE_UIURBANMAPPAGECONTEXT_SET_ZENKOVSELECTQUESTID_OFFSET UNITYSDK_OFFSET(0x1055DBF0)
#define MOLEMOLE_UIURBANMAPPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1055DE70)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPageContext_TypeDefinitionIndex = 39316;

	class UIUrbanMapPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* AfterReqGroupState; // 0x28
		::MoleMole::UIUrbanMapPageContext_SDefaultFocusInfo DefaultFocusInfo; // 0x30
		::System::Action* OnManulClose; // 0x70
		::System::Action* AfterOpenMap; // 0x78
		::System::String* TeleportAudio; // 0x80
		::KBFEGIGFHMD ZenKovRightTabType; // 0x88
		::GIFOBKBCCMA DefaultPeriod; // 0x8C
		::System::Int32 FromMap3dAreaId; // 0x90
		::JDOLCBBOINH SectionOrFloor; // 0x94
		::System::Int32 Map3dAreaId; // 0x9C
		::System::Int32 _zenkovSelectQuestId; // 0xA0
		::JDOLCBBOINH FromSectionOrFloor; // 0xA4
		::System::Int32 SpecialLayerIndex; // 0xAC
		::System::Boolean BangkovMode; // 0xB0
		::System::Boolean ZenkovMode; // 0xB1
		::System::Boolean AutoFocusTrackAnim; // 0xB2
		::System::Boolean AsyncLoad; // 0xB3
		::System::Boolean Is3DMode; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsXKov()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTEXT_GET_ISXKOV_OFFSET))(this);
		}

		::System::Int32 get_ZenKovSelectQuestId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTEXT_GET_ZENKOVSELECTQUESTID_OFFSET))(this);
		}

		::System::Void set_ZenKovSelectQuestId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTEXT_SET_ZENKOVSELECTQUESTID_OFFSET))(this, value);
		}

		::System::Void CopyTo(::MoleMole::UIUrbanMapPageContext* other)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPageContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTEXT_COPYTO_OFFSET))(this, other);
		}

		::System::Boolean Equals(::MoleMole::UIUrbanMapPageContext* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapPageContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPAGECONTEXT_EQUALS_OFFSET))(this, other);
		}
	};
}
