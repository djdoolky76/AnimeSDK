#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleModeType.h"
#include "unitysdk/System/Object.h"
class JHIDGDHOJEF;
namespace System { class Object; }
namespace System { class Type; }

#define JANDIGIAGOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1654DF30)

inline static constexpr unsigned int JANDIGIAGOJ_TypeDefinitionIndex = 61038;

	class JANDIGIAGOJ : public ::System::Object
	{
	public:
		::System::Object* ACDGBAICMPE; // 0x10
		::JHIDGDHOJEF* LMCAEIHLKHB; // 0x18
		::System::Type* DIJNEEGMAMN; // 0x20
		::System::Object* KHAIOMLFBCM; // 0x28
		::RPG::GameCore::BattleModeType OLOIGGPNHBI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANDIGIAGOJ_CTOR_OFFSET))(this);
		}

	};
