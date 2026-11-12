#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRogueTournCollectionBoothPreviewUpdate; }
namespace System { class Object; }

#define ADAMIEPFBJK_CTOR_OFFSET UNITYSDK_OFFSET(0xB79A8C0)
#define ADAMIEPFBJK_FBIOBIICLHG_OFFSET UNITYSDK_OFFSET(0xB79AB70)
#define ADAMIEPFBJK__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB79AA30)
#define ADAMIEPFBJK__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB79AAD0)

inline static constexpr unsigned int ADAMIEPFBJK_TypeDefinitionIndex = 60195;

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
