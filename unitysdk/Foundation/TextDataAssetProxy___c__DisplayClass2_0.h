#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_TEXTDATAASSETPROXY___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13242080)
#define FOUNDATION_TEXTDATAASSETPROXY___C__DISPLAYCLASS2_0__LOADBYTESASSET_B__0_OFFSET UNITYSDK_OFFSET(0x13242090)

namespace Foundation
{
	inline static constexpr unsigned int TextDataAssetProxy___c__DisplayClass2_0_TypeDefinitionIndex = 80381;

	class TextDataAssetProxy___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Il2CppArray<::System::Byte>*>* complete; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTDATAASSETPROXY___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadBytesAsset_b__0(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle requestHandle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTDATAASSETPROXY___C__DISPLAYCLASS2_0__LOADBYTESASSET_B__0_OFFSET))(this, asset, requestHandle);
		}
	};
}
