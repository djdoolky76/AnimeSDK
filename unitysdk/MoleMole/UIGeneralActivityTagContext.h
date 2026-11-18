#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNGGIKMNJEC.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGENERALACTIVITYTAGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3D6A30)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralActivityTagContext_TypeDefinitionIndex = 62143;

	class UIGeneralActivityTagContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::Events::UnityAction* detailCallback; // 0x28
		::System::String* stringTag; // 0x30
		::System::Boolean activeConsoleRegion; // 0x38
		::System::Byte _padding0[0x3];
		::System::Nullable_1<::DNGGIKMNJEC> activityTagIcon; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
