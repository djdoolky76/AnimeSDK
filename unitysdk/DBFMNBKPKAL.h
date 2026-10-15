#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GlobalDispatchData_ServerData; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }

#define DBFMNBKPKAL_CTOR_OFFSET UNITYSDK_OFFSET(0xDFE0D20)
#define DBFMNBKPKAL_DBIJFBJGGGN_OFFSET UNITYSDK_OFFSET(0xDFE0D30)

	class DBFMNBKPKAL : public ::System::Object
	{
	public:
		::RPG::Client::GlobalDispatchData_ServerData* APPIHABBCGK; // 0x10
		::System::Action* DPANHIICMLD; // 0x18
		::System::Single ACEBEKCCMEG; // 0x20
		::System::Void _ctor(::RPG::Client::GlobalDispatchData_ServerData* a1, ::System::Action* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + DBFMNBKPKAL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* DBIJFBJGGGN()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFMNBKPKAL_DBIJFBJGGGN_OFFSET))(this);
		}

	};
