#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Component; }

#define LGELIFAKDMI_CTOR_OFFSET UNITYSDK_OFFSET(0xB6911D0)
#define LGELIFAKDMI_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0xB691270)
#define LGELIFAKDMI_HMCJNJFJACO_OFFSET UNITYSDK_OFFSET(0xB691460)
#define LGELIFAKDMI_JOGIJHPNCOJ_OFFSET UNITYSDK_OFFSET(0xB6914C0)
#define LGELIFAKDMI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB691220)
#define LGELIFAKDMI_LMABHMJNBBM_OFFSET UNITYSDK_OFFSET(0xB6912B0)
#define LGELIFAKDMI_LMLGIJLNNMA_OFFSET UNITYSDK_OFFSET(0xB691350)
#define LGELIFAKDMI_MGFPAIGJCDF_OFFSET UNITYSDK_OFFSET(0xB6913F0)
#define LGELIFAKDMI_MINODBHAAOB_OFFSET UNITYSDK_OFFSET(0xB6913A0)
#define LGELIFAKDMI_MMPNOMJPIJE_OFFSET UNITYSDK_OFFSET(0xB6912F0)
#define LGELIFAKDMI_PDFMCHGIPBG_OFFSET UNITYSDK_OFFSET(0xB691520)

	class LGELIFAKDMI : public ::System::Object
	{
	public:
		::UnityEngine::Component* ICIMIPJLMJJ; // 0x10
		::System::Void _ctor(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + LGELIFAKDMI_CTOR_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + LGELIFAKDMI_KHGIKBFDLFB_OFFSET))(this, a1);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGELIFAKDMI_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void LMABHMJNBBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGELIFAKDMI_LMABHMJNBBM_OFFSET))(this);
		}

		::System::Void MMPNOMJPIJE(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + LGELIFAKDMI_MMPNOMJPIJE_OFFSET))(this, a1, a2);
		}

		::System::Void LMLGIJLNNMA(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + LGELIFAKDMI_LMLGIJLNNMA_OFFSET))(this, a1);
		}

		::System::Void MINODBHAAOB(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + LGELIFAKDMI_MINODBHAAOB_OFFSET))(this, a1);
		}

		::System::Void MGFPAIGJCDF(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LGELIFAKDMI_MGFPAIGJCDF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HMCJNJFJACO(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LGELIFAKDMI_HMCJNJFJACO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JOGIJHPNCOJ(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LGELIFAKDMI_JOGIJHPNCOJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PDFMCHGIPBG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LGELIFAKDMI_PDFMCHGIPBG_OFFSET))(this, a1);
		}

	};
