#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ASATPRAMADDICEITEMSETOPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9E320)
#define RPG_CLIENT_ASATPRAMADDICEITEMSETOPTION_GET_DISPLAYITEMID_OFFSET UNITYSDK_OFFSET(0x1CA9E340)
#define RPG_CLIENT_ASATPRAMADDICEITEMSETOPTION_GET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0x1CA9E350)
#define RPG_CLIENT_ASATPRAMADDICEITEMSETOPTION_GET_SETID_OFFSET UNITYSDK_OFFSET(0x1CA9E330)

namespace RPG::Client
{
	inline static constexpr unsigned int AsatPramadDiceItemSetOption_TypeDefinitionIndex = 68794;

	class AsatPramadDiceItemSetOption : public ::System::Object
	{
	public:
		::System::UInt32 _DisplayItemID_k__BackingField; // 0x10
		::System::Boolean _IsRecommend_k__BackingField; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt32 _SetID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMSETOPTION_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_SetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMSETOPTION_GET_SETID_OFFSET))(this);
		}

		::System::UInt32 get_DisplayItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMSETOPTION_GET_DISPLAYITEMID_OFFSET))(this);
		}

		::System::Boolean get_IsRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASATPRAMADDICEITEMSETOPTION_GET_ISRECOMMEND_OFFSET))(this);
		}

	};
}
