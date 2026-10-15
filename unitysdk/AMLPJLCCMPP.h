#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Collision2DShapeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class AMLPJLCCMPP;

#define AMLPJLCCMPP_CTOR_OFFSET UNITYSDK_OFFSET(0x15585240)
#define AMLPJLCCMPP_DLCJDMAKOIK_OFFSET UNITYSDK_OFFSET(0x155851E0)
#define AMLPJLCCMPP_HMAONENFGHD_OFFSET UNITYSDK_OFFSET(0x155851D0)
#define AMLPJLCCMPP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x155851F0)

inline static constexpr unsigned int AMLPJLCCMPP_TypeDefinitionIndex = 53694;

	class AMLPJLCCMPP : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint IDKONBFPBLH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLPJLCCMPP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::Collision2DShapeType HMAONENFGHD()
		{
			return ((::RPG::GameCore::Collision2DShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLPJLCCMPP_HMAONENFGHD_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint DLCJDMAKOIK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLPJLCCMPP_DLCJDMAKOIK_OFFSET))(this);
		}

		::AMLPJLCCMPP* KPJGDHLENIP(::RPG::GameCore::FixPoint a1)
		{
			return ((::AMLPJLCCMPP*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AMLPJLCCMPP_KPJGDHLENIP_OFFSET))(this, a1);
		}

	};
