#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class MultipleVideoPlayerManager_VideoPlayerHelperRuntimeInfo; }

#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13F09360)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS6_0__PREPARE_B__0_OFFSET UNITYSDK_OFFSET(0x13F09370)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS6_0__PREPARE_B__1_OFFSET UNITYSDK_OFFSET(0x13F093A0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS6_0__PREPARE_B__2_OFFSET UNITYSDK_OFFSET(0x13F09400)

namespace MoleMole
{
	inline static constexpr unsigned int MultipleVideoPlayerManager___c__DisplayClass6_0_TypeDefinitionIndex = 44949;

	class MultipleVideoPlayerManager___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::MultipleVideoPlayerManager_VideoPlayerHelperRuntimeInfo* videoPlayerBindInfo; // 0x10
		::MoleMole::MultipleVideoPlayerManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _Prepare_b__0(::DGDNKBFMHME* helper)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS6_0__PREPARE_B__0_OFFSET))(this, helper);
		}

		::System::Void _Prepare_b__1(::DGDNKBFMHME* helper)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS6_0__PREPARE_B__1_OFFSET))(this, helper);
		}

		::System::Void _Prepare_b__2(::DGDNKBFMHME* helper)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER___C__DISPLAYCLASS6_0__PREPARE_B__2_OFFSET))(this, helper);
		}
	};
}
