#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HHCKNGMIAKL;
class KFELGAIGHAP;
class PBGJFNCHEJO;
namespace RPG::GameCore { class CreateSharedSummonUnit; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CKPDHGGKIPO_BEMNHPEOGBB_OFFSET UNITYSDK_OFFSET(0xE0A8070)
#define CKPDHGGKIPO_CTOR_OFFSET UNITYSDK_OFFSET(0xE0A7BD0)
#define CKPDHGGKIPO_DHLDAJPIPIN_OFFSET UNITYSDK_OFFSET(0xE0A9F50)
#define CKPDHGGKIPO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0A7DC0)
#define CKPDHGGKIPO_HNIJOJOPMHO_OFFSET UNITYSDK_OFFSET(0xE0A9E00)
#define CKPDHGGKIPO_NNDEDGOMIBE_OFFSET UNITYSDK_OFFSET(0xE0A8B80)
#define CKPDHGGKIPO_NOMFMJDEIAN_OFFSET UNITYSDK_OFFSET(0xE0A94B0)
#define CKPDHGGKIPO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE0A83E0)
#define CKPDHGGKIPO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE0A9B70)
#define CKPDHGGKIPO_PAJDCKGLIJI_OFFSET UNITYSDK_OFFSET(0xE0A9CB0)
#define CKPDHGGKIPO_TICK_OFFSET UNITYSDK_OFFSET(0xE0A9BC0)

inline static constexpr unsigned int CKPDHGGKIPO_TypeDefinitionIndex = 59299;

	class CKPDHGGKIPO : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* HBCDNGJDPCE; // 0x18
		::KFELGAIGHAP* CAKGIICDAJF; // 0x20
		::RPG::GameCore::CreateSharedSummonUnit* OFKGLJOAMLD; // 0x28
		::KFELGAIGHAP* OODBJDPKKKF; // 0x30
		::PBGJFNCHEJO* EPGIOAEIACN; // 0x38
		::KFELGAIGHAP* FJJCPJNINDE; // 0x40
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateSharedSummonUnit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateSharedSummonUnit*))((::PBYTE)hIl2Cpp + CKPDHGGKIPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPDHGGKIPO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPDHGGKIPO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void BEMNHPEOGBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPDHGGKIPO_BEMNHPEOGBB_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPDHGGKIPO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKPDHGGKIPO_TICK_OFFSET))(this, a1);
		}

		::System::Void PAJDCKGLIJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPDHGGKIPO_PAJDCKGLIJI_OFFSET))(this);
		}

		::System::Void HNIJOJOPMHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPDHGGKIPO_HNIJOJOPMHO_OFFSET))(this);
		}

		::System::Void DHLDAJPIPIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPDHGGKIPO_DHLDAJPIPIN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* NOMFMJDEIAN(::System::UInt32 a1, ::HHCKNGMIAKL* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::System::Boolean a7)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::HHCKNGMIAKL*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CKPDHGGKIPO_NOMFMJDEIAN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void NNDEDGOMIBE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::EntityPosAdaptionConfig* a4, ::UnityEngine::Quaternion a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityPosAdaptionConfig*, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CKPDHGGKIPO_NNDEDGOMIBE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

	};
