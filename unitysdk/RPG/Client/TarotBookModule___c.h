#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TarotBookCharacter; }
namespace RPG::Client { class TarotBookInteraction; }
namespace RPG::Client { class TarotBookReadReward; }
namespace RPG::Client { class TarotBookStory; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_CLIENT_TAROTBOOKMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE1BDE50)
#define RPG_CLIENT_TAROTBOOKMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE1BDE80)
#define RPG_CLIENT_TAROTBOOKMODULE___C__CHECKCANTAKEREADREWARD_B__92_0_OFFSET UNITYSDK_OFFSET(0xE1BDF70)
#define RPG_CLIENT_TAROTBOOKMODULE___C__GET_HASNEWSTORY_B__26_0_OFFSET UNITYSDK_OFFSET(0xE1BDE90)
#define RPG_CLIENT_TAROTBOOKMODULE___C__GET_UNLOCKEDCHARACTERCOUNT_B__56_0_OFFSET UNITYSDK_OFFSET(0xE1BDF10)
#define RPG_CLIENT_TAROTBOOKMODULE___C___INITINTERACTIONS_B__168_0_OFFSET UNITYSDK_OFFSET(0xE1BE030)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookModule___c_TypeDefinitionIndex = 68068;

	class TarotBookModule___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::TarotBookReadReward*>** StaticGet___9__92_0()
		{
			return (::System::Predicate_1<::RPG::Client::TarotBookReadReward*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE410);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE418);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE420);
		}

		static ::System::Comparison_1<::RPG::Client::TarotBookInteraction*>** StaticGet___9__168_0()
		{
			return (::System::Comparison_1<::RPG::Client::TarotBookInteraction*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE428);
		}

		static ::System::Func_2<::RPG::Client::TarotBookCharacter*, ::System::Boolean>** StaticGet___9__56_0()
		{
			return (::System::Func_2<::RPG::Client::TarotBookCharacter*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_HasNewStory_b__26_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE___C__GET_HASNEWSTORY_B__26_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_UnlockedCharacterCount_b__56_0(::RPG::Client::TarotBookCharacter* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookCharacter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE___C__GET_UNLOCKEDCHARACTERCOUNT_B__56_0_OFFSET))(this, a1);
		}

		::System::Boolean _CheckCanTakeReadReward_b__92_0(::RPG::Client::TarotBookReadReward* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookReadReward*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE___C__CHECKCANTAKEREADREWARD_B__92_0_OFFSET))(this, a1);
		}

		::System::Int32 __InitInteractions_b__168_0(::RPG::Client::TarotBookInteraction* a1, ::RPG::Client::TarotBookInteraction* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookInteraction*, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE___C___INITINTERACTIONS_B__168_0_OFFSET))(this, a1, a2);
		}

	};
}
