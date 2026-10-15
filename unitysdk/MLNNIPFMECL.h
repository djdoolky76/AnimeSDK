#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMBPBAHKLDB.h"
#include "unitysdk/RPG/Client/NotifyType.h"
namespace RPG::Client { class NotifyHandler; }
namespace System { class Object; }

#define MLNNIPFMECL_CTOR_OFFSET UNITYSDK_OFFSET(0xB9BB340)
#define MLNNIPFMECL_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xB9BB350)

inline static constexpr unsigned int MLNNIPFMECL_TypeDefinitionIndex = 73145;

	class MLNNIPFMECL : public ::GMBPBAHKLDB
	{
	public:
		::RPG::Client::NotifyHandler* GCHONPLAABC; // 0x18
		::System::Void _ctor(::RPG::Client::NotifyType a1, ::RPG::Client::NotifyHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + MLNNIPFMECL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void InternalInvoke(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLNNIPFMECL_INTERNALINVOKE_OFFSET))(this, a1);
		}

	};
