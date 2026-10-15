#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
class GKMHPIPOKLE;
namespace RPG::Client { class AnimatorButton; }
namespace UnityEngine::Events { class UnityAction; }

#define HEPMPEGCODC_CTOR_OFFSET UNITYSDK_OFFSET(0x15C58220)
#define HEPMPEGCODC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C58640)
#define HEPMPEGCODC_JJJJGFJDKOJ_OFFSET UNITYSDK_OFFSET(0x15C582D0)

inline static constexpr unsigned int HEPMPEGCODC_TypeDefinitionIndex = 49903;

	class HEPMPEGCODC : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityAction* MBOEDFCNCJF; // 0x10
		::RPG::Client::AnimatorButton* AAFGIHCCPOP; // 0x18
		::CEEGMMCFCBG* MKKLHFCCCNF; // 0x20
		::GKMHPIPOKLE* AGKMDEHIECJ; // 0x28
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
