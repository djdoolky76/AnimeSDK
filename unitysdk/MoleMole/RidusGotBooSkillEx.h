#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMNGAOGPIAA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/NMGGOIGIABA.h"

class ENDGACKJLGP;
namespace System { class String; }

#define MOLEMOLE_RIDUSGOTBOOSKILLEX_BUILD_OFFSET UNITYSDK_OFFSET(0x1BDE1F60)
#define MOLEMOLE_RIDUSGOTBOOSKILLEX_GET_INHISTORY_OFFSET UNITYSDK_OFFSET(0x1BDE1EA0)
#define MOLEMOLE_RIDUSGOTBOOSKILLEX_GET_INMYSKILL_OFFSET UNITYSDK_OFFSET(0x1BDE1EB0)
#define MOLEMOLE_RIDUSGOTBOOSKILLEX_GET_INNPCSKILL_OFFSET UNITYSDK_OFFSET(0x1BDE1EC0)
#define MOLEMOLE_RIDUSGOTBOOSKILLEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDE1ED0)

namespace MoleMole
{
	inline static constexpr unsigned int RidusGotBooSkillEx_TypeDefinitionIndex = 45067;

	class RidusGotBooSkillEx : public ::MoleMole::UIControllerContextBase
	{
	public:
		::ENDGACKJLGP* SimpleSkillConfig; // 0x28
		::System::String* ColorPath; // 0x30
		::System::Single AnimSampleTime; // 0x38
		::System::Boolean IsFeverKey; // 0x3C
		::System::Boolean IsNext; // 0x3D
		::System::Boolean PlayFadein; // 0x3E
		::System::Byte _padding0[0x1];
		::System::Single QTEDoneTime; // 0x40
		::NMGGOIGIABA Type; // 0x44
		::IMNGAOGPIAA QTEResult; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RIDUSGOTBOOSKILLEX__CTOR_OFFSET))(this);
		}

		::System::Boolean get_InHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RIDUSGOTBOOSKILLEX_GET_INHISTORY_OFFSET))(this);
		}

		::System::Boolean get_InMySkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RIDUSGOTBOOSKILLEX_GET_INMYSKILL_OFFSET))(this);
		}

		::System::Boolean get_InNpcSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RIDUSGOTBOOSKILLEX_GET_INNPCSKILL_OFFSET))(this);
		}

		::System::Void Build()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RIDUSGOTBOOSKILLEX_BUILD_OFFSET))(this);
		}
	};
}
