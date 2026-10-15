#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHCLMBHKPCK;
class JAANHJGOINJ;
class JAANHJGOINJ_DBGHEJKBHCG;
class KFCGNFIEOOK;
class KFDKOGMNCEL;

#define AHAODIJBKGG_CTOR_OFFSET UNITYSDK_OFFSET(0xEB74AD0)
#define AHAODIJBKGG_EPCCCIKOHJI_OFFSET UNITYSDK_OFFSET(0xEB74A40)
#define AHAODIJBKGG_GET_BASECONFIGURATOR_OFFSET UNITYSDK_OFFSET(0xEB749E0)
#define AHAODIJBKGG_GET_TRIALCOMPONENTSTEP_OFFSET UNITYSDK_OFFSET(0xEB74A20)
#define AHAODIJBKGG_GET_TRIALRELICSTEP_OFFSET UNITYSDK_OFFSET(0xEB74A00)
#define AHAODIJBKGG_SET_BASECONFIGURATOR_OFFSET UNITYSDK_OFFSET(0xEB749F0)
#define AHAODIJBKGG_SET_TRIALCOMPONENTSTEP_OFFSET UNITYSDK_OFFSET(0xEB74A30)
#define AHAODIJBKGG_SET_TRIALRELICSTEP_OFFSET UNITYSDK_OFFSET(0xEB74A10)

inline static constexpr unsigned int AHAODIJBKGG_TypeDefinitionIndex = 62821;

	class AHAODIJBKGG : public ::System::Object
	{
	public:
		::KFCGNFIEOOK* _TrialComponentStep_k__BackingField; // 0x10
		::EHCLMBHKPCK* _TrialRelicStep_k__BackingField; // 0x18
		::KFDKOGMNCEL* _BaseConfigurator_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAODIJBKGG_CTOR_OFFSET))(this);
		}

		::KFDKOGMNCEL* get_BaseConfigurator()
		{
			return ((::KFDKOGMNCEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAODIJBKGG_GET_BASECONFIGURATOR_OFFSET))(this);
		}

		::System::Void set_BaseConfigurator(::KFDKOGMNCEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFDKOGMNCEL*))((::PBYTE)hIl2Cpp + AHAODIJBKGG_SET_BASECONFIGURATOR_OFFSET))(this, a1);
		}

		::EHCLMBHKPCK* get_TrialRelicStep()
		{
			return ((::EHCLMBHKPCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAODIJBKGG_GET_TRIALRELICSTEP_OFFSET))(this);
		}

		::System::Void set_TrialRelicStep(::EHCLMBHKPCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHCLMBHKPCK*))((::PBYTE)hIl2Cpp + AHAODIJBKGG_SET_TRIALRELICSTEP_OFFSET))(this, a1);
		}

		::KFCGNFIEOOK* get_TrialComponentStep()
		{
			return ((::KFCGNFIEOOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHAODIJBKGG_GET_TRIALCOMPONENTSTEP_OFFSET))(this);
		}

		::System::Void set_TrialComponentStep(::KFCGNFIEOOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFCGNFIEOOK*))((::PBYTE)hIl2Cpp + AHAODIJBKGG_SET_TRIALCOMPONENTSTEP_OFFSET))(this, a1);
		}

		::JAANHJGOINJ_DBGHEJKBHCG* EPCCCIKOHJI(::JAANHJGOINJ* a1)
		{
			return ((::JAANHJGOINJ_DBGHEJKBHCG*(*)(::PVOID, ::JAANHJGOINJ*))((::PBYTE)hIl2Cpp + AHAODIJBKGG_EPCCCIKOHJI_OFFSET))(this, a1);
		}

	};
