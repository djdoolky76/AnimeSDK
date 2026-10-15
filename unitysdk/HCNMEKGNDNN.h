#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGGJOHCMFNN;
namespace RPG::GameCore { class GameEntity; }

#define HCNMEKGNDNN_CTOR_OFFSET UNITYSDK_OFFSET(0x15C2A300)
#define HCNMEKGNDNN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C2A310)
#define HCNMEKGNDNN_JHHDKBPEJPM_OFFSET UNITYSDK_OFFSET(0x15C2A200)
#define HCNMEKGNDNN_KIHPCJFBDDN_OFFSET UNITYSDK_OFFSET(0x15C2A2B0)
#define HCNMEKGNDNN_MPIPHLPHJPD_OFFSET UNITYSDK_OFFSET(0x15C2A260)

inline static constexpr unsigned int HCNMEKGNDNN_TypeDefinitionIndex = 57176;

	class HCNMEKGNDNN : public ::System::Object
	{
	public:
		::NGGJOHCMFNN* COGLGAEHBOD; // 0x10
		::System::Void _ctor(::NGGJOHCMFNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGGJOHCMFNN*))((::PBYTE)hIl2Cpp + HCNMEKGNDNN_CTOR_OFFSET))(this, a1);
		}

		::System::Void JHHDKBPEJPM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HCNMEKGNDNN_JHHDKBPEJPM_OFFSET))(this, a1);
		}

		::System::Void MPIPHLPHJPD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HCNMEKGNDNN_MPIPHLPHJPD_OFFSET))(this, a1);
		}

		::System::Void KIHPCJFBDDN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HCNMEKGNDNN_KIHPCJFBDDN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNMEKGNDNN_DISPOSE_OFFSET))(this);
		}

	};
