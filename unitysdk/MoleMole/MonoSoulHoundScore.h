#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class HNLACBJDCGI;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_MONOSOULHOUNDSCORE_HCBIHBHMBFI_OFFSET UNITYSDK_OFFSET(0x14B03B60)
#define MOLEMOLE_MONOSOULHOUNDSCORE_PAUSE_OFFSET UNITYSDK_OFFSET(0x14B03D30)
#define MOLEMOLE_MONOSOULHOUNDSCORE_SHOWSCORENUMBER_OFFSET UNITYSDK_OFFSET(0x14B037A0)
#define MOLEMOLE_MONOSOULHOUNDSCORE_UPDATE_OFFSET UNITYSDK_OFFSET(0x14B03EE0)
#define MOLEMOLE_MONOSOULHOUNDSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x14B03F80)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSoulHoundScore_TypeDefinitionIndex = 76260;

	class MonoSoulHoundScore : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* HDAHJKPDKNL; // 0x0
		// static const ::System::String* KBMPLDNADEB; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* scoreImgList; // 0x18
		::UnityEngine::RectTransform* selfTran; // 0x20
		::UnityEngine::Animation* anim; // 0x28
		::System::String* numberIconFloderPath; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* JEDBIJHOPBF; // 0x38
		::System::Single FNIOFNFDEEL; // 0x40
		::System::Byte _padding0[0x4];
		::System::Action* EJGDHCIBCJH; // 0x48
		::System::Single PMNLNNGEIFM; // 0x50
		::System::Boolean FOFIDPHMGBE; // 0x54
		::System::Boolean FIPHFGHNNBE; // 0x55

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOULHOUNDSCORE__CTOR_OFFSET))(this);
		}

		::System::Void ShowScoreNumber(::System::Int32 CKELOFDFEEM, ::HNLACBJDCGI* BIKOEALOBJL, ::System::Action* CLBAEECMNJL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HNLACBJDCGI*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOULHOUNDSCORE_SHOWSCORENUMBER_OFFSET))(this, CKELOFDFEEM, BIKOEALOBJL, CLBAEECMNJL);
		}

		::System::Void Pause(::System::Boolean FOFIDPHMGBE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOULHOUNDSCORE_PAUSE_OFFSET))(this, FOFIDPHMGBE);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOULHOUNDSCORE_UPDATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* HCBIHBHMBFI(::System::Int32 CKELOFDFEEM)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSOULHOUNDSCORE_HCBIHBHMBFI_OFFSET))(this, CKELOFDFEEM);
		}
	};
}
