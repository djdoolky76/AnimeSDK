#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KJEECKFGAPL;

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS145_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1836F750)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS145_1__PLAYMULTISPEAKERSTORYNODE_B__6_OFFSET UNITYSDK_OFFSET(0x1836F760)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS145_1__PLAYMULTISPEAKERSTORYNODE_B__7_OFFSET UNITYSDK_OFFSET(0x1836F840)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS145_1__PLAYMULTISPEAKERSTORYNODE_B__8_OFFSET UNITYSDK_OFFSET(0x1836F950)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass145_1_TypeDefinitionIndex = 44781;

	template <typename T>
	class UIGalgamePageController___c__DisplayClass145_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::KJEECKFGAPL* voicePlayable; // 0x18
		::System::Int64 stopTimeStampMs; // 0x20
		::System::Int64 startTimeStampMs; // 0x28
		::System::Int32 voiceLengthMs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS145_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayMultiSpeakerStoryNode_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS145_1__PLAYMULTISPEAKERSTORYNODE_B__6_OFFSET))(this);
		}

		::System::Void _PlayMultiSpeakerStoryNode_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS145_1__PLAYMULTISPEAKERSTORYNODE_B__7_OFFSET))(this);
		}

		::System::Void _PlayMultiSpeakerStoryNode_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS145_1__PLAYMULTISPEAKERSTORYNODE_B__8_OFFSET))(this);
		}
	};
}
