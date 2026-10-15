#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class CRPVCBackground; }
namespace RPG::Client { class SplitScreenVCControl; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define HAJLCBHPACI_ADLPFIHHJPM_OFFSET UNITYSDK_OFFSET(0x15B72D40)
#define HAJLCBHPACI_BKGHMFCOFPA_OFFSET UNITYSDK_OFFSET(0x15B71BB0)
#define HAJLCBHPACI_COOGLDNKAIO_OFFSET UNITYSDK_OFFSET(0x15B720D0)
#define HAJLCBHPACI_CTOR_OFFSET UNITYSDK_OFFSET(0x15B72E10)
#define HAJLCBHPACI_DDGAJAANKFA_OFFSET UNITYSDK_OFFSET(0x15B724F0)
#define HAJLCBHPACI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B72120)
#define HAJLCBHPACI_GDHLIMDHFOL_OFFSET UNITYSDK_OFFSET(0x15B72550)
#define HAJLCBHPACI_HKCMEKODBHM_OFFSET UNITYSDK_OFFSET(0x15B72690)
#define HAJLCBHPACI_HNDDPHCMEEL_OFFSET UNITYSDK_OFFSET(0x15B72BB0)
#define HAJLCBHPACI_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x15B70580)
#define HAJLCBHPACI_IAMMNDNCHKE_OFFSET UNITYSDK_OFFSET(0x15B725F0)
#define HAJLCBHPACI_IEDHLHHLOOJ_OFFSET UNITYSDK_OFFSET(0x15B72890)
#define HAJLCBHPACI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15B705D0)
#define HAJLCBHPACI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15B72000)
#define HAJLCBHPACI_LNDCKCLNKHO_OFFSET UNITYSDK_OFFSET(0x15B71740)
#define HAJLCBHPACI_LPDPKOOEHFE_OFFSET UNITYSDK_OFFSET(0x15B72790)
#define HAJLCBHPACI_NIOJLAEEMLG_OFFSET UNITYSDK_OFFSET(0x15B70630)
#define HAJLCBHPACI_PJCJEAJNPBE_OFFSET UNITYSDK_OFFSET(0x15B71690)

inline static constexpr unsigned int HAJLCBHPACI_TypeDefinitionIndex = 69715;

	class HAJLCBHPACI : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::String* AGJDKFLBNLA; // 0x18
		::System::String* ALIHAFPMPOA; // 0x20
		::UnityEngine::Texture2D* IPFHEKOCABD; // 0x28
		::UnityEngine::Texture2D* POJMAKPIJHK; // 0x30
		::System::Nullable_1<::UnityEngine::Vector2> KNDJODMHDIA; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::Vector2 ANAFLKMMEFJ; // 0x44
		::UnityEngine::Vector2 DEAGFGEGGDJ; // 0x4C
		::System::Boolean DDFBKOHOIOI; // 0x54
		::System::Nullable_1<::System::Boolean> ADINFEHCJCE; // 0x55
		::System::Nullable_1<::System::Boolean> PNEBIBKJMCM; // 0x57
		::System::Nullable_1<::System::Single> IHINAPMNICE; // 0x5C
		::System::Nullable_1<::System::Single> JFKBDNMFOFL; // 0x64
		::System::Nullable_1<::System::Single> JBHNCHNFGKO; // 0x6C
		::System::Nullable_1<::System::Single> HBIPIGHGPFH; // 0x74
		::System::Nullable_1<::System::Single> JGFEBMPNHGE; // 0x7C
		::System::Nullable_1<::UnityEngine::Vector2> HDNMPNPBOAA; // 0x84
		::System::Byte _padding1[0x4];
		::System::Nullable_1<::UnityEngine::Color> CDGOEKBKLAD; // 0x90
		::System::Byte _padding2[0xC];
		::System::Nullable_1<::UnityEngine::Vector2> BGJBONAALME; // 0xA4
		::System::Byte _padding3[0x4];
		::System::Nullable_1<::UnityEngine::Vector2> DIACFBPMAJM; // 0xB0
		::System::Byte _padding4[0x4];
		::System::Nullable_1<::UnityEngine::Color> HOEFNNIJLLB; // 0xBC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJLCBHPACI_CTOR_OFFSET))(this);
		}

		::RPG::Client::SplitScreenVCControl* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::SplitScreenVCControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJLCBHPACI_HPNDIIPEFLJ_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJLCBHPACI_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + HAJLCBHPACI_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void COOGLDNKAIO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAJLCBHPACI_COOGLDNKAIO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJLCBHPACI_DISPOSE_OFFSET))(this);
		}

		::System::Void NIOJLAEEMLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJLCBHPACI_NIOJLAEEMLG_OFFSET))(this);
		}

		::System::Void LNDCKCLNKHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJLCBHPACI_LNDCKCLNKHO_OFFSET))(this);
		}

		::System::Void BKGHMFCOFPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJLCBHPACI_BKGHMFCOFPA_OFFSET))(this);
		}

		::System::Void GDHLIMDHFOL(::RPG::Client::CRPVCBackground* a1, ::UnityEngine::Rendering::CRPVirtualCamera* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CRPVCBackground*, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + HAJLCBHPACI_GDHLIMDHFOL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IAMMNDNCHKE(::UnityEngine::Material* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + HAJLCBHPACI_IAMMNDNCHKE_OFFSET))(this, a1, a2);
		}

		::System::Void HKCMEKODBHM(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Texture2D* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + HAJLCBHPACI_HKCMEKODBHM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LPDPKOOEHFE(::UnityEngine::Material* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + HAJLCBHPACI_LPDPKOOEHFE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PJCJEAJNPBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJLCBHPACI_PJCJEAJNPBE_OFFSET))(this);
		}

		::System::Void IEDHLHHLOOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJLCBHPACI_IEDHLHHLOOJ_OFFSET))(this);
		}

		::System::Single ADLPFIHHJPM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJLCBHPACI_ADLPFIHHJPM_OFFSET))(this);
		}

		::System::Void HNDDPHCMEEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJLCBHPACI_HNDDPHCMEEL_OFFSET))(this);
		}

		::UnityEngine::Material* DDGAJAANKFA(::UnityEngine::MeshRenderer* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + HAJLCBHPACI_DDGAJAANKFA_OFFSET))(this, a1);
		}

	};
