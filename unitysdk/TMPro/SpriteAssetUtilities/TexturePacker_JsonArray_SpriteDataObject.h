#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/SpriteAssetUtilities/TexturePacker_JsonArray_Meta.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define TMPRO_SPRITEASSETUTILITIES_TEXTUREPACKER_JSONARRAY_SPRITEDATAOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2EA2E0)

namespace TMPro::SpriteAssetUtilities
{
	class TexturePacker_JsonArray_SpriteDataObject : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* frames; // 0x10
		::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta meta; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_SPRITEASSETUTILITIES_TEXTUREPACKER_JSONARRAY_SPRITEDATAOBJECT_CTOR_OFFSET))(this);
		}

	};
}
