#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FOOIINCDBFA;
class NJFHGODIBPN;
class NJFHGODIBPN_BNDKBMLLKBO;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_Main_MoveToTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define EKFGFNBBPMO_AAPKNHGHGPA_OFFSET UNITYSDK_OFFSET(0x15503090)
#define EKFGFNBBPMO_AFPCPOEJCJI_1_OFFSET UNITYSDK_OFFSET(0x15504130)
#define EKFGFNBBPMO_AFPCPOEJCJI_OFFSET UNITYSDK_OFFSET(0x155043A0)
#define EKFGFNBBPMO_AOHJBDNNPGF_OFFSET UNITYSDK_OFFSET(0x15502BB0)
#define EKFGFNBBPMO_CGPDEAONKDE_OFFSET UNITYSDK_OFFSET(0x15504510)
#define EKFGFNBBPMO_CTOR_OFFSET UNITYSDK_OFFSET(0x15501EC0)
#define EKFGFNBBPMO_EPIILIHIKLB_OFFSET UNITYSDK_OFFSET(0x15503740)
#define EKFGFNBBPMO_FKPBIKPOHJI_OFFSET UNITYSDK_OFFSET(0x155034D0)
#define EKFGFNBBPMO_HOMEACGEIMB_OFFSET UNITYSDK_OFFSET(0x155037F0)
#define EKFGFNBBPMO_IFODHMECLHF_OFFSET UNITYSDK_OFFSET(0x15503F30)
#define EKFGFNBBPMO_JLKJIHLELND_OFFSET UNITYSDK_OFFSET(0x15503600)
#define EKFGFNBBPMO_NCDLAIAFBGP_OFFSET UNITYSDK_OFFSET(0x155036D0)
#define EKFGFNBBPMO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15502500)
#define EKFGFNBBPMO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155038E0)
#define EKFGFNBBPMO_OOGCMLCLMJF_OFFSET UNITYSDK_OFFSET(0x15504560)
#define EKFGFNBBPMO_TICK_OFFSET UNITYSDK_OFFSET(0x15503B60)

	class EKFGFNBBPMO
	{
	public:
		::RPG::GameCore::AdventureCharacterController* GPACEDIFLNG; // 0x28
		::RPG::GameCore::GameEntity* IHAMICMPFLL; // 0x30
		::NJFHGODIBPN* NLOMMHDHDMK; // 0x38
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x40
		::RPG::GameCore::AdventureAbilityComponent* PCDEEAAIFPK; // 0x48
		::RPG::GameCore::TransformComponent* AFIBNIPMICJ; // 0x50
		::NJFHGODIBPN_BNDKBMLLKBO* HDIAPOOCACN; // 0x58
		::FOOIINCDBFA* CNPNMBNLKFJ; // 0x60
		::System::Single MFKLFPLLLFE; // 0x68
		::System::Boolean OOLNPGAHODC; // 0x6C
		::System::Boolean GAJCPBIEBDG; // 0x6D
		::System::Boolean NKHIBFCIFKI; // 0x6E
		::System::Byte _padding0[0x1];
		::System::Single PGMIOKKLHIE; // 0x70
		::System::Single LOFLFDNPNIE; // 0x74
		::System::Single HFHNFNHNGHB; // 0x78
		::System::Single EHCMLAFEDMP; // 0x7C
		::UnityEngine::Vector3 LMJOGIHJFIO; // 0x80
		// static const ::System::Object EDBFEHKLFOF; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_MoveToTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_MoveToTarget*))((::PBYTE)hIl2Cpp + EKFGFNBBPMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFGFNBBPMO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean AAPKNHGHGPA(::RPG::GameCore::TransformComponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + EKFGFNBBPMO_AAPKNHGHGPA_OFFSET))(this, a1);
		}

		::System::Void AOHJBDNNPGF(::RPG::GameCore::TransformComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + EKFGFNBBPMO_AOHJBDNNPGF_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 EPIILIHIKLB(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EKFGFNBBPMO_EPIILIHIKLB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 FKPBIKPOHJI(::RPG::GameCore::TransformComponent* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + EKFGFNBBPMO_FKPBIKPOHJI_OFFSET))(this, a1);
		}

		::System::Boolean HOMEACGEIMB(::RPG::GameCore::TransformComponent* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::System::Single))((::PBYTE)hIl2Cpp + EKFGFNBBPMO_HOMEACGEIMB_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFGFNBBPMO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKFGFNBBPMO_TICK_OFFSET))(this, a1);
		}

		::System::Boolean AFPCPOEJCJI(::RPG::GameCore::TransformComponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + EKFGFNBBPMO_AFPCPOEJCJI_OFFSET))(this, a1);
		}

		::System::Boolean AFPCPOEJCJI_1(::RPG::GameCore::TransformComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + EKFGFNBBPMO_AFPCPOEJCJI_1_OFFSET))(this, a1, a2);
		}

		::System::Void IFODHMECLHF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EKFGFNBBPMO_IFODHMECLHF_OFFSET))(this, a1);
		}

		::System::Void CGPDEAONKDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFGFNBBPMO_CGPDEAONKDE_OFFSET))(this);
		}

		::System::Void NCDLAIAFBGP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKFGFNBBPMO_NCDLAIAFBGP_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterMotionFlag JLKJIHLELND()
		{
			return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFGFNBBPMO_JLKJIHLELND_OFFSET))(this);
		}

		::System::Void OOGCMLCLMJF(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + EKFGFNBBPMO_OOGCMLCLMJF_OFFSET))(this, a1);
		}

	};
