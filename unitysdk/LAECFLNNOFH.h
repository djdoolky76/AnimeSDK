#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDLFNBJAKLJ;
namespace Entitas { class IContext; }

#define LAECFLNNOFH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C90C700)
#define LAECFLNNOFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90C630)
#define LAECFLNNOFH_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1C90C750)

	class LAECFLNNOFH : public ::System::Object
	{
	public:
		::KDLFNBJAKLJ* HAPBKJILCFA; // 0x10
		::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAECFLNNOFH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAECFLNNOFH_CLEAR_OFFSET))(this);
		}

		::Il2CppArray<::Entitas::IContext*>* get_allContexts()
		{
			return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAECFLNNOFH_GET_ALLCONTEXTS_OFFSET))(this);
		}

	};
