#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRogueTournCollectionBoothPreviewUpdate; }
namespace System { class Object; }

#define ADAMIEPFBJK_CTOR_OFFSET UNITYSDK_OFFSET(0xB133A60)
#define ADAMIEPFBJK_FBIOBIICLHG_OFFSET UNITYSDK_OFFSET(0xB133D10)
#define ADAMIEPFBJK__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB133BD0)
#define ADAMIEPFBJK__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB133C70)

inline static constexpr unsigned int ADAMIEPFBJK_TypeDefinitionIndex = 58922;

	class ADAMIEPFBJK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRogueTournCollectionBoothPreviewUpdate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRogueTournCollectionBoothPreviewUpdate*))((::PBYTE)hIl2Cpp + ADAMIEPFBJK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAMIEPFBJK__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAMIEPFBJK__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void FBIOBIICLHG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ADAMIEPFBJK_FBIOBIICLHG_OFFSET))(this, a1);
		}

	};
