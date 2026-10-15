#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveOnNavMeshFaceToType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define AHPMEFEPEBD_CLEAR_OFFSET UNITYSDK_OFFSET(0xEB8DA60)
#define AHPMEFEPEBD_CTOR_OFFSET UNITYSDK_OFFSET(0xEB8E100)
#define AHPMEFEPEBD_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xEB8E0E0)
#define AHPMEFEPEBD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xEB8D6D0)
#define AHPMEFEPEBD_ONKHPOCEODP_OFFSET UNITYSDK_OFFSET(0xEB8DAE0)
#define AHPMEFEPEBD_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xEB8E0F0)

inline static constexpr unsigned int AHPMEFEPEBD_TypeDefinitionIndex = 57084;

	class AHPMEFEPEBD : public ::System::Object
	{
	public:
		::UnityEngine::Transform* AFIBNIPMICJ; // 0x10
		::Il2CppArray<::System::Single>* FNKPDLLALIO; // 0x18
		::Il2CppArray<::UnityEngine::Vector3>* FJKLKJCBJGC; // 0x20
		::RPG::GameCore::GameEntity* IDHIFEDLFDN; // 0x28
		::UnityEngine::Vector3 CBBLCMFPEOL; // 0x30
		::System::Single NPINECOCALC; // 0x3C
		::System::Single IJKFPHAKDEA; // 0x40
		::RPG::GameCore::AdventureMoveOnNavMeshFaceToType MLMEAGPKCIA; // 0x44
		::System::Boolean _IsActive_k__BackingField; // 0x48
		::System::Byte _padding0[0x3];
		::System::Single HPCHCEFOKJB; // 0x4C
		::System::Single HBDJCFFDGDD; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPMEFEPEBD_CTOR_OFFSET))(this);
		}

		::System::Boolean KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Object*))((::PBYTE)hIl2Cpp + AHPMEFEPEBD_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPMEFEPEBD_CLEAR_OFFSET))(this);
		}

		::System::Boolean ONKHPOCEODP(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::RPG::GameCore::AdventureCharacterController* a3, ::System::Boolean a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::RPG::GameCore::AdventureCharacterController*, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AHPMEFEPEBD_ONKHPOCEODP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPMEFEPEBD_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AHPMEFEPEBD_SET_ISACTIVE_OFFSET))(this, a1);
		}

	};
