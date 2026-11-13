#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Component; }

#define OGKEIFJPPEK_CTOR_OFFSET UNITYSDK_OFFSET(0x18E00210)
#define OGKEIFJPPEK_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x18E002B0)
#define OGKEIFJPPEK_HMCJNJFJACO_OFFSET UNITYSDK_OFFSET(0x18E005B0)
#define OGKEIFJPPEK_JOGIJHPNCOJ_OFFSET UNITYSDK_OFFSET(0x18E00610)
#define OGKEIFJPPEK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x18E00260)
#define OGKEIFJPPEK_LMABHMJNBBM_OFFSET UNITYSDK_OFFSET(0x18E002F0)
#define OGKEIFJPPEK_LMLGIJLNNMA_OFFSET UNITYSDK_OFFSET(0x18E00460)
#define OGKEIFJPPEK_MGFPAIGJCDF_OFFSET UNITYSDK_OFFSET(0x18E00540)
#define OGKEIFJPPEK_MINODBHAAOB_OFFSET UNITYSDK_OFFSET(0x18E004B0)
#define OGKEIFJPPEK_MMPNOMJPIJE_OFFSET UNITYSDK_OFFSET(0x18E00390)
#define OGKEIFJPPEK_PDFMCHGIPBG_OFFSET UNITYSDK_OFFSET(0x18E00670)

inline static constexpr unsigned int OGKEIFJPPEK_TypeDefinitionIndex = 50122;

	class OGKEIFJPPEK : public ::System::Object
	{
	public:
		::UnityEngine::Component* ICIMIPJLMJJ; // 0x10
		::UnityEngine::Vector3 EJCFLGHGNNB; // 0x18
		::System::Single HNBILCCOCHE; // 0x24
		::System::Void _ctor(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + OGKEIFJPPEK_CTOR_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + OGKEIFJPPEK_KHGIKBFDLFB_OFFSET))(this, a1);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKEIFJPPEK_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void LMABHMJNBBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKEIFJPPEK_LMABHMJNBBM_OFFSET))(this);
		}

		::System::Void MMPNOMJPIJE(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + OGKEIFJPPEK_MMPNOMJPIJE_OFFSET))(this, a1, a2);
		}

		::System::Void LMLGIJLNNMA(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + OGKEIFJPPEK_LMLGIJLNNMA_OFFSET))(this, a1);
		}

		::System::Void MINODBHAAOB(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + OGKEIFJPPEK_MINODBHAAOB_OFFSET))(this, a1);
		}

		::System::Void MGFPAIGJCDF(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OGKEIFJPPEK_MGFPAIGJCDF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HMCJNJFJACO(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OGKEIFJPPEK_HMCJNJFJACO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JOGIJHPNCOJ(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OGKEIFJPPEK_JOGIJHPNCOJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PDFMCHGIPBG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OGKEIFJPPEK_PDFMCHGIPBG_OFFSET))(this, a1);
		}

	};
