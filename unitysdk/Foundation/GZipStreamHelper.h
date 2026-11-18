#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_GZIPSTREAMHELPER_COMPRESS_OFFSET UNITYSDK_OFFSET(0x1F3DDE10)
#define FOUNDATION_GZIPSTREAMHELPER_DECOMPRESS_OFFSET UNITYSDK_OFFSET(0x1F3DDB20)

namespace Foundation
{
	inline static constexpr unsigned int GZipStreamHelper_TypeDefinitionIndex = 7860;

	class GZipStreamHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* Decompress(::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FOUNDATION_GZIPSTREAMHELPER_DECOMPRESS_OFFSET))(data);
		}

		static ::Il2CppArray<::System::Byte>* Compress(::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FOUNDATION_GZIPSTREAMHELPER_COMPRESS_OFFSET))(data);
		}
	};
}
