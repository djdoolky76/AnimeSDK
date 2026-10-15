#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/CharacterMeetEventSentence.h"
#include "unitysdk/System/Object.h"
class OCFKLJHADGF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OCFKLJHADGF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBD5FD90)
#define OCFKLJHADGF_CTOR_OFFSET UNITYSDK_OFFSET(0xBD60220)
#define OCFKLJHADGF_JIDDIJBMOOD_OFFSET UNITYSDK_OFFSET(0xBD603F0)
#define OCFKLJHADGF_JKJPDCDIAEO_OFFSET UNITYSDK_OFFSET(0xBD60450)

	class OCFKLJHADGF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence>* KMJCDKAOOEC; // 0x10
		::System::Int32 KKODODLJADN; // 0x18
		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence>*))((::PBYTE)hIl2Cpp + OCFKLJHADGF_CTOR_OFFSET))(this, a1);
		}

		static ::OCFKLJHADGF* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::OCFKLJHADGF*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OCFKLJHADGF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean JIDDIJBMOOD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFKLJHADGF_JIDDIJBMOOD_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence JKJPDCDIAEO()
		{
			return ((::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFKLJHADGF_JKJPDCDIAEO_OFFSET))(this);
		}

	};
