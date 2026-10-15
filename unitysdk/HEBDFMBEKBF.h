#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_SpectrumEffectElementVisualBase.h"
class FLCCFFNAMLJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define HEBDFMBEKBF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C436B0)
#define HEBDFMBEKBF_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x15C43440)
#define HEBDFMBEKBF_FIOEFKBHKJF_OFFSET UNITYSDK_OFFSET(0x15C434C0)
#define HEBDFMBEKBF_KFDMIOANNDO_OFFSET UNITYSDK_OFFSET(0x15C43300)

	class HEBDFMBEKBF : public ::RPG::Client::MusicVisualization_SpectrumEffectElementVisualBase
	{
	public:
		::UnityEngine::MaterialPropertyBlock* DNCLJJLAFKA; // 0x20
		::System::String* HMELFPDPCFC; // 0x28
		::System::Boolean IDBEBIDMHME; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 ONMOHCJHJPN; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBDFMBEKBF_CTOR_OFFSET))(this);
		}

		::System::Void KFDMIOANNDO(::FLCCFFNAMLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLCCFFNAMLJ*))((::PBYTE)hIl2Cpp + HEBDFMBEKBF_KFDMIOANNDO_OFFSET))(this, a1);
		}

		::System::Void FIOEFKBHKJF(::FLCCFFNAMLJ* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FLCCFFNAMLJ*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HEBDFMBEKBF_FIOEFKBHKJF_OFFSET))(this, a1, a2);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBDFMBEKBF_DIOEAJEHHND_OFFSET))(this);
		}

	};
