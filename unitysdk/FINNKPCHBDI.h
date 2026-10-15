#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::CustomRP { class VirtualCamera; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define FINNKPCHBDI_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x157A41F0)
#define FINNKPCHBDI_CTOR_OFFSET UNITYSDK_OFFSET(0x157A4420)
#define FINNKPCHBDI_GIIGBBPKFMF_OFFSET UNITYSDK_OFFSET(0x157A4370)
#define FINNKPCHBDI_HIPMKBHGDID_OFFSET UNITYSDK_OFFSET(0x157A43D0)
#define FINNKPCHBDI_IINKHPOJOGP_OFFSET UNITYSDK_OFFSET(0x157A3500)
#define FINNKPCHBDI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x157A3F70)

inline static constexpr unsigned int FINNKPCHBDI_TypeDefinitionIndex = 70397;

	class FINNKPCHBDI : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* LIECGHBPGOI; // 0x10
		::Il2CppArray<::UnityEngine::Renderer*>* MOECGMPCECP; // 0x18
		::UnityEngine::Transform* EJLFKOAFOJB; // 0x20
		::RPG::CustomRP::VirtualCamera* EJFOJELOONF; // 0x28
		::Il2CppArray<::UnityEngine::MaterialPropertyBlock*>* BMCPFHADPKJ; // 0x30
		::UnityEngine::Camera* FCMHOBKNEEG; // 0x38
		::System::Boolean LNKHKEFIBNN; // 0x40
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 NMPDINMMMGA; // 0x44
		::UnityEngine::Matrix4x4 GGFBEOFHAFD; // 0x4C
		::UnityEngine::Vector4 JFAGECNFHJL; // 0x8C
		::System::Single KFJBNPHGCMJ; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FINNKPCHBDI_CTOR_OFFSET))(this);
		}

		::System::Void IINKHPOJOGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FINNKPCHBDI_IINKHPOJOGP_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FINNKPCHBDI_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH(::Il2CppArray<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + FINNKPCHBDI_ABKBOGIGAEH_OFFSET))(this, a1);
		}

		::System::Void GIIGBBPKFMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FINNKPCHBDI_GIIGBBPKFMF_OFFSET))(this);
		}

		::System::Void HIPMKBHGDID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FINNKPCHBDI_HIPMKBHGDID_OFFSET))(this);
		}

	};
