#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEMIDPFEJFL;
namespace RPG::Client { class MonopolyOptionalEventDisplayData; }
namespace RPG::Client { class MonopolyOptionalGroupEventDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYOPTIONALGROUPEVENTDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD8A2570)
#define RPG_CLIENT_MONOPOLYOPTIONALGROUPEVENTDISPLAYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD8A2820)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyOptionalGroupEventDisplayData_TypeDefinitionIndex = 66286;

	class MonopolyOptionalGroupEventDisplayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyOptionalEventDisplayData*>* OptionalEventList; // 0x10
		::System::UInt32 CurEventIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYOPTIONALGROUPEVENTDISPLAYDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolyOptionalGroupEventDisplayData* Create(::System::UInt32 a1, ::System::Collections::Generic::List_1<::NEMIDPFEJFL*>* a2)
		{
			return ((::RPG::Client::MonopolyOptionalGroupEventDisplayData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::NEMIDPFEJFL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYOPTIONALGROUPEVENTDISPLAYDATA_CREATE_OFFSET))(a1, a2);
		}

	};
}
