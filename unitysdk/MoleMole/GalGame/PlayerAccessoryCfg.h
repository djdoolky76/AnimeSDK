#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_PLAYERACCESSORYCFG__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE4AD0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int PlayerAccessoryCfg_TypeDefinitionIndex = 67544;

	class PlayerAccessoryCfg : public ::System::Object
	{
	public:
		::System::Int32 NpcTag; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* GroupMember; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* AccessoryList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYERACCESSORYCFG__CTOR_OFFSET))(this);
		}
	};
}
