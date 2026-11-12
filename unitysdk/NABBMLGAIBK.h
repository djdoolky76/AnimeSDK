#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define NABBMLGAIBK_CTOR_OFFSET UNITYSDK_OFFSET(0x232B0)
#define NABBMLGAIBK_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x238A0)
#define NABBMLGAIBK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x23830)
#define NABBMLGAIBK_EQUALS_OFFSET UNITYSDK_OFFSET(0x23570)
#define NABBMLGAIBK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x23560)
#define NABBMLGAIBK_GET_ACTUALPATIENCE_OFFSET UNITYSDK_OFFSET(0x1C80)
#define NABBMLGAIBK_GET_ANGRYMOTIONID_OFFSET UNITYSDK_OFFSET(0x23400)
#define NABBMLGAIBK_GET_APPEARLEVELIDLIST_OFFSET UNITYSDK_OFFSET(0x23510)
#define NABBMLGAIBK_GET_BEHAVIORCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xAD00)
#define NABBMLGAIBK_GET_CALMMOTIONID_OFFSET UNITYSDK_OFFSET(0xAD20)
#define NABBMLGAIBK_GET_COINBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0x234B0)
#define NABBMLGAIBK_GET_CONFIGENTITYPATH_OFFSET UNITYSDK_OFFSET(0x94D0)
#define NABBMLGAIBK_GET_CUSTOMERID_OFFSET UNITYSDK_OFFSET(0xE600)
#define NABBMLGAIBK_GET_EMOJIBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0x23420)
#define NABBMLGAIBK_GET_EMOTIONBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0x234E0)
#define NABBMLGAIBK_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x94F0)
#define NABBMLGAIBK_GET_ORDERTYPE_OFFSET UNITYSDK_OFFSET(0x12B10)
#define NABBMLGAIBK_GET_PATIENCE_OFFSET UNITYSDK_OFFSET(0x1D20)
#define NABBMLGAIBK_GET_TALKBUBBLEOFFSETR_OFFSET UNITYSDK_OFFSET(0x23480)
#define NABBMLGAIBK_GET_TALKBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0x23450)
#define NABBMLGAIBK_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC313BB0)
#define NABBMLGAIBK_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC313AE0)
#define NABBMLGAIBK_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x23540)
#define NABBMLGAIBK_SET_ACTUALPATIENCE_OFFSET UNITYSDK_OFFSET(0x1B3A0)
#define NABBMLGAIBK_SET_ANGRYMOTIONID_OFFSET UNITYSDK_OFFSET(0x23410)
#define NABBMLGAIBK_SET_APPEARLEVELIDLIST_OFFSET UNITYSDK_OFFSET(0x23520)
#define NABBMLGAIBK_SET_BEHAVIORCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xAD10)
#define NABBMLGAIBK_SET_CALMMOTIONID_OFFSET UNITYSDK_OFFSET(0xAD30)
#define NABBMLGAIBK_SET_COINBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0x234D0)
#define NABBMLGAIBK_SET_CONFIGENTITYPATH_OFFSET UNITYSDK_OFFSET(0x94E0)
#define NABBMLGAIBK_SET_CUSTOMERID_OFFSET UNITYSDK_OFFSET(0xAF40)
#define NABBMLGAIBK_SET_EMOJIBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0x23440)
#define NABBMLGAIBK_SET_EMOTIONBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0x23500)
#define NABBMLGAIBK_SET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x9500)
#define NABBMLGAIBK_SET_ORDERTYPE_OFFSET UNITYSDK_OFFSET(0x12B20)
#define NABBMLGAIBK_SET_PATIENCE_OFFSET UNITYSDK_OFFSET(0x233F0)
#define NABBMLGAIBK_SET_TALKBUBBLEOFFSETR_OFFSET UNITYSDK_OFFSET(0x234A0)
#define NABBMLGAIBK_SET_TALKBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0x23470)
#define NABBMLGAIBK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x23530)

