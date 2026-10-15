#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPGTools::Timeline { class ArchiveAsset; }
namespace UnityEngine { class Object; }

#define RPGTOOLS_TIMELINE_ARCHIVEASSET_ABNMKAPKMGF_OFFSET UNITYSDK_OFFSET(0xE8B09E0)
#define RPGTOOLS_TIMELINE_ARCHIVEASSET_CTOR_OFFSET UNITYSDK_OFFSET(0xE8B0A60)
#define RPGTOOLS_TIMELINE_ARCHIVEASSET_GET_BASETARGET_OFFSET UNITYSDK_OFFSET(0xE8B09C0)
#define RPGTOOLS_TIMELINE_ARCHIVEASSET_SET_BASETARGET_OFFSET UNITYSDK_OFFSET(0xE8B09D0)

namespace RPGTools::Timeline
{
	class ArchiveAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Object* _BaseTarget_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVEASSET_CTOR_OFFSET))(this);
		}

		::UnityEngine::Object* get_BaseTarget()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVEASSET_GET_BASETARGET_OFFSET))(this);
		}

		::System::Void set_BaseTarget(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVEASSET_SET_BASETARGET_OFFSET))(this, a1);
		}

		::System::Boolean ABNMKAPKMGF(::RPGTools::Timeline::ArchiveAsset* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ARCHIVEASSET_ABNMKAPKMGF_OFFSET))(this, a1);
		}

	};
}
