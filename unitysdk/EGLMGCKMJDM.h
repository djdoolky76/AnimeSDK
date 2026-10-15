#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/ERacingMatchFlowState.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class BlendConfig; }
namespace RPG::GameCore { class LevelAreaManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define EGLMGCKMJDM_AJJHDAOALCI_OFFSET UNITYSDK_OFFSET(0x1451ABE0)
#define EGLMGCKMJDM_BFPBONBHFCN_OFFSET UNITYSDK_OFFSET(0x1451AF70)
#define EGLMGCKMJDM_CHDMKOONDAD_OFFSET UNITYSDK_OFFSET(0x1451B6B0)
#define EGLMGCKMJDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1451AA60)
#define EGLMGCKMJDM_DCJEKAKMIHO_OFFSET UNITYSDK_OFFSET(0x1451B350)
#define EGLMGCKMJDM_LBOPKJLCIHB_OFFSET UNITYSDK_OFFSET(0x1451AB90)
#define EGLMGCKMJDM_LENPPLNGDDB_OFFSET UNITYSDK_OFFSET(0x1451AB10)
#define EGLMGCKMJDM_MALOCMJMCGG_OFFSET UNITYSDK_OFFSET(0x1451B7D0)
#define EGLMGCKMJDM_NKLNPFICKKM_OFFSET UNITYSDK_OFFSET(0x1451B500)
#define EGLMGCKMJDM_PJDMFCOOCMO_OFFSET UNITYSDK_OFFSET(0x1451ACC0)

inline static constexpr unsigned int EGLMGCKMJDM_TypeDefinitionIndex = 81761;

	class EGLMGCKMJDM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::BlendConfig*>* HLLDINALFKO; // 0x10
		::System::String* HNGLDKMAFON; // 0x18
		::System::Boolean CFHCOPPPGIE; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::Client::B51Racing::ERacingMatchFlowState DBLPPKGIFMP; // 0x24
		// static const ::System::Object HNMPEOFPLLD; // 0x0
		// static const ::System::Object EOMCHFKEGCJ; // 0x0
		// static const ::System::String* GJIPAKJNHEH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLMGCKMJDM_CTOR_OFFSET))(this);
		}

		::System::Void LENPPLNGDDB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGLMGCKMJDM_LENPPLNGDDB_OFFSET))(this, a1);
		}

		::System::Void LBOPKJLCIHB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGLMGCKMJDM_LBOPKJLCIHB_OFFSET))(this, a1);
		}

		::System::UInt32 AJJHDAOALCI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLMGCKMJDM_AJJHDAOALCI_OFFSET))(this);
		}

		::System::Void PJDMFCOOCMO(::System::String* a1, ::System::Boolean a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EGLMGCKMJDM_PJDMFCOOCMO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BFPBONBHFCN(::RPG::GameCore::LevelAreaManager* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAreaManager*, ::System::String*))((::PBYTE)hIl2Cpp + EGLMGCKMJDM_BFPBONBHFCN_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CinemachineVirtualCamera* NKLNPFICKKM(::System::String* a1)
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EGLMGCKMJDM_NKLNPFICKKM_OFFSET))(this, a1);
		}

		::System::Boolean DCJEKAKMIHO(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + EGLMGCKMJDM_DCJEKAKMIHO_OFFSET))(this, a1, a2);
		}

		::System::Boolean CHDMKOONDAD(::System::String* a1, ::RPG::Client::BlendConfig* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::BlendConfig*))((::PBYTE)hIl2Cpp + EGLMGCKMJDM_CHDMKOONDAD_OFFSET))(this, a1, a2);
		}

		::System::Void MALOCMJMCGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLMGCKMJDM_MALOCMJMCGG_OFFSET))(this);
		}

	};
