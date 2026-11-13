#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
class GKMHPIPOKLE;
namespace RPG::Client { class AnimatorButton; }
namespace UnityEngine::Events { class UnityAction; }

#define HEPMPEGCODC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A20EAB0)
#define HEPMPEGCODC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A20EED0)
#define HEPMPEGCODC_JJJJGFJDKOJ_OFFSET UNITYSDK_OFFSET(0x1A20EB60)

inline static constexpr unsigned int HEPMPEGCODC_TypeDefinitionIndex = 50951;

	class HEPMPEGCODC : public ::System::Object
	{
	public:
		::GKMHPIPOKLE* AGKMDEHIECJ; // 0x10
		::CEEGMMCFCBG* MKKLHFCCCNF; // 0x18
		::RPG::Client::AnimatorButton* AAFGIHCCPOP; // 0x20
		::UnityEngine::Events::UnityAction* MBOEDFCNCJF; // 0x28
		::System::Void _ctor(::RPG::Client::AnimatorButton* a1, ::CEEGMMCFCBG* a2, ::GKMHPIPOKLE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*, ::CEEGMMCFCBG*, ::GKMHPIPOKLE*))((::PBYTE)hIl2Cpp + HEPMPEGCODC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JJJJGFJDKOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPMPEGCODC_JJJJGFJDKOJ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPMPEGCODC_DISPOSE_OFFSET))(this);
		}

	};
