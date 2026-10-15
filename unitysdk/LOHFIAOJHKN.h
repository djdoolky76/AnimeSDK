#pragma once
#include "unitysdk/unitysdk.h"
class CACCADMBONM;
namespace RPG::Client::LimaoNews { class LimaoNewsNetworkService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define LOHFIAOJHKN_CTOR_OFFSET UNITYSDK_OFFSET(0xB802A90)
#define LOHFIAOJHKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB802C20)
#define LOHFIAOJHKN_FEIHGKFLMGL_OFFSET UNITYSDK_OFFSET(0xB802E00)
#define LOHFIAOJHKN_NJENMMGILAD_OFFSET UNITYSDK_OFFSET(0xB802F20)
#define LOHFIAOJHKN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB802CE0)
#define LOHFIAOJHKN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB802B70)
#define LOHFIAOJHKN_TICK_OFFSET UNITYSDK_OFFSET(0xB802BC0)

inline static constexpr unsigned int LOHFIAOJHKN_TypeDefinitionIndex = 52936;

	class LOHFIAOJHKN
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsWindowService* MPFFGNPIDOA; // 0x28
		::RPG::Client::LimaoNews::LimaoNewsPlanService* IAHMPKBCKBF; // 0x30
		::RPG::Client::LimaoNews::LimaoNewsNetworkService* MJHHLOPFDNK; // 0x38
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

		::System::Void NJENMMGILAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHFIAOJHKN_NJENMMGILAD_OFFSET))(this);
		}

	};
