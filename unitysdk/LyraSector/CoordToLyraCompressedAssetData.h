#pragma once
#include "unitysdk/unitysdk.h"

#define LYRASECTOR_COORDTOLYRACOMPRESSEDASSETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C970570)

namespace LyraSector
{
	inline static constexpr unsigned int CoordToLyraCompressedAssetData_TypeDefinitionIndex = 26703;

	class CoordToLyraCompressedAssetData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_COORDTOLYRACOMPRESSEDASSETDATA__CTOR_OFFSET))(this);
		}
	};
}
