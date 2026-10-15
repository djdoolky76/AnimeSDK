#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ContentParticipation.h"
#include "unitysdk/RPG/Client/RegionBlockExecutionMode.h"
#include "unitysdk/RPG/Client/RegionContentLevel.h"
#include "unitysdk/RPG/Client/RegionVisibility.h"
#include "unitysdk/RPG/Client/VisibilityPriority.h"
#include "unitysdk/GLAJJDPBHLL.h"
namespace System { class String; }

#define DEBHBAOHHII_AACNHCLHLIK_OFFSET UNITYSDK_OFFSET(0xF5CC0)
#define DEBHBAOHHII_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xF5C70)
#define DEBHBAOHHII_CTOR_OFFSET UNITYSDK_OFFSET(0xF5C30)
#define DEBHBAOHHII_GET_CONTENTLEVEL_OFFSET UNITYSDK_OFFSET(0xE620)
#define DEBHBAOHHII_GET_CONTENTPARTICIPATION_OFFSET UNITYSDK_OFFSET(0x3260)
#define DEBHBAOHHII_GET_ISPRELOAD_OFFSET UNITYSDK_OFFSET(0xF5C60)
#define DEBHBAOHHII_GET_MODE_OFFSET UNITYSDK_OFFSET(0xACE0)
#define DEBHBAOHHII_GET_VISIBILITYPRIORITY_OFFSET UNITYSDK_OFFSET(0xEE420)
#define DEBHBAOHHII_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0xFDF0)

inline static constexpr unsigned int DEBHBAOHHII_TypeDefinitionIndex = 62157;

	struct alignas(4) DEBHBAOHHII
	{
		::RPG::Client::RegionContentLevel _ContentLevel_k__BackingField; // 0x10
		::RPG::Client::RegionVisibility _Visibility_k__BackingField; // 0x14
		::RPG::Client::RegionBlockExecutionMode _Mode_k__BackingField; // 0x18
		::System::Boolean _IsPreload_k__BackingField; // 0x1C
		::System::Byte _padding0[0x3];
		::RPG::Client::ContentParticipation _ContentParticipation_k__BackingField; // 0x20
		::RPG::Client::VisibilityPriority _VisibilityPriority_k__BackingField; // 0x24
		::System::Void _ctor(::RPG::Client::RegionContentLevel a1, ::RPG::Client::RegionVisibility a2, ::RPG::Client::RegionBlockExecutionMode a3, ::System::Boolean a4, ::RPG::Client::ContentParticipation a5, ::RPG::Client::VisibilityPriority a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RegionContentLevel, ::RPG::Client::RegionVisibility, ::RPG::Client::RegionBlockExecutionMode, ::System::Boolean, ::RPG::Client::ContentParticipation, ::RPG::Client::VisibilityPriority))((::PBYTE)hIl2Cpp + DEBHBAOHHII_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::RegionContentLevel get_ContentLevel()
		{
			return ((::RPG::Client::RegionContentLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBHBAOHHII_GET_CONTENTLEVEL_OFFSET))(this);
		}

		::RPG::Client::RegionVisibility get_Visibility()
		{
			return ((::RPG::Client::RegionVisibility(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBHBAOHHII_GET_VISIBILITY_OFFSET))(this);
		}

		::RPG::Client::RegionBlockExecutionMode get_Mode()
		{
			return ((::RPG::Client::RegionBlockExecutionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBHBAOHHII_GET_MODE_OFFSET))(this);
		}

		::System::Boolean get_IsPreload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBHBAOHHII_GET_ISPRELOAD_OFFSET))(this);
		}

		::RPG::Client::ContentParticipation get_ContentParticipation()
		{
			return ((::RPG::Client::ContentParticipation(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBHBAOHHII_GET_CONTENTPARTICIPATION_OFFSET))(this);
		}

		::RPG::Client::VisibilityPriority get_VisibilityPriority()
		{
			return ((::RPG::Client::VisibilityPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBHBAOHHII_GET_VISIBILITYPRIORITY_OFFSET))(this);
		}

		::GLAJJDPBHLL BGDKFHEBDFJ()
		{
			return ((::GLAJJDPBHLL(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBHBAOHHII_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Boolean AACNHCLHLIK(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DEBHBAOHHII_AACNHCLHLIK_OFFSET))(this, a1);
		}

	};
