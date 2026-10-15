#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_SpectrumEffectElementVisualBase.h"
class FLCCFFNAMLJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY_CTOR_OFFSET UNITYSDK_OFFSET(0xBA50590)
#define MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xBA4FF40)
#define MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY_FIOEFKBHKJF_OFFSET UNITYSDK_OFFSET(0xBA50350)
#define MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY_KFDMIOANNDO_OFFSET UNITYSDK_OFFSET(0xBA4FDA0)
#define MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY_NHLHOGDFBHD_OFFSET UNITYSDK_OFFSET(0xBA4FFD0)

inline static constexpr unsigned int MusicVisualization_SpectrumEffectElementMatArray_TypeDefinitionIndex = 47473;

	class MusicVisualization_SpectrumEffectElementMatArray : public ::RPG::Client::MusicVisualization_SpectrumEffectElementVisualBase
	{
	public:
		::System::String* SpectrumDataPropertyName; // 0x20
		::System::String* SpectrumDataLengthPropertyName; // 0x28
		::System::Int32 SpectrumDataPropertyID; // 0x30
		::System::Int32 SpectrumDataLengthPropertyID; // 0x34
		::System::Boolean _UseFallSmooth; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single _FallSpeed; // 0x3C
		::System::Single _FallRetain; // 0x40
		::System::Byte _padding1[0x4];
		::UnityEngine::MaterialPropertyBlock* _MatBlock; // 0x48
		::Il2CppArray<::System::Single>* _DisplaySpectrumBuffer; // 0x50
		::System::Boolean _IsInit; // 0x58
		// static const ::System::Object ValueEpsilon; // 0x0
		// static const ::System::Object DefaultDeltaTime; // 0x0
		// static const ::System::Object MaxDeltaTime; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY_CTOR_OFFSET))(this);
		}

		::System::Void KFDMIOANNDO(::FLCCFFNAMLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLCCFFNAMLJ*))((::PBYTE)hIl2Cpp + MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY_KFDMIOANNDO_OFFSET))(this, a1);
		}

		::System::Void FIOEFKBHKJF(::Il2CppArray<::System::Single>* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY_FIOEFKBHKJF_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Single>* NHLHOGDFBHD(::Il2CppArray<::System::Single>* a1)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY_NHLHOGDFBHD_OFFSET))(this, a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MUSICVISUALIZATION_SPECTRUMEFFECTELEMENTMATARRAY_DIOEAJEHHND_OFFSET))(this);
		}

	};
