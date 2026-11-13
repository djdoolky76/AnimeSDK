#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class GridFightSpecialGoodsConfigRow; }

#define RPG_CLIENT_GRIDFIGHTSPECIALGOODCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15D850)
#define RPG_CLIENT_GRIDFIGHTSPECIALGOODCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x1E15D8E0)
#define RPG_CLIENT_GRIDFIGHTSPECIALGOODCONFIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E15D890)
#define RPG_CLIENT_GRIDFIGHTSPECIALGOODCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E15D930)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpecialGoodConfig_TypeDefinitionIndex = 66947;

	class GridFightSpecialGoodConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightSpecialGoodsConfigRow* _ConfigRow; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPECIALGOODCONFIG_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPECIALGOODCONFIG_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPECIALGOODCONFIG_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPECIALGOODCONFIG_GET_NAME_OFFSET))(this);
		}

	};
}
