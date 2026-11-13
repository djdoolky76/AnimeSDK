#pragma once
#include "unitysdk/unitysdk.h"

#define CBILPPJLIMK_GET_ISACTIVATE_OFFSET UNITYSDK_OFFSET(0x3E0FB20)
#define CBILPPJLIMK_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x3E0FB00)
#define CBILPPJLIMK_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x7CEEA0)
#define CBILPPJLIMK_SET_ISACTIVATE_OFFSET UNITYSDK_OFFSET(0x3E0FB30)
#define CBILPPJLIMK_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x3E0FB10)
#define CBILPPJLIMK_SET_RATIO_OFFSET UNITYSDK_OFFSET(0xAE5DD0)

inline static constexpr unsigned int CBILPPJLIMK_TypeDefinitionIndex = 73650;

	struct alignas(4) CBILPPJLIMK
	{
		::System::Single _Ratio_k__BackingField; // 0x10
		::System::Boolean _IsShow_k__BackingField; // 0x14
		::System::Boolean _IsActivate_k__BackingField; // 0x15
		::System::Single get_Ratio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CBILPPJLIMK_GET_RATIO_OFFSET))(this);
		}

		::System::Void set_Ratio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBILPPJLIMK_SET_RATIO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBILPPJLIMK_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CBILPPJLIMK_SET_ISSHOW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBILPPJLIMK_GET_ISACTIVATE_OFFSET))(this);
		}

		::System::Void set_IsActivate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CBILPPJLIMK_SET_ISACTIVATE_OFFSET))(this, a1);
		}

	};
