#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class CIEEHMBGEIF;
class OFAKEFLLHNP;
namespace RPG::Client { class GridFightElationLaughPointProperty; }

#define JEMKFHEEFND_CTOR_OFFSET UNITYSDK_OFFSET(0x13085500)
#define JEMKFHEEFND_PAMKOLICNOL_OFFSET UNITYSDK_OFFSET(0x130855D0)

inline static constexpr unsigned int JEMKFHEEFND_TypeDefinitionIndex = 67190;

	class JEMKFHEEFND : public ::System::Object
	{
	public:
		::CIEEHMBGEIF* IAFNNMFIMOI; // 0x10
		::RPG::Client::GridFightElationLaughPointProperty* AGFAPPGGKMA; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightElationLaughPointProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightElationLaughPointProperty*))((::PBYTE)hIl2Cpp + JEMKFHEEFND_CTOR_OFFSET))(this, a1);
		}

		::OFAKEFLLHNP* PAMKOLICNOL(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + JEMKFHEEFND_PAMKOLICNOL_OFFSET))(this, a1);
		}

	};
