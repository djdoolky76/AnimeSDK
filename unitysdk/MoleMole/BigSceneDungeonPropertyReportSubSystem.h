#pragma once
#include "unitysdk/unitysdk.h"

class KHNHBJAGKDK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11A40500)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM_TRIGGERCALEROSIONRECORD_OFFSET UNITYSDK_OFFSET(0x11A405D0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A415D0)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x11A41540)
#define MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11A41750)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneDungeonPropertyReportSubSystem_TypeDefinitionIndex = 53819;

	class BigSceneDungeonPropertyReportSubSystem
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_RequiredErosionTags()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BigSceneDungeonPropertyReportSubSystem_TypeDefinitionIndex)->GetStaticField(0x4D750);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::KHNHBJAGKDK*>* ErosionContributionRecordMapSnap; // 0x10
		::System::Int32 _burstCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void TriggerCalErosionRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM_TRIGGERCALEROSIONRECORD_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONPROPERTYREPORTSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
