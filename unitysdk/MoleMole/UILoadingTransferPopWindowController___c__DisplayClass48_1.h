#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace MoleMole { class MultipleVideoPlayerManager; }

#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1939DB10)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_1__INITVIDEOPLAYER_B__2_OFFSET UNITYSDK_OFFSET(0x1939DB20)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_1__INITVIDEOPLAYER_B__3_OFFSET UNITYSDK_OFFSET(0x1939DB50)

namespace MoleMole
{
	inline static constexpr unsigned int UILoadingTransferPopWindowController___c__DisplayClass48_1_TypeDefinitionIndex = 41525;

	template <typename T>
	class UILoadingTransferPopWindowController___c__DisplayClass48_1 : public ::System::Object
	{
	public:
		::MoleMole::MultipleVideoPlayerManager* mpm; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_1__CTOR_OFFSET))(this);
		}

		::System::Void _InitVideoPlayer_b__2(::DGDNKBFMHME* vp)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_1__INITVIDEOPLAYER_B__2_OFFSET))(this, vp);
		}

		::System::Void _InitVideoPlayer_b__3(::DGDNKBFMHME* vp)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_1__INITVIDEOPLAYER_B__3_OFFSET))(this, vp);
		}
	};
}
