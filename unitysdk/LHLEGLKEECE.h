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

#define LHLEGLKEECE_ALLOGPJGCMO_OFFSET UNITYSDK_OFFSET(0x1BCCC230)
#define LHLEGLKEECE_BLMPJIEJCPI_OFFSET UNITYSDK_OFFSET(0x1BCCB4A0)
#define LHLEGLKEECE_BMOFELOGPCH_OFFSET UNITYSDK_OFFSET(0x1BCCB820)
#define LHLEGLKEECE_CHIAFCGCAHC_OFFSET UNITYSDK_OFFSET(0x1BCCC240)
#define LHLEGLKEECE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCCC290)
#define LHLEGLKEECE_DJOEDGEAPPP_OFFSET UNITYSDK_OFFSET(0x1BCCC120)
#define LHLEGLKEECE_EJCICACDHMG_OFFSET UNITYSDK_OFFSET(0x1BCCBEA0)
#define LHLEGLKEECE_FKPJHMEJNMD_OFFSET UNITYSDK_OFFSET(0x1BCCC040)
#define LHLEGLKEECE_GEDIJPCNOFH_OFFSET UNITYSDK_OFFSET(0x1BCCB600)
#define LHLEGLKEECE_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1BCCBF60)
#define LHLEGLKEECE_HCBOIJLEJOC_OFFSET UNITYSDK_OFFSET(0x1BCCC200)
#define LHLEGLKEECE_HHJBEKGOEEC_OFFSET UNITYSDK_OFFSET(0x1BCCBAE0)
#define LHLEGLKEECE_HJNCAGNMIEL_OFFSET UNITYSDK_OFFSET(0x1BCCBB40)
#define LHLEGLKEECE_HKHHANACOEP_OFFSET UNITYSDK_OFFSET(0x1BCCC220)
#define LHLEGLKEECE_ICONKHIGIOA_OFFSET UNITYSDK_OFFSET(0x1BCCC210)
#define LHLEGLKEECE_INCHFJFBPJM_OFFSET UNITYSDK_OFFSET(0x1BCCB8A0)
#define LHLEGLKEECE_KEKNPCDEHGC_OFFSET UNITYSDK_OFFSET(0x1BCCB6B0)
#define LHLEGLKEECE_KIDBLLAGBCJ_OFFSET UNITYSDK_OFFSET(0x1BCCBCD0)
#define LHLEGLKEECE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1BCCAF40)
#define LHLEGLKEECE_MADJPMHBMNA_OFFSET UNITYSDK_OFFSET(0x1BCCC1F0)
#define LHLEGLKEECE_NAKPIHJKFIM_OFFSET UNITYSDK_OFFSET(0x1BCCAFA0)
#define LHLEGLKEECE_ONEAGNJBFJH_OFFSET UNITYSDK_OFFSET(0x1BCCBA80)

inline static constexpr unsigned int LHLEGLKEECE_TypeDefinitionIndex = 58560;

	class LHLEGLKEECE : public ::System::Object
	{
	public:
		::RPG::GameCore::EntityLodModelConfig* OPIIGLAJPDH; // 0x10
		::System::String* IMANEBGEPIO; // 0x18
		::System::Action_1<::UnityEngine::GameObject*>* KOFPPNFGKPO; // 0x20
		::System::Action_1<::UnityEngine::GameObject*>* EFLFOHKHIIH; // 0x28
		::RPG::GameCore::EntityLodLoadingData* CMCKMDEBKHE; // 0x30
		::System::Action_1<::UnityEngine::GameObject*>* NNNGFJMFLON; // 0x38
		::System::String* BODICBBGAJA; // 0x40
		::RPG::GameCore::EntityLodModelConfig* MGHKBEOHKDN; // 0x48
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x50
		::System::String* GFAGJIHDOII; // 0x58
		::UnityEngine::GameObject* CGGBLDIBMEH; // 0x60
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
