#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class TriggerEffectParams; }
namespace System { class IDisposable; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IOBGKAHCDMF_AICJBNDALMJ_OFFSET UNITYSDK_OFFSET(0xB830570)
#define IOBGKAHCDMF_AIMMCIPEIIB_OFFSET UNITYSDK_OFFSET(0xB82F380)
#define IOBGKAHCDMF_BBGDLOOCLLO_OFFSET UNITYSDK_OFFSET(0xB82F490)
#define IOBGKAHCDMF_BEIPHHKFHCK_OFFSET UNITYSDK_OFFSET(0xB82FB10)
#define IOBGKAHCDMF_BGOMKDMBLKK_OFFSET UNITYSDK_OFFSET(0xB82F090)
#define IOBGKAHCDMF_BMJAFLCLADI_OFFSET UNITYSDK_OFFSET(0xB830190)
#define IOBGKAHCDMF_CCTOR_OFFSET UNITYSDK_OFFSET(0xB830A20)
#define IOBGKAHCDMF_CTOR_OFFSET UNITYSDK_OFFSET(0xB830990)
#define IOBGKAHCDMF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB82F6E0)
#define IOBGKAHCDMF_EHPKNBBNGOP_OFFSET UNITYSDK_OFFSET(0xB82FFA0)
#define IOBGKAHCDMF_GEOFCJFNPHN_OFFSET UNITYSDK_OFFSET(0xB830050)
#define IOBGKAHCDMF_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0xB82F5B0)
#define IOBGKAHCDMF_HADJBAMAAMI_OFFSET UNITYSDK_OFFSET(0xB82FD60)
#define IOBGKAHCDMF_HNAGKACGOPE_OFFSET UNITYSDK_OFFSET(0xB830770)
#define IOBGKAHCDMF_HOLKOEINPPF_OFFSET UNITYSDK_OFFSET(0xB830260)
#define IOBGKAHCDMF_ICJGCEMONLC_OFFSET UNITYSDK_OFFSET(0xB82FC20)
#define IOBGKAHCDMF_LBMNLJMPKAG_OFFSET UNITYSDK_OFFSET(0xB82F8E0)
#define IOBGKAHCDMF_OJNHAKEGGEK_OFFSET UNITYSDK_OFFSET(0xB82F800)
#define IOBGKAHCDMF_PMFHCIMNMPK_OFFSET UNITYSDK_OFFSET(0xB830480)

inline static constexpr unsigned int IOBGKAHCDMF_TypeDefinitionIndex = 61895;

	class IOBGKAHCDMF : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffectManager* KGCNPIEDOCA; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonoEffect*>* CGIODBBJLAK; // 0x18
		::System::Int32 KHNNFPPOMCL; // 0x20
		::System::Boolean GFAMGLFOMGI; // 0x24
		static ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>** StaticGet_JACFEBMPJIE()
		{
			return (::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>**)UnitySDK::FromName("", "IOBGKAHCDMF")->GetStaticField(0x55CD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOBGKAHCDMF_CCTOR_OFFSET))();
		}

		::System::IDisposable* BGOMKDMBLKK()
		{
			return ((::System::IDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_BGOMKDMBLKK_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_DISPOSE_OFFSET))(this);
		}

		::System::Void GPLLONMEDAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_GPLLONMEDAC_OFFSET))(this);
		}

		::System::Void OJNHAKEGGEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_OJNHAKEGGEK_OFFSET))(this);
		}

		::System::Void BEIPHHKFHCK(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_BEIPHHKFHCK_OFFSET))(this, a1);
		}

		::System::Void ICJGCEMONLC(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_ICJGCEMONLC_OFFSET))(this, a1);
		}

		::System::Void HADJBAMAAMI(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectParams* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_HADJBAMAAMI_OFFSET))(this, a1, a2);
		}

		::System::Void AIMMCIPEIIB(::RPG::Client::MonoEffectManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectManager*))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_AIMMCIPEIIB_OFFSET))(this, a1);
		}

		::System::Void BBGDLOOCLLO(::RPG::Client::MonoEffectManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectManager*))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_BBGDLOOCLLO_OFFSET))(this, a1);
		}

		::System::Void HOLKOEINPPF(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_HOLKOEINPPF_OFFSET))(this, a1);
		}

		::System::Void GEOFCJFNPHN(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_GEOFCJFNPHN_OFFSET))(this, a1);
		}

		static ::System::Void BMJAFLCLADI(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectParams* a2)
		{
			return ((::System::Void(*)(::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_BMJAFLCLADI_OFFSET))(a1, a2);
		}

		static ::System::Void PMFHCIMNMPK(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_PMFHCIMNMPK_OFFSET))(a1);
		}

		static ::System::Void AICJBNDALMJ(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_AICJBNDALMJ_OFFSET))(a1, a2);
		}

		::System::Void LBMNLJMPKAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_LBMNLJMPKAG_OFFSET))(this);
		}

		static ::System::Void HNAGKACGOPE(::System::UInt32 a1, ::RPG::Client::MonoEffect* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_HNAGKACGOPE_OFFSET))(a1, a2);
		}

		static ::System::Boolean EHPKNBBNGOP(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + IOBGKAHCDMF_EHPKNBBNGOP_OFFSET))(a1);
		}

	};
