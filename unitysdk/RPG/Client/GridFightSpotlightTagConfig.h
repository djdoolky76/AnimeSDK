#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class GridFightSpotLightTagConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTAGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDC81E50)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTAGCONFIG_GET_COLORHEX_OFFSET UNITYSDK_OFFSET(0xDC900D0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTAGCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0xDC8FFE0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTTAGCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDC90030)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotlightTagConfig_TypeDefinitionIndex = 66961;

	class GridFightSpotlightTagConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightSpotLightTagConfigRow* _Row; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTAGCONFIG_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTAGCONFIG_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTAGCONFIG_GET_NAME_OFFSET))(this);
		}

		::System::String* get_ColorHex()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTTAGCONFIG_GET_COLORHEX_OFFSET))(this);
		}

	};
}
