#pragma once
#include "unitysdk/unitysdk.h"

#define KLKEKKDGBAO_EHHAHMPEADF_GET_VAL_OFFSET UNITYSDK_OFFSET(0x1D00)
#define KLKEKKDGBAO_EHHAHMPEADF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x164E0)
#define KLKEKKDGBAO_EHHAHMPEADF_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x16470)
#define KLKEKKDGBAO_EHHAHMPEADF_SET_VAL_OFFSET UNITYSDK_OFFSET(0x14E00)

inline static constexpr unsigned int KLKEKKDGBAO_EHHAHMPEADF_TypeDefinitionIndex = 56963;

	struct alignas(4) KLKEKKDGBAO_EHHAHMPEADF
	{
		::System::Single _Val_k__BackingField; // 0x10
		::System::Single get_Val()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKEKKDGBAO_EHHAHMPEADF_GET_VAL_OFFSET))(this);
		}

		::System::Void set_Val(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLKEKKDGBAO_EHHAHMPEADF_SET_VAL_OFFSET))(this, a1);
		}

		::System::Boolean PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLKEKKDGBAO_EHHAHMPEADF_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKEKKDGBAO_EHHAHMPEADF_KHGIKBFDLFB_OFFSET))(this);
		}

	};
