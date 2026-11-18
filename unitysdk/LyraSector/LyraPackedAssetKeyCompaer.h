#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LyraSector/LyraPackedAssetUtils_PackedAssetKey.h"

#define LYRASECTOR_LYRAPACKEDASSETKEYCOMPAER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E356650)
#define LYRASECTOR_LYRAPACKEDASSETKEYCOMPAER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3566D0)
#define LYRASECTOR_LYRAPACKEDASSETKEYCOMPAER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E356730)

namespace LyraSector
{
	inline static constexpr unsigned int LyraPackedAssetKeyCompaer_TypeDefinitionIndex = 26389;

	class LyraPackedAssetKeyCompaer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSETKEYCOMPAER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::LyraSector::LyraPackedAssetUtils_PackedAssetKey l, ::LyraSector::LyraPackedAssetUtils_PackedAssetKey r)
		{
			return ((::System::Boolean(*)(::PVOID, ::LyraSector::LyraPackedAssetUtils_PackedAssetKey, ::LyraSector::LyraPackedAssetUtils_PackedAssetKey))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSETKEYCOMPAER_EQUALS_OFFSET))(this, l, r);
		}

		::System::Int32 GetHashCode(::LyraSector::LyraPackedAssetUtils_PackedAssetKey key)
		{
			return ((::System::Int32(*)(::PVOID, ::LyraSector::LyraPackedAssetUtils_PackedAssetKey))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSETKEYCOMPAER_GETHASHCODE_OFFSET))(this, key);
		}
	};
}
