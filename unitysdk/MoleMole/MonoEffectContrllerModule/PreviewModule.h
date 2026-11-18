#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNGNFKNMOLH;
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_MGNEBGDIIEO; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE_BOCBBBPPDHI_OFFSET UNITYSDK_OFFSET(0x162DC3E0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE_ONCREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x162DC2D0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE_ONDESTROYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x162DC320)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE_ONUPDATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x162DC370)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x162DC3C0)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int PreviewModule_TypeDefinitionIndex = 68022;

	class PreviewModule : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 LineFragment; // 0x14
		::System::Boolean ShowController; // 0x18
		::System::Byte _padding1[0x3];
		::System::Single HitAccuracy; // 0x1C
		::System::Int32 RecordFrame; // 0x20
		::System::Int32 RecordInterval; // 0x24
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KNGNFKNMOLH*>* DebugMap; // 0x28
		::System::UInt32 curReviewId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE_ONCREATECONTROLLER_OFFSET))(this, NCIMBHDKIJM);
		}

		::System::Void OnDestroyController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE_ONDESTROYCONTROLLER_OFFSET))(this, NCIMBHDKIJM);
		}

		::System::Void OnUpdateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE_ONUPDATECONTROLLER_OFFSET))(this, NCIMBHDKIJM);
		}

		::System::Void BOCBBBPPDHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_PREVIEWMODULE_BOCBBBPPDHI_OFFSET))(this);
		}
	};
}
