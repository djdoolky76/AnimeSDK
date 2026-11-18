#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace System { template <typename T> class Action_1; }

#define FOUNDATION_TEXTDATAASSETPROXY_LOADBYTESASSET_OFFSET UNITYSDK_OFFSET(0x15F05F70)

namespace Foundation
{
	inline static constexpr unsigned int TextDataAssetProxy_TypeDefinitionIndex = 80378;

	class TextDataAssetProxy : public ::System::Object
	{
	public:
		static ::System::Void LoadBytesAsset(::Foundation::AssetPath configPath, ::System::Action_1<::Il2CppArray<::System::Byte>*>* complete, ::System::Boolean isAsync)
		{
			return ((::System::Void(*)(::Foundation::AssetPath, ::System::Action_1<::Il2CppArray<::System::Byte>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTDATAASSETPROXY_LOADBYTESASSET_OFFSET))(configPath, complete, isAsync);
		}
	};
}
