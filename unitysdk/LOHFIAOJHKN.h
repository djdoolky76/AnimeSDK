#pragma once
#include "unitysdk/unitysdk.h"
class CACCADMBONM;
class DOEOMHPIPKE;
namespace RPG::Client::LimaoNews { class LimaoNewsNetworkService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanPhaseData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define LOHFIAOJHKN_BECIMHMPPBH_OFFSET UNITYSDK_OFFSET(0x1A5B11D0)
#define LOHFIAOJHKN_BKOLOOIIBIL_OFFSET UNITYSDK_OFFSET(0x1A5B20B0)
#define LOHFIAOJHKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B09C0)
#define LOHFIAOJHKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5B0B50)
#define LOHFIAOJHKN_FEIHGKFLMGL_OFFSET UNITYSDK_OFFSET(0x1A5B0D30)
#define LOHFIAOJHKN_HJJNGPOCDNF_OFFSET UNITYSDK_OFFSET(0x1A5B1BB0)
#define LOHFIAOJHKN_NJENMMGILAD_OFFSET UNITYSDK_OFFSET(0x1A5B1250)
#define LOHFIAOJHKN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A5B0C10)
#define LOHFIAOJHKN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A5B0AA0)
#define LOHFIAOJHKN_PDNIFOIECLA_OFFSET UNITYSDK_OFFSET(0x1A5B1FD0)
#define LOHFIAOJHKN_PPDJKHMHMNE_OFFSET UNITYSDK_OFFSET(0x1A5B1A50)
#define LOHFIAOJHKN_TICK_OFFSET UNITYSDK_OFFSET(0x1A5B0AF0)

inline static constexpr unsigned int LOHFIAOJHKN_TypeDefinitionIndex = 54092;

	class LOHFIAOJHKN
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsWindowService* MPFFGNPIDOA; // 0x28
		::RPG::Client::LimaoNews::LimaoNewsNetworkService* MJHHLOPFDNK; // 0x30
		::RPG::Client::LimaoNews::LimaoNewsPlanService* IAHMPKBCKBF; // 0x38
		// static const ::System::String* KDIFLHINAAP; // 0x0
		// static const ::System::String* ECLPCACOGHO; // 0x0
		// static const ::System::Object KKBMHBMHPCA; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CACCADMBONM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CACCADMBONM*))((::PBYTE)hIl2Cpp + LOHFIAOJHKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHFIAOJHKN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOHFIAOJHKN_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHFIAOJHKN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHFIAOJHKN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void FEIHGKFLMGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOHFIAOJHKN_FEIHGKFLMGL_OFFSET))(this, a1);
		}

		::System::Void NJENMMGILAD(::RPG::Client::LimaoNews::LimaoNewsPlanData* a1, ::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPlanData*, ::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData*))((::PBYTE)hIl2Cpp + LOHFIAOJHKN_NJENMMGILAD_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean BECIMHMPPBH(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + LOHFIAOJHKN_BECIMHMPPBH_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean PPDJKHMHMNE(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LOHFIAOJHKN_PPDJKHMHMNE_OFFSET))(a1);
		}

		static ::System::Boolean HJJNGPOCDNF(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + LOHFIAOJHKN_HJJNGPOCDNF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BKOLOOIIBIL(::DOEOMHPIPKE* a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::DOEOMHPIPKE*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + LOHFIAOJHKN_BKOLOOIIBIL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean PDNIFOIECLA(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + LOHFIAOJHKN_PDNIFOIECLA_OFFSET))(a1, a2);
		}

	};
