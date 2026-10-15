#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/CharacterMeetEventSentence.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define OCFKLJHADGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD59330)
#define OCFKLJHADGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBD59370)
#define OCFKLJHADGF___C___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0xBD59380)

inline static constexpr unsigned int OCFKLJHADGF___c_TypeDefinitionIndex = 75162;

	class OCFKLJHADGF___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BC70);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BC78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCFKLJHADGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFKLJHADGF___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__3_0(::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence a1, ::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence, ::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence))((::PBYTE)hIl2Cpp + OCFKLJHADGF___C___CTOR_B__3_0_OFFSET))(this, a1, a2);
		}

	};
