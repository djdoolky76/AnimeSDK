#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/CarSlotType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CIFKCGJNFHF;
class MONJFDPKFBA;
class NOGJOIKFJGE;
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define IDFMIHMFDDO_AANLCPCOMDL_OFFSET UNITYSDK_OFFSET(0x15EBC710)
#define IDFMIHMFDDO_BAJPNJKJDBO_OFFSET UNITYSDK_OFFSET(0x15EBBAB0)
#define IDFMIHMFDDO_BDNHCLGJADP_OFFSET UNITYSDK_OFFSET(0x15EBC4C0)
#define IDFMIHMFDDO_BPGLLLGDNGP_OFFSET UNITYSDK_OFFSET(0x15EBBCA0)
#define IDFMIHMFDDO_CTOR_OFFSET UNITYSDK_OFFSET(0x15EBC7F0)
#define IDFMIHMFDDO_DINJFKKHCLM_OFFSET UNITYSDK_OFFSET(0x15EBC1D0)
#define IDFMIHMFDDO_EGKEMBPHPMI_OFFSET UNITYSDK_OFFSET(0x15EBBE20)
#define IDFMIHMFDDO_GKCCKDIFHDP_OFFSET UNITYSDK_OFFSET(0x15EBBB50)
#define IDFMIHMFDDO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15EBBA10)
#define IDFMIHMFDDO_HGNGKLBMAOI_OFFSET UNITYSDK_OFFSET(0x15EBC140)
#define IDFMIHMFDDO_KGHMNNLHOJK_OFFSET UNITYSDK_OFFSET(0x15EBC3D0)
#define IDFMIHMFDDO_KHOEDMDFGCG_OFFSET UNITYSDK_OFFSET(0x15EBBCF0)
#define IDFMIHMFDDO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15EBB950)
#define IDFMIHMFDDO_LAPHBDLCIDB_OFFSET UNITYSDK_OFFSET(0x15EBC040)
#define IDFMIHMFDDO_MMGOMAGFGNP_OFFSET UNITYSDK_OFFSET(0x15EBC520)
#define IDFMIHMFDDO_OMPCJOHICOP_OFFSET UNITYSDK_OFFSET(0x15EBC2D0)
#define IDFMIHMFDDO_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0x15EBBF90)
#define IDFMIHMFDDO_PHEPLPLJCKD_OFFSET UNITYSDK_OFFSET(0x15EBBEC0)

inline static constexpr unsigned int IDFMIHMFDDO_TypeDefinitionIndex = 81768;

	class IDFMIHMFDDO : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x10
		::NOGJOIKFJGE* OIFGAIFLBBK; // 0x18
		::RPG::GameCore::GameEntity* NPEDFBPAPMO; // 0x20
		::CIFKCGJNFHF* POIDJMHLKJN; // 0x28
		::System::UInt32 MOLFABBPJGB; // 0x30
		// static const ::System::String* LDFHBKCNPJD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIHMFDDO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIHMFDDO_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIHMFDDO_HADOHLNHHGB_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* BPGLLLGDNGP()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIHMFDDO_BPGLLLGDNGP_OFFSET))(this);
		}

		::System::Void EGKEMBPHPMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIHMFDDO_EGKEMBPHPMI_OFFSET))(this);
		}

		::System::Void PHEPLPLJCKD(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + IDFMIHMFDDO_PHEPLPLJCKD_OFFSET))(this, a1, a2);
		}

		::System::Void PAFCMAMJENB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IDFMIHMFDDO_PAFCMAMJENB_OFFSET))(this, a1);
		}

		::System::Void LAPHBDLCIDB(::MONJFDPKFBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MONJFDPKFBA*))((::PBYTE)hIl2Cpp + IDFMIHMFDDO_LAPHBDLCIDB_OFFSET))(this, a1);
		}

		::System::Void DINJFKKHCLM(::RPG::Client::B51Racing::CarSlotType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::CarSlotType, ::System::String*))((::PBYTE)hIl2Cpp + IDFMIHMFDDO_DINJFKKHCLM_OFFSET))(this, a1, a2);
		}

		::System::Void OMPCJOHICOP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IDFMIHMFDDO_OMPCJOHICOP_OFFSET))(this, a1);
		}

		::System::Void KGHMNNLHOJK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDFMIHMFDDO_KGHMNNLHOJK_OFFSET))(this, a1);
		}

		::System::Void BDNHCLGJADP(::RPG::Client::B51Racing::CarSlotType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::CarSlotType))((::PBYTE)hIl2Cpp + IDFMIHMFDDO_BDNHCLGJADP_OFFSET))(this, a1);
		}

		::System::Void MMGOMAGFGNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIHMFDDO_MMGOMAGFGNP_OFFSET))(this);
		}

		::System::Void BAJPNJKJDBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIHMFDDO_BAJPNJKJDBO_OFFSET))(this);
		}

		::System::Void AANLCPCOMDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIHMFDDO_AANLCPCOMDL_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* KHOEDMDFGCG()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIHMFDDO_KHOEDMDFGCG_OFFSET))(this);
		}

		::System::Void HGNGKLBMAOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIHMFDDO_HGNGKLBMAOI_OFFSET))(this);
		}

		::System::Void GKCCKDIFHDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFMIHMFDDO_GKCCKDIFHDP_OFFSET))(this);
		}

	};
