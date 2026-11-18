#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GABKMFHDIKM.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGAUDIOTRACK_MEMBERRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B452000)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigAudioTrack_MemberRule_TypeDefinitionIndex = 79300;

	class ConfigAudioTrack_MemberRule : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Int32 priority; // 0x18
		::GABKMFHDIKM onFull; // 0x1C
		::System::Boolean uninterruptible; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGAUDIOTRACK_MEMBERRULE__CTOR_OFFSET))(this);
		}
	};
}
