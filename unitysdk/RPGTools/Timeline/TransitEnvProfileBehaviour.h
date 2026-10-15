#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xE942E60)
#define RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR_CNEOAIEPPEO_OFFSET UNITYSDK_OFFSET(0xE942EB0)
#define RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE943560)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TransitEnvProfileBehaviour_TypeDefinitionIndex = 48413;

	class TransitEnvProfileBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::System::String* Path; // 0x20
		::System::Single Duration; // 0x28
		::System::Boolean UseStoryPriority; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void CNEOAIEPPEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSITENVPROFILEBEHAVIOUR_CNEOAIEPPEO_OFFSET))(this);
		}

	};
}
