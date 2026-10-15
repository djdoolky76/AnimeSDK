#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChatMessageData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { class KeyValuePair; }

#define AGJOIILGIHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCF3C2B0)
#define AGJOIILGIHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCF3C2F0)
#define AGJOIILGIHK___C__GETPLAYERINDEX_B__21_0_OFFSET UNITYSDK_OFFSET(0xCF3C4D0)
#define AGJOIILGIHK___C___REFRESHCHATMESSAGEDATALIST_B__1_0_OFFSET UNITYSDK_OFFSET(0xCF3C300)
#define AGJOIILGIHK___C___REFRESHCHATMESSAGEDATALIST_B__1_1_OFFSET UNITYSDK_OFFSET(0xCF3C340)

inline static constexpr unsigned int AGJOIILGIHK___c_TypeDefinitionIndex = 66410;

	class AGJOIILGIHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53D40);
		}

		static ::System::Predicate_1<::RPG::Client::ChatMessageData*>** StaticGet___9__1_1()
		{
			return (::System::Predicate_1<::RPG::Client::ChatMessageData*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53D48);
		}

		static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair*>** StaticGet___9__21_0()
		{
			return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53D50);
		}

		static ::System::Comparison_1<::RPG::Client::ChatMessageData*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChatMessageData*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53D58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGJOIILGIHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJOIILGIHK___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __RefreshChatMessageDataList_b__1_0(::RPG::Client::ChatMessageData* a1, ::RPG::Client::ChatMessageData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChatMessageData*, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + AGJOIILGIHK___C___REFRESHCHATMESSAGEDATALIST_B__1_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean __RefreshChatMessageDataList_b__1_1(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + AGJOIILGIHK___C___REFRESHCHATMESSAGEDATALIST_B__1_1_OFFSET))(this, a1);
		}

		::System::Int32 _GetPlayerIndex_b__21_0(::System::Collections::Generic::KeyValuePair* a1, ::System::Collections::Generic::KeyValuePair* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + AGJOIILGIHK___C__GETPLAYERINDEX_B__21_0_OFFSET))(this, a1, a2);
		}

	};
