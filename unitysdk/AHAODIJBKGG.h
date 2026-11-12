#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHCLMBHKPCK;
class JAANHJGOINJ;
class JAANHJGOINJ_DBGHEJKBHCG;
class KFCGNFIEOOK;
class KFDKOGMNCEL;

#define AHAODIJBKGG_CTOR_OFFSET UNITYSDK_OFFSET(0xF138E70)
#define AHAODIJBKGG_EPCCCIKOHJI_OFFSET UNITYSDK_OFFSET(0xF138DE0)
#define AHAODIJBKGG_GET_BASECONFIGURATOR_OFFSET UNITYSDK_OFFSET(0xF138D80)
#define AHAODIJBKGG_GET_TRIALCOMPONENTSTEP_OFFSET UNITYSDK_OFFSET(0xF138DC0)
#define AHAODIJBKGG_GET_TRIALRELICSTEP_OFFSET UNITYSDK_OFFSET(0xF138DA0)
#define AHAODIJBKGG_SET_BASECONFIGURATOR_OFFSET UNITYSDK_OFFSET(0xF138D90)
#define AHAODIJBKGG_SET_TRIALCOMPONENTSTEP_OFFSET UNITYSDK_OFFSET(0xF138DD0)
#define AHAODIJBKGG_SET_TRIALRELICSTEP_OFFSET UNITYSDK_OFFSET(0xF138DB0)

inline static constexpr unsigned int AHAODIJBKGG_TypeDefinitionIndex = 64259;

	class AHAODIJBKGG : public ::System::Object
	{
	public:
		::EHCLMBHKPCK* _TrialRelicStep_k__BackingField; // 0x10
		::KFCGNFIEOOK* _TrialComponentStep_k__BackingField; // 0x18
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
