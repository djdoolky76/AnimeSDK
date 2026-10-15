#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleModeType.h"
#include "unitysdk/System/Object.h"
class JHIDGDHOJEF;
namespace System { class Object; }
namespace System { class Type; }

#define JANDIGIAGOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1655BF30)

	class JANDIGIAGOJ : public ::System::Object
	{
	public:
		::System::Type* DIJNEEGMAMN; // 0x10
		::System::Object* KHAIOMLFBCM; // 0x18
		::System::Object* ACDGBAICMPE; // 0x20
		::JHIDGDHOJEF* LMCAEIHLKHB; // 0x28
		::RPG::GameCore::BattleModeType OLOIGGPNHBI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANDIGIAGOJ_CTOR_OFFSET))(this);
		}

	};
