#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace ZXing::QrCode::Internal { class ErrorCorrectionLevel; }
namespace ZXing::QrCode::Internal { class Version; }
namespace ZXing::QrCode::Internal { class Version_ECBlocks; }

#define ZXING_QRCODE_INTERNAL_VERSION_BUILDVERSIONS_OFFSET UNITYSDK_OFFSET(0x1F6DCF40)
#define ZXING_QRCODE_INTERNAL_VERSION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6E5920)
#define ZXING_QRCODE_INTERNAL_VERSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6DCE70)
#define ZXING_QRCODE_INTERNAL_VERSION_GETECBLOCKSFORLEVEL_OFFSET UNITYSDK_OFFSET(0x1F6D48B0)
#define ZXING_QRCODE_INTERNAL_VERSION_GETVERSIONFORNUMBER_OFFSET UNITYSDK_OFFSET(0x1F6D4470)
#define ZXING_QRCODE_INTERNAL_VERSION_GET_DIMENSIONFORVERSION_OFFSET UNITYSDK_OFFSET(0x1F6D58D0)
#define ZXING_QRCODE_INTERNAL_VERSION_GET_TOTALCODEWORDS_OFFSET UNITYSDK_OFFSET(0x1F6DCF20)
#define ZXING_QRCODE_INTERNAL_VERSION_GET_VERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F6DCF10)
#define ZXING_QRCODE_INTERNAL_VERSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6DCF30)

namespace ZXing::QrCode::Internal
{
	class Version : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* ecBlocks; // 0x10
		::Il2CppArray<::System::Int32>* alignmentPatternCenters; // 0x18
		::System::Int32 versionNumber; // 0x20
		::System::Int32 totalCodewords; // 0x24
		static ::Il2CppArray<::System::Int32>** StaticGet_VERSION_DECODE_INFO()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.QrCode.Internal", "Version")->GetStaticField(0x239B0);
		}

		static ::Il2CppArray<::ZXing::QrCode::Internal::Version*>** StaticGet_VERSIONS()
		{
			return (::Il2CppArray<::ZXing::QrCode::Internal::Version*>**)UnitySDK::FromName("ZXing.QrCode.Internal", "Version")->GetStaticField(0x239B8);
		}

		::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_CCTOR_OFFSET))();
		}

		::System::Int32 get_VersionNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_GET_VERSIONNUMBER_OFFSET))(this);
		}

		::System::Int32 get_TotalCodewords()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_GET_TOTALCODEWORDS_OFFSET))(this);
		}

		::System::Int32 get_DimensionForVersion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_GET_DIMENSIONFORVERSION_OFFSET))(this);
		}

		::ZXing::QrCode::Internal::Version_ECBlocks* getECBlocksForLevel(::ZXing::QrCode::Internal::ErrorCorrectionLevel* a1)
		{
			return ((::ZXing::QrCode::Internal::Version_ECBlocks*(*)(::PVOID, ::ZXing::QrCode::Internal::ErrorCorrectionLevel*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_GETECBLOCKSFORLEVEL_OFFSET))(this, a1);
		}

		static ::ZXing::QrCode::Internal::Version* getVersionForNumber(::System::Int32 a1)
		{
			return ((::ZXing::QrCode::Internal::Version*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_GETVERSIONFORNUMBER_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_TOSTRING_OFFSET))(this);
		}

		static ::Il2CppArray<::ZXing::QrCode::Internal::Version*>* buildVersions()
		{
			return ((::Il2CppArray<::ZXing::QrCode::Internal::Version*>*(*)())((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_BUILDVERSIONS_OFFSET))();
		}

	};
}
