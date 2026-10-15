#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define GKCNCLIOFDA_MJBLPCGHLOD_CTOR_OFFSET UNITYSDK_OFFSET(0x15A8E960)
#define GKCNCLIOFDA_MJBLPCGHLOD_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x15A91730)
#define GKCNCLIOFDA_MJBLPCGHLOD_GET_PARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x15A91740)

	class GKCNCLIOFDA_MJBLPCGHLOD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _Members_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _Participants_k__BackingField; // 0x18
		::System::Void _ctor(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_MJBLPCGHLOD_CTOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* get_Members()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_MJBLPCGHLOD_GET_MEMBERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_Participants()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_MJBLPCGHLOD_GET_PARTICIPANTS_OFFSET))(this);
		}

	};
