#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingContentType.h"
#include "unitysdk/System/Object.h"

#define AJPBKMBIGNC_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC8980)
#define AJPBKMBIGNC_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x12CC8940)
#define AJPBKMBIGNC_GET_CYCLEID_OFFSET UNITYSDK_OFFSET(0x12CC8900)
#define AJPBKMBIGNC_GET_DAY_OFFSET UNITYSDK_OFFSET(0x12CC8920)
#define AJPBKMBIGNC_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x12CC8960)
#define AJPBKMBIGNC_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x12CC8950)
#define AJPBKMBIGNC_SET_CYCLEID_OFFSET UNITYSDK_OFFSET(0x12CC8910)
#define AJPBKMBIGNC_SET_DAY_OFFSET UNITYSDK_OFFSET(0x12CC8930)
#define AJPBKMBIGNC_SET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x12CC8970)

inline static constexpr unsigned int AJPBKMBIGNC_TypeDefinitionIndex = 81661;

	class AJPBKMBIGNC : public ::System::Object
	{
	public:
		::RPG::GameCore::B51RacingContentType _ContentType_k__BackingField; // 0x10
		::System::UInt32 _CycleID_k__BackingField; // 0x14
		::System::Boolean _IsCompleted_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 _Day_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPBKMBIGNC_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CycleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPBKMBIGNC_GET_CYCLEID_OFFSET))(this);
		}

		::System::Void set_CycleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJPBKMBIGNC_SET_CYCLEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Day()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPBKMBIGNC_GET_DAY_OFFSET))(this);
		}

		::System::Void set_Day(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJPBKMBIGNC_SET_DAY_OFFSET))(this, a1);
		}

		::RPG::GameCore::B51RacingContentType get_ContentType()
		{
			return ((::RPG::GameCore::B51RacingContentType(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPBKMBIGNC_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::RPG::GameCore::B51RacingContentType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingContentType))((::PBYTE)hIl2Cpp + AJPBKMBIGNC_SET_CONTENTTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPBKMBIGNC_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void set_IsCompleted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJPBKMBIGNC_SET_ISCOMPLETED_OFFSET))(this, a1);
		}

	};
