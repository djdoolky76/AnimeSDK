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

#define KGKAHEAENAI_AODAHAFDMKM_OFFSET UNITYSDK_OFFSET(0xB3E7C00)
#define KGKAHEAENAI_APIDHHKLGEJ_OFFSET UNITYSDK_OFFSET(0xB3E79A0)
#define KGKAHEAENAI_CCTOR_OFFSET UNITYSDK_OFFSET(0xB3E85F0)
#define KGKAHEAENAI_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xB3E7CA0)
#define KGKAHEAENAI_CTOR_OFFSET UNITYSDK_OFFSET(0xB3E85B0)
#define KGKAHEAENAI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB3E78E0)
#define KGKAHEAENAI_LCKCGFBGBMN_OFFSET UNITYSDK_OFFSET(0xB3E7CF0)
#define KGKAHEAENAI_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xB3E7C60)
#define KGKAHEAENAI_OCIHINMJMBE_OFFSET UNITYSDK_OFFSET(0xB3E7F00)
#define KGKAHEAENAI_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xB3E7950)
#define KGKAHEAENAI_PNIEFOONFOP_OFFSET UNITYSDK_OFFSET(0xB3E8570)
#define KGKAHEAENAI_TICK_OFFSET UNITYSDK_OFFSET(0xB3E7EA0)

inline static constexpr unsigned int KGKAHEAENAI_TypeDefinitionIndex = 47552;

	class KGKAHEAENAI : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::RectTransform* JAKMENOCECF; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* LMFMICDLONA; // 0x40
		::Il2CppArray<::UnityEngine::Renderer*>* MOECGMPCECP; // 0x48
		::Il2CppArray<::UnityEngine::Vector3>* NKAAOPLPBMN; // 0x50
		::UnityEngine::Rect IOFGBBIMKJN; // 0x58
		::UnityEngine::Vector4 CHGCLHODPDC; // 0x68
		static ::System::Int32* StaticGet_MBIMFOFDJEB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KGKAHEAENAI")->GetStaticField(0x10C40);
		}

		static ::System::Int32* StaticGet_HINLHNAPEGA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KGKAHEAENAI")->GetStaticField(0x10C44);
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
