#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class EntityLodLoadingData; }
namespace RPG::GameCore { class EntityLodModelConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define LHLEGLKEECE_ALLOGPJGCMO_OFFSET UNITYSDK_OFFSET(0xB6B3980)
#define LHLEGLKEECE_BLMPJIEJCPI_OFFSET UNITYSDK_OFFSET(0xB6B2C00)
#define LHLEGLKEECE_BMOFELOGPCH_OFFSET UNITYSDK_OFFSET(0xB6B2F80)
#define LHLEGLKEECE_CHIAFCGCAHC_OFFSET UNITYSDK_OFFSET(0xB6B3990)
#define LHLEGLKEECE_CTOR_OFFSET UNITYSDK_OFFSET(0xB6B39E0)
#define LHLEGLKEECE_DJOEDGEAPPP_OFFSET UNITYSDK_OFFSET(0xB6B3870)
#define LHLEGLKEECE_EJCICACDHMG_OFFSET UNITYSDK_OFFSET(0xB6B35E0)
#define LHLEGLKEECE_FKPJHMEJNMD_OFFSET UNITYSDK_OFFSET(0xB6B3790)
#define LHLEGLKEECE_GEDIJPCNOFH_OFFSET UNITYSDK_OFFSET(0xB6B2D60)
#define LHLEGLKEECE_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB6B36A0)
#define LHLEGLKEECE_HCBOIJLEJOC_OFFSET UNITYSDK_OFFSET(0xB6B3950)
#define LHLEGLKEECE_HHJBEKGOEEC_OFFSET UNITYSDK_OFFSET(0xB6B3220)
#define LHLEGLKEECE_HJNCAGNMIEL_OFFSET UNITYSDK_OFFSET(0xB6B3280)
#define LHLEGLKEECE_HKHHANACOEP_OFFSET UNITYSDK_OFFSET(0xB6B3970)
#define LHLEGLKEECE_ICONKHIGIOA_OFFSET UNITYSDK_OFFSET(0xB6B3960)
#define LHLEGLKEECE_INCHFJFBPJM_OFFSET UNITYSDK_OFFSET(0xB6B3000)
#define LHLEGLKEECE_KEKNPCDEHGC_OFFSET UNITYSDK_OFFSET(0xB6B2E10)
#define LHLEGLKEECE_KIDBLLAGBCJ_OFFSET UNITYSDK_OFFSET(0xB6B3410)
#define LHLEGLKEECE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB6B26A0)
#define LHLEGLKEECE_MADJPMHBMNA_OFFSET UNITYSDK_OFFSET(0xB6B3940)
#define LHLEGLKEECE_NAKPIHJKFIM_OFFSET UNITYSDK_OFFSET(0xB6B2700)
#define LHLEGLKEECE_ONEAGNJBFJH_OFFSET UNITYSDK_OFFSET(0xB6B31C0)

inline static constexpr unsigned int LHLEGLKEECE_TypeDefinitionIndex = 57332;

	class LHLEGLKEECE : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::GameObject*>* KOFPPNFGKPO; // 0x10
		::RPG::GameCore::EntityLodLoadingData* CMCKMDEBKHE; // 0x18
		::System::String* IMANEBGEPIO; // 0x20
		::UnityEngine::GameObject* CGGBLDIBMEH; // 0x28
		::System::Action_1<::UnityEngine::GameObject*>* NNNGFJMFLON; // 0x30
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x38
		::System::String* GFAGJIHDOII; // 0x40
		::RPG::GameCore::EntityLodModelConfig* MGHKBEOHKDN; // 0x48
		::System::Action_1<::UnityEngine::GameObject*>* EFLFOHKHIIH; // 0x50
		::RPG::GameCore::EntityLodModelConfig* OPIIGLAJPDH; // 0x58
		::System::String* BODICBBGAJA; // 0x60
		::System::Boolean GFAMGLFOMGI; // 0x68
		::System::Byte _padding0[0x3];
		::System::Int32 EFCFHKMHHJJ; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEGLKEECE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::EntityLodLoadingData* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodLoadingData*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LHLEGLKEECE_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Boolean NAKPIHJKFIM(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LHLEGLKEECE_NAKPIHJKFIM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ONEAGNJBFJH(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHLEGLKEECE_ONEAGNJBFJH_OFFSET))(this, a1);
		}

		::System::Boolean HHJBEKGOEEC(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LHLEGLKEECE_HHJBEKGOEEC_OFFSET))(this, a1, a2);
		}

		::System::Void HJNCAGNMIEL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LHLEGLKEECE_HJNCAGNMIEL_OFFSET))(this, a1);
		}

		::System::Void EJCICACDHMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEGLKEECE_EJCICACDHMG_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEGLKEECE_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean BLMPJIEJCPI(::System::Int32 a1, ::RPG::GameCore::EntityLodModelConfig* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::EntityLodModelConfig*, ::System::String*))((::PBYTE)hIl2Cpp + LHLEGLKEECE_BLMPJIEJCPI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void INCHFJFBPJM(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LHLEGLKEECE_INCHFJFBPJM_OFFSET))(this, a1, a2);
		}

		::System::Void KEKNPCDEHGC(::UnityEngine::GameObject* a1, ::RPG::GameCore::EntityLodModelConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::EntityLodModelConfig*))((::PBYTE)hIl2Cpp + LHLEGLKEECE_KEKNPCDEHGC_OFFSET))(this, a1, a2);
		}

		::System::Void BMOFELOGPCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEGLKEECE_BMOFELOGPCH_OFFSET))(this);
		}

		::System::Void DJOEDGEAPPP(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LHLEGLKEECE_DJOEDGEAPPP_OFFSET))(this, a1);
		}

		::System::Void GEDIJPCNOFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEGLKEECE_GEDIJPCNOFH_OFFSET))(this);
		}

		::System::Void KIDBLLAGBCJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LHLEGLKEECE_KIDBLLAGBCJ_OFFSET))(this, a1);
		}

		::System::Void FKPJHMEJNMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEGLKEECE_FKPJHMEJNMD_OFFSET))(this);
		}

		::UnityEngine::GameObject* MADJPMHBMNA()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEGLKEECE_MADJPMHBMNA_OFFSET))(this);
		}

		::System::Int32 HCBOIJLEJOC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEGLKEECE_HCBOIJLEJOC_OFFSET))(this);
		}

		::System::String* ICONKHIGIOA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEGLKEECE_ICONKHIGIOA_OFFSET))(this);
		}

		::RPG::GameCore::EntityLodModelConfig* HKHHANACOEP()
		{
			return ((::RPG::GameCore::EntityLodModelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEGLKEECE_HKHHANACOEP_OFFSET))(this);
		}

		::System::Boolean ALLOGPJGCMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEGLKEECE_ALLOGPJGCMO_OFFSET))(this);
		}

		::RPG::GameCore::EntityLodTemplateName CHIAFCGCAHC()
		{
			return ((::RPG::GameCore::EntityLodTemplateName(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLEGLKEECE_CHIAFCGCAHC_OFFSET))(this);
		}

	};
