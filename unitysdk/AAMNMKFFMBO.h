#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class Effect_GPUCrowdAnimation; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MonoBehaviour; }

#define AAMNMKFFMBO_CTOR_OFFSET UNITYSDK_OFFSET(0xB0D1880)
#define AAMNMKFFMBO_EFBNKBLPLNO_OFFSET UNITYSDK_OFFSET(0xB0D0860)
#define AAMNMKFFMBO_FHPLHKAFCOE_OFFSET UNITYSDK_OFFSET(0xB0D0200)
#define AAMNMKFFMBO_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB0D07F0)
#define AAMNMKFFMBO_IIDCNINNNCH_OFFSET UNITYSDK_OFFSET(0xB0CE9E0)
#define AAMNMKFFMBO_JEDCEEHIBMC_OFFSET UNITYSDK_OFFSET(0xB0CEA30)
#define AAMNMKFFMBO_KLMLOPLHAIP_OFFSET UNITYSDK_OFFSET(0xB0D0AF0)
#define AAMNMKFFMBO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB0CE970)

inline static constexpr unsigned int AAMNMKFFMBO_TypeDefinitionIndex = 70364;

	class AAMNMKFFMBO : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* DDJOKDICMKC; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* CHALKDPBNEI; // 0x20
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* AKCGNNJGNIK; // 0x28
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Single>*>* IEBGAAIPHAP; // 0x30
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* DEOMNJNDJLP; // 0x38
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* CLFBLGMACMD; // 0x40
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>* NFDNHHCPIIP; // 0x48
		::UnityEngine::Vector2Int AOGBCDADOLP; // 0x50
		::UnityEngine::Matrix4x4 IIAKKCAMKFF; // 0x58
		::System::Single DIBJOLBHNGE; // 0x98
		::UnityEngine::Vector3 MJGJPNOJOIE; // 0x9C
		::UnityEngine::Matrix4x4 BOCKFDFNLHJ; // 0xA8
		::System::Single KPHKIJJFPLK; // 0xE8
		::System::Boolean OEMHEMIBLMD; // 0xEC
		::System::Boolean EMDEMKFCLFN; // 0xED
		::System::Boolean LLKJJPPKINN; // 0xEE
		::System::Byte _padding0[0x1];
		::UnityEngine::Matrix4x4 ODAIKOIHAOJ; // 0xF0
		::UnityEngine::Quaternion OENIINAJBBA; // 0x130
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMNMKFFMBO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + AAMNMKFFMBO_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void IIDCNINNNCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMNMKFFMBO_IIDCNINNNCH_OFFSET))(this);
		}

		::System::Void JEDCEEHIBMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMNMKFFMBO_JEDCEEHIBMC_OFFSET))(this);
		}

		::System::Void FHPLHKAFCOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMNMKFFMBO_FHPLHKAFCOE_OFFSET))(this);
		}

		::System::Void KLMLOPLHAIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMNMKFFMBO_KLMLOPLHAIP_OFFSET))(this);
		}

		::System::Void EFBNKBLPLNO(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AAMNMKFFMBO_EFBNKBLPLNO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Effect_GPUCrowdAnimation* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::Effect_GPUCrowdAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMNMKFFMBO_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
