#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/BAVariantKey.h"
namespace RPG::Client { class BAPartVariantRef; }

#define MJMCCBBANDN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1DAA0)

inline static constexpr unsigned int MJMCCBBANDN_TypeDefinitionIndex = 69521;

	struct alignas(8) MJMCCBBANDN
	{
		::UnityEngine::Rendering::BAVariantKey FJFOPHFLGKG; // 0x10
		::System::Int32 NOIEMNLMACN; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::BAPartVariantRef* AJHEFIIPFFK; // 0x28
		::System::Boolean KFJDMBPBOBP; // 0x30
		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMCCBBANDN_KHGIKBFDLFB_OFFSET))(this);
		}

	};
