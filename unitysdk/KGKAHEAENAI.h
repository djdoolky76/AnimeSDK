#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class UIParticleClippable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Renderer; }

#define KGKAHEAENAI_AODAHAFDMKM_OFFSET UNITYSDK_OFFSET(0xB3EEA80)
#define KGKAHEAENAI_APIDHHKLGEJ_OFFSET UNITYSDK_OFFSET(0xB3EE820)
#define KGKAHEAENAI_CCTOR_OFFSET UNITYSDK_OFFSET(0xB3EF470)
#define KGKAHEAENAI_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xB3EEB20)
#define KGKAHEAENAI_CTOR_OFFSET UNITYSDK_OFFSET(0xB3EF430)
#define KGKAHEAENAI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB3EE760)
#define KGKAHEAENAI_LCKCGFBGBMN_OFFSET UNITYSDK_OFFSET(0xB3EEB70)
#define KGKAHEAENAI_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xB3EEAE0)
#define KGKAHEAENAI_OCIHINMJMBE_OFFSET UNITYSDK_OFFSET(0xB3EED80)
#define KGKAHEAENAI_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xB3EE7D0)
#define KGKAHEAENAI_PNIEFOONFOP_OFFSET UNITYSDK_OFFSET(0xB3EF3F0)
#define KGKAHEAENAI_TICK_OFFSET UNITYSDK_OFFSET(0xB3EED20)

inline static constexpr unsigned int KGKAHEAENAI_TypeDefinitionIndex = 47552;

	class KGKAHEAENAI : public ::RPG::Client::TABehaviorBase
	{
	public:
		::Il2CppArray<::UnityEngine::Renderer*>* MOECGMPCECP; // 0x38
		::UnityEngine::RectTransform* JAKMENOCECF; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* LMFMICDLONA; // 0x48
		::Il2CppArray<::UnityEngine::Vector3>* NKAAOPLPBMN; // 0x50
		::UnityEngine::Vector4 CHGCLHODPDC; // 0x58
		::UnityEngine::Rect IOFGBBIMKJN; // 0x68
		static ::System::Int32* StaticGet_MBIMFOFDJEB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KGKAHEAENAI")->GetStaticField(0x123A0);
		}

		static ::System::Int32* StaticGet_HINLHNAPEGA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KGKAHEAENAI")->GetStaticField(0x123A4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKAHEAENAI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGKAHEAENAI_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKAHEAENAI_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKAHEAENAI_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void AODAHAFDMKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKAHEAENAI_AODAHAFDMKM_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKAHEAENAI_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKAHEAENAI_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGKAHEAENAI_TICK_OFFSET))(this, a1);
		}

		::System::Void APIDHHKLGEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKAHEAENAI_APIDHHKLGEJ_OFFSET))(this);
		}

		::System::Void OCIHINMJMBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKAHEAENAI_OCIHINMJMBE_OFFSET))(this);
		}

		::System::Void LCKCGFBGBMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKAHEAENAI_LCKCGFBGBMN_OFFSET))(this);
		}

		::RPG::Client::UIParticleClippable* PNIEFOONFOP()
		{
			return ((::RPG::Client::UIParticleClippable*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKAHEAENAI_PNIEFOONFOP_OFFSET))(this);
		}

	};
