#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICCRYPTOBASE_RESET_OFFSET UNITYSDK_OFFSET(0x20066E40)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICCRYPTOBASE_SETKEYS_OFFSET UNITYSDK_OFFSET(0x20066A40)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICCRYPTOBASE_TRANSFORMBYTE_OFFSET UNITYSDK_OFFSET(0x200669F0)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICCRYPTOBASE_UPDATEKEYS_OFFSET UNITYSDK_OFFSET(0x20066BC0)
#define ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICCRYPTOBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x20066EB0)

namespace ICSharpCode::SharpZipLib::Encryption
{
	inline static constexpr unsigned int PkzipClassicCryptoBase_TypeDefinitionIndex = 6806;

	class PkzipClassicCryptoBase : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* keys; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICCRYPTOBASE__CTOR_OFFSET))(this);
		}

		::System::Byte TransformByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICCRYPTOBASE_TRANSFORMBYTE_OFFSET))(this);
		}

		::System::Void SetKeys(::Il2CppArray<::System::Byte>* keyData)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICCRYPTOBASE_SETKEYS_OFFSET))(this, keyData);
		}

		::System::Void UpdateKeys(::System::Byte ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICCRYPTOBASE_UPDATEKEYS_OFFSET))(this, ch);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ENCRYPTION_PKZIPCLASSICCRYPTOBASE_RESET_OFFSET))(this);
		}
	};
}
