#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RigidbodyConstraints.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEPOSITIONX_OFFSET UNITYSDK_OFFSET(0x146A50A0)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEPOSITIONY_OFFSET UNITYSDK_OFFSET(0x146A5150)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEPOSITIONZ_OFFSET UNITYSDK_OFFSET(0x146A5200)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEROTATIONX_OFFSET UNITYSDK_OFFSET(0x146A52B0)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEROTATIONY_OFFSET UNITYSDK_OFFSET(0x146A5360)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEROTATIONZ_OFFSET UNITYSDK_OFFSET(0x146A5410)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GMGMBLCOHNK_OFFSET UNITYSDK_OFFSET(0x146A54D0)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEPOSITIONX_OFFSET UNITYSDK_OFFSET(0x146A50F0)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEPOSITIONY_OFFSET UNITYSDK_OFFSET(0x146A51A0)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEPOSITIONZ_OFFSET UNITYSDK_OFFSET(0x146A5250)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEROTATIONX_OFFSET UNITYSDK_OFFSET(0x146A5300)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEROTATIONY_OFFSET UNITYSDK_OFFSET(0x146A53B0)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEROTATIONZ_OFFSET UNITYSDK_OFFSET(0x146A5460)
#define MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x146A54C0)

namespace MoleMole
{
	inline static constexpr unsigned int NpcPrototypeRigidbodyData_TypeDefinitionIndex = 82900;

	class NpcPrototypeRigidbodyData : public ::System::Object
	{
	public:
		::System::Single Mass; // 0x10
		::System::Boolean IsKinematic; // 0x14
		::System::Byte _padding0[0x3];
		::UnityEngine::RigidbodyConstraints _rigidbodyConstraints; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_FreezePositionX()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEPOSITIONX_OFFSET))(this);
		}

		::System::Void set_FreezePositionX(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEPOSITIONX_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_FreezePositionY()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEPOSITIONY_OFFSET))(this);
		}

		::System::Void set_FreezePositionY(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEPOSITIONY_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_FreezePositionZ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEPOSITIONZ_OFFSET))(this);
		}

		::System::Void set_FreezePositionZ(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEPOSITIONZ_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_FreezeRotationX()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEROTATIONX_OFFSET))(this);
		}

		::System::Void set_FreezeRotationX(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEROTATIONX_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_FreezeRotationY()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEROTATIONY_OFFSET))(this);
		}

		::System::Void set_FreezeRotationY(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEROTATIONY_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_FreezeRotationZ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GET_FREEZEROTATIONZ_OFFSET))(this);
		}

		::System::Void set_FreezeRotationZ(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_SET_FREEZEROTATIONZ_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void GMGMBLCOHNK(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPERIGIDBODYDATA_GMGMBLCOHNK_OFFSET))(this, KECKGDFIALJ);
		}
	};
}
