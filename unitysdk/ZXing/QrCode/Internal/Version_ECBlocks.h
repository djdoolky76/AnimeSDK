#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6E5910)
#define ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GETECBLOCKS_OFFSET UNITYSDK_OFFSET(0x1F6E59F0)
#define ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GET_ECCODEWORDSPERBLOCK_OFFSET UNITYSDK_OFFSET(0x1F6E59E0)
#define ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GET_NUMBLOCKS_OFFSET UNITYSDK_OFFSET(0x1F6D4BC0)
#define ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GET_TOTALECCODEWORDS_OFFSET UNITYSDK_OFFSET(0x1F6D48F0)

namespace ZXing::QrCode::Internal
{
	class Version_ECBlocks : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* ecBlocks; // 0x10
		::System::Int32 ecCodewordsPerBlock; // 0x18
		::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_ECCodewordsPerBlock()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GET_ECCODEWORDSPERBLOCK_OFFSET))(this);
		}

		::System::Int32 get_NumBlocks()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GET_NUMBLOCKS_OFFSET))(this);
		}

		::System::Int32 get_TotalECCodewords()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GET_TOTALECCODEWORDS_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* getECBlocks()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GETECBLOCKS_OFFSET))(this);
		}

	};
}
