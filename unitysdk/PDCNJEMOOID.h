#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKDAJHBFCCK;
class IPEAFBIJIDK;
class JAANHJGOINJ;
class JAANHJGOINJ_DBGHEJKBHCG;
class KFDKOGMNCEL;

#define PDCNJEMOOID_CTOR_OFFSET UNITYSDK_OFFSET(0xC0062C0)
#define PDCNJEMOOID_EPCCCIKOHJI_OFFSET UNITYSDK_OFFSET(0xC006230)
#define PDCNJEMOOID_GET_BASECONFIGURATOR_OFFSET UNITYSDK_OFFSET(0xC0061D0)
#define PDCNJEMOOID_GET_OVERRIDEADVPLAYERSTEP_OFFSET UNITYSDK_OFFSET(0xC006210)
#define PDCNJEMOOID_GET_OVERRIDESKINSTEP_OFFSET UNITYSDK_OFFSET(0xC0061F0)
#define PDCNJEMOOID_SET_BASECONFIGURATOR_OFFSET UNITYSDK_OFFSET(0xC0061E0)
#define PDCNJEMOOID_SET_OVERRIDEADVPLAYERSTEP_OFFSET UNITYSDK_OFFSET(0xC006220)
#define PDCNJEMOOID_SET_OVERRIDESKINSTEP_OFFSET UNITYSDK_OFFSET(0xC006200)

inline static constexpr unsigned int PDCNJEMOOID_TypeDefinitionIndex = 62537;

	class PDCNJEMOOID : public ::System::Object
	{
	public:
		::DKDAJHBFCCK* _OverrideSkinStep_k__BackingField; // 0x10
		::KFDKOGMNCEL* _BaseConfigurator_k__BackingField; // 0x18
		::IPEAFBIJIDK* _OverrideAdvPlayerStep_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCNJEMOOID_CTOR_OFFSET))(this);
		}

		::KFDKOGMNCEL* get_BaseConfigurator()
		{
			return ((::KFDKOGMNCEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCNJEMOOID_GET_BASECONFIGURATOR_OFFSET))(this);
		}

		::System::Void set_BaseConfigurator(::KFDKOGMNCEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFDKOGMNCEL*))((::PBYTE)hIl2Cpp + PDCNJEMOOID_SET_BASECONFIGURATOR_OFFSET))(this, a1);
		}

		::DKDAJHBFCCK* get_OverrideSkinStep()
		{
			return ((::DKDAJHBFCCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCNJEMOOID_GET_OVERRIDESKINSTEP_OFFSET))(this);
		}

		::System::Void set_OverrideSkinStep(::DKDAJHBFCCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKDAJHBFCCK*))((::PBYTE)hIl2Cpp + PDCNJEMOOID_SET_OVERRIDESKINSTEP_OFFSET))(this, a1);
		}

		::IPEAFBIJIDK* get_OverrideAdvPlayerStep()
		{
			return ((::IPEAFBIJIDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDCNJEMOOID_GET_OVERRIDEADVPLAYERSTEP_OFFSET))(this);
		}

		::System::Void set_OverrideAdvPlayerStep(::IPEAFBIJIDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPEAFBIJIDK*))((::PBYTE)hIl2Cpp + PDCNJEMOOID_SET_OVERRIDEADVPLAYERSTEP_OFFSET))(this, a1);
		}

		::JAANHJGOINJ_DBGHEJKBHCG* EPCCCIKOHJI(::JAANHJGOINJ* a1)
		{
			return ((::JAANHJGOINJ_DBGHEJKBHCG*(*)(::PVOID, ::JAANHJGOINJ*))((::PBYTE)hIl2Cpp + PDCNJEMOOID_EPCCCIKOHJI_OFFSET))(this, a1);
		}

	};
