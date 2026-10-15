#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_BKLLJOLMAOH_CTOR_OFFSET UNITYSDK_OFFSET(0xC7F0C20)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_BKLLJOLMAOH_RESET_OFFSET UNITYSDK_OFFSET(0xC7F0BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int BatchAnimationVariantAsset_BKLLJOLMAOH_TypeDefinitionIndex = 69526;

	class BatchAnimationVariantAsset_BKLLJOLMAOH : public ::System::Object
	{
	public:
		::System::Int32 IIELGFGEDPG; // 0x10
		::System::Int32 NOIEMNLMACN; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_BKLLJOLMAOH_CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONVARIANTASSET_BKLLJOLMAOH_RESET_OFFSET))(this);
		}

	};
}
