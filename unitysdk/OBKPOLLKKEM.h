#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define OBKPOLLKKEM_ADD_ACTIONS_OFFSET UNITYSDK_OFFSET(0x1C79CF10)
#define OBKPOLLKKEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C79CE00)
#define OBKPOLLKKEM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C79CEC0)
#define OBKPOLLKKEM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C79CE20)
#define OBKPOLLKKEM_REMOVE_ACTIONS_OFFSET UNITYSDK_OFFSET(0x1C79CF70)

inline static constexpr unsigned int OBKPOLLKKEM_TypeDefinitionIndex = 36963;

	class OBKPOLLKKEM : public ::System::Object
	{
	public:
		::System::Action* Actions; // 0x10
		::System::Single HBANLBGKNKP; // 0x18
		::System::Single PGMIOKKLHIE; // 0x1C
		::System::Single CDOLCLMGEBO; // 0x20
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