inline static constexpr unsigned int NABBMLGAIBK_TypeDefinitionIndex = 79852;

	struct alignas(8) NABBMLGAIBK
	{
		::System::UInt32 _CustomerID_k__BackingField; // 0x10
		::System::UInt32 _OrderType_k__BackingField; // 0x14
		::System::Single _Patience_k__BackingField; // 0x18
		::System::Single _ActualPatience_k__BackingField; // 0x1C
		::System::String* _ConfigEntityPath_k__BackingField; // 0x20
		::System::String* _JsonPath_k__BackingField; // 0x28
		::System::String* _BehaviorConfigPath_k__BackingField; // 0x30
		::System::UInt32 _CalmMotionID_k__BackingField; // 0x38
		::System::UInt32 _AngryMotionID_k__BackingField; // 0x3C
		::UnityEngine::Vector3 _EmojiBubbleOffset_k__BackingField; // 0x40
		::UnityEngine::Vector3 _TalkBubbleOffset_k__BackingField; // 0x4C
		::UnityEngine::Vector3 _TalkBubbleOffsetR_k__BackingField; // 0x58
		::UnityEngine::Vector3 _CoinBubbleOffset_k__BackingField; // 0x64
		::UnityEngine::Vector3 _EmotionBubbleOffset_k__BackingField; // 0x70
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::UInt32>* _AppearLevelIDList_k__BackingField; // 0x80
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::UInt32 a8, ::System::UInt32 a9, ::UnityEngine::Vector3 a10, ::UnityEngine::Vector3 a11, ::UnityEngine::Vector3 a12, ::UnityEngine::Vector3 a13, ::UnityEngine::Vector3 a14, ::System::Collections::Generic::List_1<::System::UInt32>* a15)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::System::String*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NABBMLGAIBK_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
		}

		::System::UInt32 get_CustomerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBMLGAIBK_GET_CUSTOMERID_OFFSET))(this);
		}

		::System::Void set_CustomerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NABBMLGAIBK_SET_CUSTOMERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_OrderType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBMLGAIBK_GET_ORDERTYPE_OFFSET))(this);
		}

		::System::Void set_OrderType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NABBMLGAIBK_SET_ORDERTYPE_OFFSET))(this, a1);
		}

		::System::Single get_Patience()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBMLGAIBK_GET_PATIENCE_OFFSET))(this);
		}

		::System::Void set_Patience(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NABBMLGAIBK_SET_PATIENCE_OFFSET))(this, a1);
		}

		::System::Single get_ActualPatience()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBMLGAIBK_GET_ACTUALPATIENCE_OFFSET))(this);
		}

		::System::Void set_ActualPatience(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NABBMLGAIBK_SET_ACTUALPATIENCE_OFFSET))(this, a1);
		}

		::System::String* get_ConfigEntityPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBMLGAIBK_GET_CONFIGENTITYPATH_OFFSET))(this);
		}

		::System::Void set_ConfigEntityPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NABBMLGAIBK_SET_CONFIGENTITYPATH_OFFSET))(this, a1);
		}

		::System::String* get_JsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBMLGAIBK_GET_JSONPATH_OFFSET))(this);
		}

		::System::Void set_JsonPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NABBMLGAIBK_SET_JSONPATH_OFFSET))(this, a1);
		}

		::System::String* get_BehaviorConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBMLGAIBK_GET_BEHAVIORCONFIGPATH_OFFSET))(this);
		}

		::System::Void set_BehaviorConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NABBMLGAIBK_SET_BEHAVIORCONFIGPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_CalmMotionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBMLGAIBK_GET_CALMMOTIONID_OFFSET))(this);
		}

		::System::Void set_CalmMotionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NABBMLGAIBK_SET_CALMMOTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_AngryMotionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBMLGAIBK_GET_ANGRYMOTIONID_OFFSET))(this);
		}

		::System::Void set_AngryMotionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NABBMLGAIBK_SET_ANGRYMOTIONID_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_EmojiBubbleOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBMLGAIBK_GET_EMOJIBUBBLEOFFSET_OFFSET))(this);
		}

		::System::Void set_EmojiBubbleOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NABBMLGAIBK_SET_EMOJIBUBBLEOFFSET_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_TalkBubbleOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBMLGAIBK_GET_TALKBUBBLEOFFSET_OFFSET))(this);
		}

		::System::Void set_TalkBubbleOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NABBMLGAIBK_SET_TALKBUBBLEOFFSET_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_TalkBubbleOffsetR()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBMLGAIBK_GET_TALKBUBBLEOFFSETR_OFFSET))(this);
		}

		::System::Void set_TalkBubbleOffsetR(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NABBMLGAIBK_SET_TALKBUBBLEOFFSETR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_CoinBubbleOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBMLGAIBK_GET_COINBUBBLEOFFSET_OFFSET))(this);
		}

		::System::Void set_CoinBubbleOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NABBMLGAIBK_SET_COINBUBBLEOFFSET_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_EmotionBubbleOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBMLGAIBK_GET_EMOTIONBUBBLEOFFSET_OFFSET))(this);
		}

		::System::Void set_EmotionBubbleOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NABBMLGAIBK_SET_EMOTIONBUBBLEOFFSET_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AppearLevelIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBMLGAIBK_GET_APPEARLEVELIDLIST_OFFSET))(this);
		}

		::System::Void set_AppearLevelIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NABBMLGAIBK_SET_APPEARLEVELIDLIST_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBMLGAIBK_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + NABBMLGAIBK_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::NABBMLGAIBK a1, ::NABBMLGAIBK a2)
		{
			return ((::System::Boolean(*)(::NABBMLGAIBK, ::NABBMLGAIBK))((::PBYTE)hIl2Cpp + NABBMLGAIBK_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::NABBMLGAIBK a1, ::NABBMLGAIBK a2)
		{
			return ((::System::Boolean(*)(::NABBMLGAIBK, ::NABBMLGAIBK))((::PBYTE)hIl2Cpp + NABBMLGAIBK_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NABBMLGAIBK_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NABBMLGAIBK_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::NABBMLGAIBK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NABBMLGAIBK))((::PBYTE)hIl2Cpp + NABBMLGAIBK_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::UInt32 a8, ::System::UInt32 a9, ::UnityEngine::Vector3 a10, ::UnityEngine::Vector3 a11, ::UnityEngine::Vector3 a12, ::UnityEngine::Vector3 a13, ::UnityEngine::Vector3 a14, ::System::Object* a15)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::System::String*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Object*))((::PBYTE)hIl2Cpp + NABBMLGAIBK_DECONSTRUCT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
		}

	};
