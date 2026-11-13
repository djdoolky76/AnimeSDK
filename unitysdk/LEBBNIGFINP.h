#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define LEBBNIGFINP_CGHDIANPOFF_OFFSET UNITYSDK_OFFSET(0x18C2AF00)
#define LEBBNIGFINP_CTOR_OFFSET UNITYSDK_OFFSET(0x18C2B040)
#define LEBBNIGFINP_GDBFPCFAEIF_OFFSET UNITYSDK_OFFSET(0x18C2AEB0)
#define LEBBNIGFINP_GET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0x18C2B020)
#define LEBBNIGFINP_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x18C2ADD0)
#define LEBBNIGFINP_MAJFEMJIHHI_OFFSET UNITYSDK_OFFSET(0x18C2AF70)
#define LEBBNIGFINP_MHAPPGHMOPN_OFFSET UNITYSDK_OFFSET(0x18C2AE20)
#define LEBBNIGFINP_SET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0x18C2B030)
#define LEBBNIGFINP__ONBIND_OFFSET UNITYSDK_OFFSET(0x18C2AD40)
#define LEBBNIGFINP__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x18C2AFC0)

inline static constexpr unsigned int LEBBNIGFINP_TypeDefinitionIndex = 73884;

	class LEBBNIGFINP : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::GameObject* OIHLFMFFAOB; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::UnityEngine::Transform* POGABPLIMMH; // 0x70
		::System::Boolean _IsUltraMode_k__BackingField; // 0x78
		// static const ::System::String* JFCMCPFPDFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBBNIGFINP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBBNIGFINP__ONBIND_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LEBBNIGFINP_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void GDBFPCFAEIF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEBBNIGFINP_GDBFPCFAEIF_OFFSET))(this, a1);
		}

		::System::Void CGHDIANPOFF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEBBNIGFINP_CGHDIANPOFF_OFFSET))(this, a1);
		}

		::System::Void MHAPPGHMOPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBBNIGFINP_MHAPPGHMOPN_OFFSET))(this);
		}

		::System::Void MAJFEMJIHHI(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LEBBNIGFINP_MAJFEMJIHHI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBBNIGFINP__ONDISPOSE_OFFSET))(this);
		}

		::System::Boolean get_IsUltraMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBBNIGFINP_GET_ISULTRAMODE_OFFSET))(this);
		}

		::System::Void set_IsUltraMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEBBNIGFINP_SET_ISULTRAMODE_OFFSET))(this, a1);
		}

	};
