#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class CRPVCBackground; }
namespace RPG::Client { class SmallWindowVCControl; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define IAOCBAKNDJI_CTOR_OFFSET UNITYSDK_OFFSET(0x15E23B50)
#define IAOCBAKNDJI_DDGAJAANKFA_OFFSET UNITYSDK_OFFSET(0x15E237B0)
#define IAOCBAKNDJI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E23560)
#define IAOCBAKNDJI_GDHLIMDHFOL_OFFSET UNITYSDK_OFFSET(0x15E23810)
#define IAOCBAKNDJI_HKCMEKODBHM_OFFSET UNITYSDK_OFFSET(0x15E23950)
#define IAOCBAKNDJI_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x15E22400)
#define IAOCBAKNDJI_IAMMNDNCHKE_OFFSET UNITYSDK_OFFSET(0x15E238B0)
#define IAOCBAKNDJI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15E22470)
#define IAOCBAKNDJI_KCILLNBNPGL_OFFSET UNITYSDK_OFFSET(0x15E224C0)
#define IAOCBAKNDJI_LFHACHMKOOJ_OFFSET UNITYSDK_OFFSET(0x15E23030)
#define IAOCBAKNDJI_LPDPKOOEHFE_OFFSET UNITYSDK_OFFSET(0x15E23A50)

inline static constexpr unsigned int IAOCBAKNDJI_TypeDefinitionIndex = 69713;

	class IAOCBAKNDJI : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::Texture2D* FIHHFOKOMPJ; // 0x18
		::System::String* EEGNPMNAFFH; // 0x20
		::Il2CppArray<::UnityEngine::Vector2>* CMGDDDMAHJN; // 0x28
		::System::Single MIJAKIMPCGJ; // 0x30
		::System::Single AOLGEMLDKAE; // 0x34
		::System::Nullable_1<::UnityEngine::Color> NFAOFJMMFIA; // 0x38
		::System::Byte _padding0[0xC];
		::System::Single CMBLMGDPAFN; // 0x4C
		::System::Nullable_1<::UnityEngine::Vector2> CFJAJIHFMIH; // 0x50
		::System::Byte _padding1[0x4];
		::System::Nullable_1<::System::Single> BFHMKJJCKKG; // 0x5C
		::System::Nullable_1<::UnityEngine::Vector2> CMKEKJKNIKE; // 0x64
		::System::Byte _padding2[0x4];
		::System::Single CNACJMMOFNL; // 0x70
		::System::Nullable_1<::System::Boolean> JGMGCPNCLPC; // 0x74
		::System::Boolean FJMFKJEIOIO; // 0x76
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOCBAKNDJI_CTOR_OFFSET))(this);
		}

		::RPG::Client::SmallWindowVCControl* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::SmallWindowVCControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOCBAKNDJI_HPNDIIPEFLJ_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOCBAKNDJI_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOCBAKNDJI_DISPOSE_OFFSET))(this);
		}

		::System::Void KCILLNBNPGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOCBAKNDJI_KCILLNBNPGL_OFFSET))(this);
		}

		::System::Void LFHACHMKOOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOCBAKNDJI_LFHACHMKOOJ_OFFSET))(this);
		}

		::System::Void GDHLIMDHFOL(::RPG::Client::CRPVCBackground* a1, ::UnityEngine::Rendering::CRPVirtualCamera* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CRPVCBackground*, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + IAOCBAKNDJI_GDHLIMDHFOL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IAMMNDNCHKE(::UnityEngine::Material* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + IAOCBAKNDJI_IAMMNDNCHKE_OFFSET))(this, a1, a2);
		}

		::System::Void HKCMEKODBHM(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Texture2D* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + IAOCBAKNDJI_HKCMEKODBHM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LPDPKOOEHFE(::UnityEngine::Material* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + IAOCBAKNDJI_LPDPKOOEHFE_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Material* DDGAJAANKFA(::UnityEngine::MeshRenderer* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + IAOCBAKNDJI_DDGAJAANKFA_OFFSET))(this, a1);
		}

	};
