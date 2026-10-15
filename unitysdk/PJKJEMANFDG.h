#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class MEPPNFLLMEN;
class MJEOAJOAKOD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define PJKJEMANFDG_CTOR_OFFSET UNITYSDK_OFFSET(0xC297D70)
#define PJKJEMANFDG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC298D00)
#define PJKJEMANFDG_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xC298D60)
#define PJKJEMANFDG_NMELICOMEBB_OFFSET UNITYSDK_OFFSET(0xC297DC0)
#define PJKJEMANFDG_ONKHPOCEODP_OFFSET UNITYSDK_OFFSET(0xC297EA0)
#define PJKJEMANFDG_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC297E10)
#define PJKJEMANFDG_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xC298D70)

inline static constexpr unsigned int PJKJEMANFDG_TypeDefinitionIndex = 57059;

	class PJKJEMANFDG : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* NKFFPBJJBCE; // 0x10
		::MEPPNFLLMEN* PBOBGOFNGMH; // 0x18
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x20
		::Il2CppArray<::System::Single>* FKKOAHGDFID; // 0x28
		::MJEOAJOAKOD* NMDGJILDMLO; // 0x30
		::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x38
		::System::Boolean _IsActive_k__BackingField; // 0x40
		::System::Boolean HDJOGGDMCIO; // 0x41
		::System::Byte _padding0[0x2];
		::System::Single HBCJEGADKGF; // 0x44
		::UnityEngine::Vector3 GHHCEKAKAAO; // 0x48
		::System::Single JMKACDADNGI; // 0x54
		::UnityEngine::Vector3 OIMMGKNHKOA; // 0x58
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PJKJEMANFDG_CTOR_OFFSET))(this, a1);
		}

		::MJEOAJOAKOD* NMELICOMEBB()
		{
			return ((::MJEOAJOAKOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKJEMANFDG_NMELICOMEBB_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKJEMANFDG_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void ONKHPOCEODP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJKJEMANFDG_ONKHPOCEODP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKJEMANFDG_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKJEMANFDG_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PJKJEMANFDG_SET_ISACTIVE_OFFSET))(this, a1);
		}

	};
