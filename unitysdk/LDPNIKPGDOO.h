#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AICFKHOFOIL;
class BGGMBHMBCLH;
class BKALJBOCMDI;
class DJIJJONPFGD;
class FDAFKAOLBIL;
class JAANHJGOINJ;
class JAANHJGOINJ_DBGHEJKBHCG;
class KFDKOGMNCEL;

#define LDPNIKPGDOO_CTOR_OFFSET UNITYSDK_OFFSET(0xB63E440)
#define LDPNIKPGDOO_EPCCCIKOHJI_OFFSET UNITYSDK_OFFSET(0xB63E370)
#define LDPNIKPGDOO_GET_BASECONFIGURATOR_OFFSET UNITYSDK_OFFSET(0xB63E2B0)
#define LDPNIKPGDOO_GET_FINALIZESTEP_OFFSET UNITYSDK_OFFSET(0xB63E350)
#define LDPNIKPGDOO_GET_PROTOTYPESTEP_OFFSET UNITYSDK_OFFSET(0xB63E2D0)
#define LDPNIKPGDOO_GET_SKINSTEP_OFFSET UNITYSDK_OFFSET(0xB63E330)
#define LDPNIKPGDOO_GET_STATESTEP_OFFSET UNITYSDK_OFFSET(0xB63E2F0)
#define LDPNIKPGDOO_GET_TRACETREESTEP_OFFSET UNITYSDK_OFFSET(0xB63E310)
#define LDPNIKPGDOO_SET_BASECONFIGURATOR_OFFSET UNITYSDK_OFFSET(0xB63E2C0)
#define LDPNIKPGDOO_SET_FINALIZESTEP_OFFSET UNITYSDK_OFFSET(0xB63E360)
#define LDPNIKPGDOO_SET_PROTOTYPESTEP_OFFSET UNITYSDK_OFFSET(0xB63E2E0)
#define LDPNIKPGDOO_SET_SKINSTEP_OFFSET UNITYSDK_OFFSET(0xB63E340)
#define LDPNIKPGDOO_SET_STATESTEP_OFFSET UNITYSDK_OFFSET(0xB63E300)
#define LDPNIKPGDOO_SET_TRACETREESTEP_OFFSET UNITYSDK_OFFSET(0xB63E320)

inline static constexpr unsigned int LDPNIKPGDOO_TypeDefinitionIndex = 62689;

	class LDPNIKPGDOO : public ::System::Object
	{
	public:
		::DJIJJONPFGD* _SkinStep_k__BackingField; // 0x10
		::KFDKOGMNCEL* _BaseConfigurator_k__BackingField; // 0x18
		::BKALJBOCMDI* _PrototypeStep_k__BackingField; // 0x20
		::FDAFKAOLBIL* _FinalizeStep_k__BackingField; // 0x28
		::BGGMBHMBCLH* _StateStep_k__BackingField; // 0x30
		::AICFKHOFOIL* _TraceTreeStep_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPNIKPGDOO_CTOR_OFFSET))(this);
		}

		::KFDKOGMNCEL* get_BaseConfigurator()
		{
			return ((::KFDKOGMNCEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPNIKPGDOO_GET_BASECONFIGURATOR_OFFSET))(this);
		}

		::System::Void set_BaseConfigurator(::KFDKOGMNCEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFDKOGMNCEL*))((::PBYTE)hIl2Cpp + LDPNIKPGDOO_SET_BASECONFIGURATOR_OFFSET))(this, a1);
		}

		::BKALJBOCMDI* get_PrototypeStep()
		{
			return ((::BKALJBOCMDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPNIKPGDOO_GET_PROTOTYPESTEP_OFFSET))(this);
		}

		::System::Void set_PrototypeStep(::BKALJBOCMDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKALJBOCMDI*))((::PBYTE)hIl2Cpp + LDPNIKPGDOO_SET_PROTOTYPESTEP_OFFSET))(this, a1);
		}

		::BGGMBHMBCLH* get_StateStep()
		{
			return ((::BGGMBHMBCLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPNIKPGDOO_GET_STATESTEP_OFFSET))(this);
		}

		::System::Void set_StateStep(::BGGMBHMBCLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGGMBHMBCLH*))((::PBYTE)hIl2Cpp + LDPNIKPGDOO_SET_STATESTEP_OFFSET))(this, a1);
		}

		::AICFKHOFOIL* get_TraceTreeStep()
		{
			return ((::AICFKHOFOIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPNIKPGDOO_GET_TRACETREESTEP_OFFSET))(this);
		}

		::System::Void set_TraceTreeStep(::AICFKHOFOIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AICFKHOFOIL*))((::PBYTE)hIl2Cpp + LDPNIKPGDOO_SET_TRACETREESTEP_OFFSET))(this, a1);
		}

		::DJIJJONPFGD* get_SkinStep()
		{
			return ((::DJIJJONPFGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPNIKPGDOO_GET_SKINSTEP_OFFSET))(this);
		}

		::System::Void set_SkinStep(::DJIJJONPFGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJIJJONPFGD*))((::PBYTE)hIl2Cpp + LDPNIKPGDOO_SET_SKINSTEP_OFFSET))(this, a1);
		}

		::FDAFKAOLBIL* get_FinalizeStep()
		{
			return ((::FDAFKAOLBIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPNIKPGDOO_GET_FINALIZESTEP_OFFSET))(this);
		}

		::System::Void set_FinalizeStep(::FDAFKAOLBIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDAFKAOLBIL*))((::PBYTE)hIl2Cpp + LDPNIKPGDOO_SET_FINALIZESTEP_OFFSET))(this, a1);
		}

		::JAANHJGOINJ_DBGHEJKBHCG* EPCCCIKOHJI(::JAANHJGOINJ* a1)
		{
			return ((::JAANHJGOINJ_DBGHEJKBHCG*(*)(::PVOID, ::JAANHJGOINJ*))((::PBYTE)hIl2Cpp + LDPNIKPGDOO_EPCCCIKOHJI_OFFSET))(this, a1);
		}

	};
