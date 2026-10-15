#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Component; }
namespace UnityEngine { class FogEmissionBakeVolume; }

#define PHHDJMPICDB_CTOR_OFFSET UNITYSDK_OFFSET(0xC244020)
#define PHHDJMPICDB_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0xC244120)
#define PHHDJMPICDB_HMCJNJFJACO_OFFSET UNITYSDK_OFFSET(0xC2443D0)
#define PHHDJMPICDB_JOGIJHPNCOJ_OFFSET UNITYSDK_OFFSET(0xC244430)
#define PHHDJMPICDB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC2440A0)
#define PHHDJMPICDB_LMABHMJNBBM_OFFSET UNITYSDK_OFFSET(0xC244160)
#define PHHDJMPICDB_LMLGIJLNNMA_OFFSET UNITYSDK_OFFSET(0xC244240)
#define PHHDJMPICDB_MGFPAIGJCDF_OFFSET UNITYSDK_OFFSET(0xC244360)
#define PHHDJMPICDB_MINODBHAAOB_OFFSET UNITYSDK_OFFSET(0xC2442D0)
#define PHHDJMPICDB_MMPNOMJPIJE_OFFSET UNITYSDK_OFFSET(0xC2441C0)
#define PHHDJMPICDB_PDFMCHGIPBG_OFFSET UNITYSDK_OFFSET(0xC244490)

inline static constexpr unsigned int PHHDJMPICDB_TypeDefinitionIndex = 49081;

	class PHHDJMPICDB : public ::System::Object
	{
	public:
		::UnityEngine::FogEmissionBakeVolume* OAJAOHNCIFF; // 0x10
		::System::Single CCIDCHOPEJO; // 0x18
		::System::Void _ctor(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + PHHDJMPICDB_CTOR_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + PHHDJMPICDB_KHGIKBFDLFB_OFFSET))(this, a1);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHDJMPICDB_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void LMABHMJNBBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHDJMPICDB_LMABHMJNBBM_OFFSET))(this);
		}

		::System::Void MMPNOMJPIJE(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + PHHDJMPICDB_MMPNOMJPIJE_OFFSET))(this, a1, a2);
		}

		::System::Void LMLGIJLNNMA(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + PHHDJMPICDB_LMLGIJLNNMA_OFFSET))(this, a1);
		}

		::System::Void MINODBHAAOB(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + PHHDJMPICDB_MINODBHAAOB_OFFSET))(this, a1);
		}

		::System::Void MGFPAIGJCDF(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PHHDJMPICDB_MGFPAIGJCDF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HMCJNJFJACO(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PHHDJMPICDB_HMCJNJFJACO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JOGIJHPNCOJ(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PHHDJMPICDB_JOGIJHPNCOJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PDFMCHGIPBG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PHHDJMPICDB_PDFMCHGIPBG_OFFSET))(this, a1);
		}

	};
