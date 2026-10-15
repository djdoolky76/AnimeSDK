#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMBPBAHKLDB.h"
#include "unitysdk/RPG/Client/NotifyType.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define INIONJGMHMA_CTOR_OFFSET UNITYSDK_OFFSET(0x164E19A0)
#define INIONJGMHMA_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0x164E1A20)

inline static constexpr unsigned int INIONJGMHMA_TypeDefinitionIndex = 73145;

	class INIONJGMHMA : public ::GMBPBAHKLDB
	{
	public:
		::System::Action* KFCIMLKKMEE; // 0x18
		::System::Void _ctor(::System::Object* a1, ::System::Reflection::MethodInfo* a2, ::RPG::Client::NotifyType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + INIONJGMHMA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InternalInvoke(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INIONJGMHMA_INTERNALINVOKE_OFFSET))(this, a1);
		}

	};
