#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_BKLLJOLMAOH_CTOR_OFFSET UNITYSDK_OFFSET(0xC7F7270)
#define RPG_CLIENT_BATCHANIMATIONVARIANTASSET_BKLLJOLMAOH_RESET_OFFSET UNITYSDK_OFFSET(0xC7F7220)

namespace RPG::Client
{
	class BatchAnimationVariantAsset_BKLLJOLMAOH : public ::System::Object
	{
	public:
		::System::Int32 NOIEMNLMACN; // 0x10
		::System::Int32 IIELGFGEDPG; // 0x14
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
