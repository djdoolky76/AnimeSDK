#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Collision2DShapeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class ABFALGOPMPL;

#define ABFALGOPMPL_CTOR_OFFSET UNITYSDK_OFFSET(0xB0F0B40)
#define ABFALGOPMPL_DLCJDMAKOIK_OFFSET UNITYSDK_OFFSET(0xB0F0AC0)
#define ABFALGOPMPL_HMAONENFGHD_OFFSET UNITYSDK_OFFSET(0xB0F0AB0)
#define ABFALGOPMPL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB0F0AD0)

inline static constexpr unsigned int ABFALGOPMPL_TypeDefinitionIndex = 53696;

	class ABFALGOPMPL : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint JPJICLEPNOO; // 0x10
		::RPG::GameCore::FixPoint JFIFPLOBFGH; // 0x18
		::RPG::GameCore::FixPoint LLAFEKEGEPO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFALGOPMPL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::Collision2DShapeType HMAONENFGHD()
		{
			return ((::RPG::GameCore::Collision2DShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFALGOPMPL_HMAONENFGHD_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint DLCJDMAKOIK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFALGOPMPL_DLCJDMAKOIK_OFFSET))(this);
		}

		::ABFALGOPMPL* KPJGDHLENIP(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::ABFALGOPMPL*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ABFALGOPMPL_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

	};
