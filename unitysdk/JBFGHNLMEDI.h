#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTriggerConditionType.h"
#include "unitysdk/System/Object.h"
class JBFGHNLMEDI;
namespace RPG::GameCore { class CakeRaceTriggerConditionRow; }
namespace System { class String; }

#define JBFGHNLMEDI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1656C770)
#define JBFGHNLMEDI_CFDMLGFFJFB_OFFSET UNITYSDK_OFFSET(0x1656C520)
#define JBFGHNLMEDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1656C7E0)
#define JBFGHNLMEDI_EBIAJKOLOCJ_OFFSET UNITYSDK_OFFSET(0x1656C670)
#define JBFGHNLMEDI_GET_CONDITIONID_OFFSET UNITYSDK_OFFSET(0x1656C660)
#define JBFGHNLMEDI_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0x1656C6F0)
#define JBFGHNLMEDI_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0x1656C610)

	class JBFGHNLMEDI : public ::System::Object
	{
	public:
		::System::UInt32 _ConditionID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JBFGHNLMEDI_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::CakeRaceTriggerConditionRow* CFDMLGFFJFB(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceTriggerConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JBFGHNLMEDI_CFDMLGFFJFB_OFFSET))(a1);
		}

		::RPG::GameCore::CakeRaceTriggerConditionRow* MMFEEJAHPLJ()
		{
			return ((::RPG::GameCore::CakeRaceTriggerConditionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFGHNLMEDI_MMFEEJAHPLJ_OFFSET))(this);
		}

		::System::UInt32 get_ConditionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFGHNLMEDI_GET_CONDITIONID_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceTriggerConditionType EBIAJKOLOCJ()
		{
			return ((::RPG::GameCore::CakeRaceTriggerConditionType(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFGHNLMEDI_EBIAJKOLOCJ_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* HONGLJECAAC()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFGHNLMEDI_HONGLJECAAC_OFFSET))(this);
		}

		static ::JBFGHNLMEDI* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::JBFGHNLMEDI*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JBFGHNLMEDI_BPLPBPMEODA_OFFSET))(a1);
		}

	};
