#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define OBKPOLLKKEM_ADD_ACTIONS_OFFSET UNITYSDK_OFFSET(0x1D94C990)
#define OBKPOLLKKEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D94C880)
#define OBKPOLLKKEM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1D94C940)
#define OBKPOLLKKEM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1D94C8A0)
#define OBKPOLLKKEM_REMOVE_ACTIONS_OFFSET UNITYSDK_OFFSET(0x1D94C9F0)

inline static constexpr unsigned int OBKPOLLKKEM_TypeDefinitionIndex = 37891;

	class OBKPOLLKKEM : public ::System::Object
	{
	public:
		::System::Action* Actions; // 0x10
		::System::Single PGMIOKKLHIE; // 0x18
		::System::Single CDOLCLMGEBO; // 0x1C
		::System::Single HBANLBGKNKP; // 0x20
		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OBKPOLLKKEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBKPOLLKKEM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKPOLLKKEM_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void add_Actions(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OBKPOLLKKEM_ADD_ACTIONS_OFFSET))(this, a1);
		}

		::System::Void remove_Actions(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OBKPOLLKKEM_REMOVE_ACTIONS_OFFSET))(this, a1);
		}

	};
