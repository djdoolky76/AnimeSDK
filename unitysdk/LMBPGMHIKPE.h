#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
namespace System { class Object; }

#define LMBPGMHIKPE_CTOR_OFFSET UNITYSDK_OFFSET(0xE590)
#define LMBPGMHIKPE_GET_EVENTOBJECT_OFFSET UNITYSDK_OFFSET(0x1D40)
#define LMBPGMHIKPE_GET_NOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xE600)

inline static constexpr unsigned int LMBPGMHIKPE_TypeDefinitionIndex = 66769;

	struct alignas(8) LMBPGMHIKPE
	{
		::RPG::Client::NotifyType _NotifyType_k__BackingField; // 0x10
		::System::Byte _padding0[0x4];
		::System::Object* _EventObject_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::NotifyType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + LMBPGMHIKPE_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::NotifyType get_NotifyType()
		{
			return ((::RPG::Client::NotifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + LMBPGMHIKPE_GET_NOTIFYTYPE_OFFSET))(this);
		}

		::System::Object* get_EventObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMBPGMHIKPE_GET_EVENTOBJECT_OFFSET))(this);
		}

	};
