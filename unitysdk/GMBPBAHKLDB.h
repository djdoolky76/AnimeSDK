#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define GMBPBAHKLDB_CTOR_OFFSET UNITYSDK_OFFSET(0x15ACA3D0)
#define GMBPBAHKLDB_GET_MUTED_OFFSET UNITYSDK_OFFSET(0x15ACA3E0)
#define GMBPBAHKLDB_GET_NOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x15ACA400)
#define GMBPBAHKLDB_INVOKE_OFFSET UNITYSDK_OFFSET(0x15ACA410)
#define GMBPBAHKLDB_SET_MUTED_OFFSET UNITYSDK_OFFSET(0x15ACA3F0)

inline static constexpr unsigned int GMBPBAHKLDB_TypeDefinitionIndex = 73142;

	class GMBPBAHKLDB : public ::System::Object
	{
	public:
		::System::Boolean _Muted_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::Client::NotifyType _NotifyType_k__BackingField; // 0x14
		::System::Void _ctor(::RPG::Client::NotifyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + GMBPBAHKLDB_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_Muted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBPBAHKLDB_GET_MUTED_OFFSET))(this);
		}

		::System::Void set_Muted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GMBPBAHKLDB_SET_MUTED_OFFSET))(this, a1);
		}

		::RPG::Client::NotifyType get_NotifyType()
		{
			return ((::RPG::Client::NotifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBPBAHKLDB_GET_NOTIFYTYPE_OFFSET))(this);
		}

		::System::Void Invoke(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMBPBAHKLDB_INVOKE_OFFSET))(this, a1);
		}

	};
