#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/PropertyChangedEventArgs.h"
namespace System { class String; }

#define HFIHEEMCCEO_CTOR_OFFSET UNITYSDK_OFFSET(0x15C7ADA0)
#define HFIHEEMCCEO_GET_ROLEUID_OFFSET UNITYSDK_OFFSET(0x15C7ADE0)

	class HFIHEEMCCEO : public ::System::ComponentModel::PropertyChangedEventArgs
	{
	public:
		::System::UInt32 _RoleUID_k__BackingField; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + HFIHEEMCCEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RoleUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIHEEMCCEO_GET_ROLEUID_OFFSET))(this);
		}

	};
