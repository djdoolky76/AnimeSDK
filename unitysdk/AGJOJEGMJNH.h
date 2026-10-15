#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoRotatingBlockControl; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define AGJOJEGMJNH_BIKNOLHCEOC_OFFSET UNITYSDK_OFFSET(0xCF3DA00)
#define AGJOJEGMJNH_CTOR_OFFSET UNITYSDK_OFFSET(0xCF3F6F0)
#define AGJOJEGMJNH_GBEAMKCHEEK_OFFSET UNITYSDK_OFFSET(0xCF3D150)
#define AGJOJEGMJNH_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0xCF3D960)
#define AGJOJEGMJNH_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xCF3D100)
#define AGJOJEGMJNH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCF3C810)

inline static constexpr unsigned int AGJOJEGMJNH_TypeDefinitionIndex = 70377;

	class AGJOJEGMJNH : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::MaterialPropertyBlock* HMHMGLCEALK; // 0x18
		::UnityEngine::GameObject* JJGCCEGHDDM; // 0x20
		::UnityEngine::GameObject* EJDCMEDEBGO; // 0x28
		::UnityEngine::GameObject* JPCMHJPCJLP; // 0x30
		::UnityEngine::Quaternion NCMEPPHLGEG; // 0x38
		::UnityEngine::Vector3 ICNBBLAOJGH; // 0x48
		::System::Single DLHGCGFDLBN; // 0x54
		::UnityEngine::Vector3 NOKOFCBMICO; // 0x58
		::System::Single JBMGKOLIJBD; // 0x64
		::System::Single AJOEFOBJGBH; // 0x68
		::System::Single NECEODNNDMA; // 0x6C
		::UnityEngine::Vector3 BHOPCDGLGEE; // 0x70
		::UnityEngine::Vector3 NFBLJCEJGDL; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOJEGMJNH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + AGJOJEGMJNH_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HBOHKIPCHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOJEGMJNH_HBOHKIPCHHE_OFFSET))(this);
		}

		::System::Void BIKNOLHCEOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOJEGMJNH_BIKNOLHCEOC_OFFSET))(this);
		}

		::System::Void GBEAMKCHEEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOJEGMJNH_GBEAMKCHEEK_OFFSET))(this);
		}

		::RPG::Client::MonoRotatingBlockControl* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoRotatingBlockControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOJEGMJNH_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
