#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class ACNDKIFJLJC;

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS69_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1E165D50)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS69_0__HASSPOTLIGHTBYUID_B__0_OFFSET UNITYSDK_OFFSET(0x1E16ABB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightManager___c__DisplayClass69_0_TypeDefinitionIndex = 66974;

	class GridFightSpotLightManager___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS69_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _HasSpotLightByUID_b__0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::ACNDKIFJLJC*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::ACNDKIFJLJC*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTMANAGER___C__DISPLAYCLASS69_0__HASSPOTLIGHTBYUID_B__0_OFFSET))(this, a1);
		}

	};
}
