#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChatMessageData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define AGJOIILGIHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x18DE5CC0)
#define AGJOIILGIHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x18DE5D00)
#define AGJOIILGIHK___C__GETPLAYERINDEX_B__21_0_OFFSET UNITYSDK_OFFSET(0x18DE5EE0)
#define AGJOIILGIHK___C___REFRESHCHATMESSAGEDATALIST_B__1_0_OFFSET UNITYSDK_OFFSET(0x18DE5D10)
#define AGJOIILGIHK___C___REFRESHCHATMESSAGEDATALIST_B__1_1_OFFSET UNITYSDK_OFFSET(0x18DE5D50)

inline static constexpr unsigned int AGJOIILGIHK___c_TypeDefinitionIndex = 68346;

	class AGJOIILGIHK___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ChatMessageData*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChatMessageData*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50510);
		}

		static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64>>** StaticGet___9__21_0()
		{
			return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50518);
		}

		static ::System::Predicate_1<::RPG::Client::ChatMessageData*>** StaticGet___9__1_1()
		{
			return (::System::Predicate_1<::RPG::Client::ChatMessageData*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50520);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50528);
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

		::System::Int32 _GetPlayerIndex_b__21_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64> a1, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64>, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int64>))((::PBYTE)hIl2Cpp + AGJOIILGIHK___C__GETPLAYERINDEX_B__21_0_OFFSET))(this, a1, a2);
		}

	};
