#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLCCFFNAMLJ;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_CGBBOCEHFPA_OFFSET UNITYSDK_OFFSET(0xD91E140)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xD927AF0)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_ECKJAKPNDDE_OFFSET UNITYSDK_OFFSET(0xD927860)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_IDFFFGNPGAL_OFFSET UNITYSDK_OFFSET(0xD91CE90)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_IIFINLJFDEB_OFFSET UNITYSDK_OFFSET(0xD91D5E0)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_OFDGCLLJNOG_OFFSET UNITYSDK_OFFSET(0xD9278A0)
#define RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_PHOLFNAPFOA_OFFSET UNITYSDK_OFFSET(0xD91D410)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_SpectrumEffectElementVisualBase_TypeDefinitionIndex = 70829;

	class MusicVisualization_SpectrumEffectElementVisualBase : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _ChildGOList0; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _ChildGOList1; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_CTOR_OFFSET))(this);
		}

		::System::Void CGBBOCEHFPA(::FLCCFFNAMLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLCCFFNAMLJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_CGBBOCEHFPA_OFFSET))(this, a1);
		}

		::System::Void IDFFFGNPGAL(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_IDFFFGNPGAL_OFFSET))(this, a1, a2);
		}

		::System::Void ECKJAKPNDDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_ECKJAKPNDDE_OFFSET))(this);
		}

		::System::Void PHOLFNAPFOA(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_PHOLFNAPFOA_OFFSET))(this, a1, a2);
		}

		::System::Void IIFINLJFDEB(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_IIFINLJFDEB_OFFSET))(this, a1, a2);
		}

		::System::Void OFDGCLLJNOG(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTVISUALBASE_OFDGCLLJNOG_OFFSET))(this, a1, a2);
		}

	};
}
